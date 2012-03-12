#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QSystemTrayIcon>
#include<QStandardItemModel>
#include "ui_mainwindow.h"
class MainWindow : public QMainWindow, public Ui::MainWindow
{
	struct CellInfo{
		QString essid;
		QString mode;
		QString address;
		QString channel;
		QString bit;
		QString quality;
		QString encryption;
		QString interface;
	};
	Q_OBJECT
        public:
                MainWindow(QWidget *parent = 0);
	private slots:
                void actionRefreshTriggered();
		void actionConnectTriggered();
        private:
		void refreshList();
		void connectTo(CellInfo);
		QList<CellInfo> list;
		QStandardItemModel *model;
		
};
#endif
