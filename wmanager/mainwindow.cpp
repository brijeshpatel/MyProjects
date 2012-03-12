#include<QFile>
#include<QTreeView>
#include<QList>
#include<QtCore>
#include<QtGui>
#include<QProcess>
#include<QStandardItemModel>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent)
{
	setupUi(this);
	model = new QStandardItemModel(0,3);
        model->setHorizontalHeaderItem( 0, new QStandardItem( "Network" ) );
        model->setHorizontalHeaderItem( 1, new QStandardItem( "Type" ) );
        model->setHorizontalHeaderItem( 2, new QStandardItem( "Strength" ) );

	treeView->setModel( model );
        connect(treeView,SIGNAL(doubleClicked(const QModelIndex &)),this, SLOT(actionConnectTriggered()));
        connect(actionConnect, SIGNAL(triggered()), this, SLOT(actionConnectTriggered()));
        connect(actionRefresh,SIGNAL(triggered()),this,SLOT(actionRefreshTriggered()));
        connect(actionQuit,SIGNAL(triggered()),qApp,SLOT(quit()));
	refreshList();  


}

void MainWindow::actionRefreshTriggered()
{
        qDebug()<<"Reloading list.....";
	refreshList();
}
void MainWindow::actionConnectTriggered()
{
        QModelIndexList li=treeView->selectionModel()->selectedIndexes();
	int r=li.at(0).row();
        connectTo(list.at(r));
}
void MainWindow::refreshList()
{
	list.clear();
        model->removeRows(1,model->rowCount()-1);
        QProcess scanP;
	scanP.start("iwlist",QStringList() << "wlan0" << "scan");
	QByteArray output;
        while(scanP.waitForFinished()){
        }
	output=scanP.readAll();
	QStringList strList = QString(output).split('\n');
	QString interface="";
	CellInfo cell;	
	for(int i=0; i<strList.size(); i++)
	{
                QStringList tokens = strList.at(i).split(' ',QString::SkipEmptyParts);
		qDebug() << tokens;
		if(tokens.size()==0) continue;
		if(tokens.size()==1)
		{
			if(tokens.at(0).contains("ESSID:"))
			{
				cell.essid=tokens.at(0).split(':').at(1).split('"',QString::SkipEmptyParts).at(0);
			}
			if(tokens.at(0).contains("Mode:"))
			{
				cell.mode=tokens.at(0).split(':').at(1);
                                if(cell.mode=="Master"){cell.mode="Managed";}
				list << cell;
				QList<QStandardItem*> row;
				row.append(new QStandardItem(cell.essid));
				row.append(new QStandardItem(cell.mode));
				row.append(new QStandardItem(cell.quality));
                                qDebug() <<"Added:"<< row ;
				model->appendRow(row);			
			}
			if(tokens.at(0).contains("Channel:"))
			{
				cell.channel=tokens.at(0).split(':').at(1);
			}
			continue;
		}
		if(tokens.size()==2)
		{
			if(tokens.at(0).contains("Encryption"))
			{
				cell.encryption=tokens.at(1).split(':').at(1);
			}
			continue;
		}
		if(tokens.size()>=3)
		{
			if(tokens.at(1)=="Scan" && tokens.at(2)=="completed")
			{
				interface = tokens.at(0);
				continue;
			}
			if(tokens.at(0)=="Cell" && tokens.at(3)=="Address:")
			{
				cell.address=tokens.at(4);
				cell.interface=interface;
				continue;
			}
			if(tokens.at(0).contains("Quality="))
			{
				cell.quality=tokens.at(0).split('=').at(1);
				continue;
			}
			
		}
	}
		
}
void MainWindow::connectTo(CellInfo cell)
{
    bool ok;
    QString password = QInputDialog::getText(this, tr("Password Required!!"),
                                         tr("<b>System Policy Prevents all users<br> to change network settings</b><br> Root password is required!!"), QLineEdit::Password,
                                         "", &ok);
    if (ok && !password.isEmpty())
    {
        qDebug()<<password;
        system(QString("echo "+password+" | sudo -S echo authorized").toLocal8Bit());
        system(QString("echo "+password+" | sudo -S iwconfig "+cell.interface+" mode "+cell.mode).toLocal8Bit());
        system(QString("echo "+password+" | sudo -S iwconfig "+cell.interface+" essid "+cell.essid).toLocal8Bit());
        system(QString("echo "+password+" | sudo -S dhcpcd "+cell.interface).toLocal8Bit());
    }

        //system(QString("echo "+password+" | sudo -S echo authorized").toLocal8Bit());
}
