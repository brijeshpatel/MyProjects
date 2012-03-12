#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QTcpSocket>
#include <QSystemTrayIcon>
class QMenu;
#include "ui_mainwindow.h"
class QTimer;
class MainWindow : public QDialog, public Ui::MainWindow
{
	Q_OBJECT
	public:
		MainWindow(QWidget *parent = 0);
	private slots:
		void loginButtonClicked();
		void saveSettings();
		void sendMsg();
		void readMsg();
		void displayError(QAbstractSocket::SocketError);
		void iconActivated(QSystemTrayIcon::ActivationReason);
		void loginAgain();
		void handleEditing(const QString &);
	private:
		void processReply();
		void loadSettings();
		void createIcon();
		void createActions();
		QTcpSocket *socket;
		QTimer *timer;
		QString request;
		QString reply;
		QMenu *trayMenu;
		QSystemTrayIcon *tray;
    		QAction *loginAction;
    		QAction *quitAction;
                QAction *reLogin;
	protected:
                void changeEvent(QEvent *event);
};
#endif

