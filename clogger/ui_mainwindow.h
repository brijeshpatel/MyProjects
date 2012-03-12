/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Mar 10 00:47:44 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *userHLayout;
    QLabel *userL;
    QLineEdit *user;
    QHBoxLayout *passHLayout;
    QLabel *passL;
    QLineEdit *password;
    QHBoxLayout *footHLayout;
    QCheckBox *rememberMe;
    QPushButton *loginButton;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(230, 120);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(212, 106));
        MainWindow->setMaximumSize(QSize(230, 120));
        MainWindow->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/BitComet.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(0.91);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        layoutWidget = new QWidget(MainWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 201, 84));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userHLayout = new QHBoxLayout();
        userHLayout->setObjectName(QString::fromUtf8("userHLayout"));
        userL = new QLabel(layoutWidget);
        userL->setObjectName(QString::fromUtf8("userL"));

        userHLayout->addWidget(userL);

        user = new QLineEdit(layoutWidget);
        user->setObjectName(QString::fromUtf8("user"));

        userHLayout->addWidget(user);


        verticalLayout->addLayout(userHLayout);

        passHLayout = new QHBoxLayout();
        passHLayout->setObjectName(QString::fromUtf8("passHLayout"));
        passL = new QLabel(layoutWidget);
        passL->setObjectName(QString::fromUtf8("passL"));

        passHLayout->addWidget(passL);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        password->setEchoMode(QLineEdit::Password);

        passHLayout->addWidget(password);


        verticalLayout->addLayout(passHLayout);

        footHLayout = new QHBoxLayout();
        footHLayout->setObjectName(QString::fromUtf8("footHLayout"));
        rememberMe = new QCheckBox(layoutWidget);
        rememberMe->setObjectName(QString::fromUtf8("rememberMe"));

        footHLayout->addWidget(rememberMe);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        footHLayout->addWidget(loginButton);


        verticalLayout->addLayout(footHLayout);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "clogger", 0, QApplication::UnicodeUTF8));
        userL->setText(QApplication::translate("MainWindow", "Username  :", 0, QApplication::UnicodeUTF8));
        passL->setText(QApplication::translate("MainWindow", "Password   :", 0, QApplication::UnicodeUTF8));
        rememberMe->setText(QApplication::translate("MainWindow", "Remember Me", 0, QApplication::UnicodeUTF8));
        loginButton->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
