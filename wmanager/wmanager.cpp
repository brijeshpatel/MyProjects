#include <QApplication>
#include "mainwindow.h"
int main(int argc, char *argv[])
{
        QApplication app(argc, argv);
        MainWindow *dialog = new MainWindow;
        //dialog->setWindowFlags(Qt::FramelessWindowHint);
        dialog->show();
        return app.exec();
}

