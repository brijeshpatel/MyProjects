#include<QSettings>
#include<QtGui>
#include<QTcpSocket>
#include<QTimer>
#include<QMenu>
#include "mainwindow.h"
MainWindow::MainWindow(QWidget *parent):QDialog(parent)
{
        setupUi(this);
        socket=new QTcpSocket(this);
	timer=new QTimer(this);
	connect(loginButton,SIGNAL(clicked()),this,SLOT(loginButtonClicked()));
	connect(user,SIGNAL(textChanged(const QString&)),this,SLOT(handleEditing(const QString&)));
	connect(rememberMe,SIGNAL(toggled(bool)),this,SLOT(saveSettings()));
	connect(socket, SIGNAL(readyRead()), this, SLOT(readMsg()));
        connect(socket,SIGNAL(connected()),this,SLOT(sendMsg()));
        connect(socket, SIGNAL(error(QAbstractSocket::SocketError)),this, SLOT(displayError(QAbstractSocket::SocketError)));
	connect(timer,SIGNAL(timeout()),this,SLOT(loginAgain()));
        loadSettings();
        saveSettings();
        createActions();
	createIcon();
	tray->show();

}
void MainWindow::handleEditing(const QString &text)
{
	password->setText("");
}
void MainWindow::changeEvent(QEvent *event)
{
    if(event->type() == QEvent::WindowStateChange) {
        if(isMinimized()) {
            this->hide();
            event->ignore();
        }
    }
}
void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
	switch (reason) {
    		case QSystemTrayIcon::Trigger:
    		case QSystemTrayIcon::DoubleClick:
			if(this->isVisible()){
				this->hide();
		                QSettings s("CLogger", "clogger");
    				s.setValue("geometry", saveGeometry());
    			}else{
				this->show();
				setWindowState((windowState() & ~Qt::WindowMinimized) | Qt::WindowActive);
				QSettings settings("CLogger", "clogger");
				restoreGeometry(settings.value("geometry", QByteArray()).toByteArray());
			}
			break;
		default:
			break;
	}
}
void MainWindow::loginButtonClicked()
{
	QString mode = loginButton->text();
	if(mode=="Login")
	{
		request="mode=191&username="+user->text()+"&password="+password->text()+"&a=1310333767643";
                request = QString("POST /login.xml HTTP/1.1\r\nHost: 10.100.56.55:8090\r\nContent-Length: %1").arg(request.length())+"\r\n\r\n"+request;
                qDebug() << request;
		saveSettings();

	}else{
		request="mode=193&username="+user->text()+"&a=1310333767643";
		request = QString("POST /login.xml HTTP/1.1\r\nHost: 10.100.56.55:8090\r\nContent-Length: %1").arg(request.length())+"\r\n\r\n"+request;
                qDebug() << request;
		loginButton->setText("Login");
                user->setEnabled(true);
                password->setEnabled(true);
                rememberMe->setEnabled(true);
                if(!rememberMe->isChecked())
                {
                        password->setText("");
                }
		timer->stop();
		loginAction->setText("Login");
                tray->setIcon(QIcon(":/icons/user_red.png"));
                reLogin->setVisible(false);
	}
	socket->abort();
	socket->connectToHost("10.100.56.55",8090);
}
void MainWindow::processReply()
{
	qDebug() << reply;
	if(reply.contains("You have successfully logged in"))
	{
		 loginAction->setText("Logout");
	         loginButton->setText("Logout");
                 reLogin->setVisible(true);
	         user->setEnabled(false);
                 password->setEnabled(false);
                 rememberMe->setEnabled(false);
                 timer->start(1800000);
                 tray->setIcon(QIcon(":/icons/user_green.png"));
	}
        else
        {
            tray->setIcon(QIcon(":/icons/user_red.png"));
        }
}
void MainWindow::saveSettings()
{
	QSettings settings("CLogger", "clogger");
	settings.setValue("username", user->text());
	settings.setValue("password", password->text());
	settings.setValue("remember", rememberMe->isChecked());
}
void MainWindow::loadSettings()
{
	QSettings settings("CLogger", "clogger");
	QString username = settings.value("username","").toString();
	QString pass = settings.value("password","").toString();
	bool remember = settings.value("remember",false).toBool();
	restoreGeometry(settings.value("geometry", QByteArray()).toByteArray());
	user->setText(username);
	if(remember)
	{
		if(username!="" && pass!=""){
			//user->setText(username);
			password->setText(pass);
			rememberMe->setChecked(true);
		}
	}
}
void MainWindow::displayError(QAbstractSocket::SocketError socketError)
{
     switch (socketError) {
     case QAbstractSocket::RemoteHostClosedError:
         break;
     case QAbstractSocket::HostNotFoundError:
         QMessageBox::information(this, tr("Cyberoam Client"),
                                  tr("The host was not found. "));
         break;
     case QAbstractSocket::ConnectionRefusedError:
         QMessageBox::information(this, tr("Cyberoam Client"),
                                  tr("The connection was refused by the peer. "));
         break;
     default:
         //QMessageBox::information(this, tr("Cyberoam Client"),
         //                         tr("The following error occurred: %1.")
         //                         .arg(socket->errorString()));
	 tray->showMessage("clogger",socket->errorString(),QSystemTrayIcon::Information,3000);
	 break;
     }
}
void MainWindow::sendMsg()
{
	socket->write(request.toAscii());
}
void MainWindow::readMsg()
{
	reply="";
	while(socket->bytesAvailable())
        {
                reply=reply+QString(socket->readAll());
        }
	processReply();
}
void MainWindow::loginAgain()
{
	request="mode=191&username="+user->text()+"&password="+password->text()+"&a=1310333767643";
        request = QString("POST /login.xml HTTP/1.1\r\nHost: 10.100.56.55:8090\r\nContent-Length: %1").arg(request.length())+"\r\n\r\n"+request;
        qDebug() << request;
	socket->abort();
        socket->connectToHost("10.100.56.55",8090);
        timer->stop();
	timer->start(1800000);
	
}
void MainWindow::createIcon()
{
	trayMenu = new QMenu(this);
    	trayMenu->addAction(loginAction);
        trayMenu->addAction(reLogin);
        reLogin->setVisible(false);
        trayMenu->addSeparator();
    	trayMenu->addAction(quitAction);
        tray = new QSystemTrayIcon(this);
        tray->setIcon(QIcon(":/icons/user_red.png"));
    	tray->setContextMenu(trayMenu);
        connect(tray, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
}
void MainWindow::createActions()
{
    loginAction = new QAction(tr("Login"), this);
    loginAction->setIcon(QIcon(":/icons/download.ico"));
    connect(loginAction, SIGNAL(triggered()), this, SLOT(loginButtonClicked()));

    quitAction = new QAction(tr("&Quit"), this);
    quitAction->setIcon(QIcon(":/icons/quit.png"));
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    reLogin = new QAction(tr("&ReLogin"), this);
    reLogin->setIcon(QIcon(":/icons/reload.png"));
    connect(reLogin, SIGNAL(triggered()), this, SLOT(loginAgain()));
}
