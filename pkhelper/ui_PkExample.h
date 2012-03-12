/********************************************************************************
** Form generated from reading UI file 'PkExample.ui'
**
** Created: Mon Feb 6 18:35:53 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PKEXAMPLE_H
#define UI_PKEXAMPLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PkExample
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *playPB;
    QPushButton *cryPB;
    QPushButton *kickPB;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *deletePB;
    QPushButton *bleedPB;
    QVBoxLayout *verticalLayout;
    QPushButton *listenPB;
    QCheckBox *listenCB;
    QLabel *label_7;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QMenuBar *menubar;
    QMenu *menuActions;
    QToolBar *toolBar;

    void setupUi(QMainWindow *PkExample)
    {
        if (PkExample->objectName().isEmpty())
            PkExample->setObjectName(QString::fromUtf8("PkExample"));
        PkExample->resize(571, 480);
        centralwidget = new QWidget(PkExample);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(true);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        playPB = new QPushButton(centralwidget);
        playPB->setObjectName(QString::fromUtf8("playPB"));

        gridLayout->addWidget(playPB, 1, 0, 1, 1);

        cryPB = new QPushButton(centralwidget);
        cryPB->setObjectName(QString::fromUtf8("cryPB"));

        gridLayout->addWidget(cryPB, 1, 2, 1, 1);

        kickPB = new QPushButton(centralwidget);
        kickPB->setObjectName(QString::fromUtf8("kickPB"));

        gridLayout->addWidget(kickPB, 1, 4, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 3, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 3, 4, 1, 1);

        deletePB = new QPushButton(centralwidget);
        deletePB->setObjectName(QString::fromUtf8("deletePB"));

        gridLayout->addWidget(deletePB, 4, 0, 1, 1);

        bleedPB = new QPushButton(centralwidget);
        bleedPB->setObjectName(QString::fromUtf8("bleedPB"));

        gridLayout->addWidget(bleedPB, 4, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listenPB = new QPushButton(centralwidget);
        listenPB->setObjectName(QString::fromUtf8("listenPB"));
        listenPB->setCheckable(false);

        verticalLayout->addWidget(listenPB);

        listenCB = new QCheckBox(centralwidget);
        listenCB->setObjectName(QString::fromUtf8("listenCB"));

        verticalLayout->addWidget(listenCB);


        gridLayout->addLayout(verticalLayout, 4, 4, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout->addWidget(label_7, 5, 0, 1, 5);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 1, 1, 1);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 3, 3, 1, 1);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 0, 3, 1, 1);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 2, 0, 1, 1);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 2, 2, 1, 1);

        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 2, 4, 1, 1);

        PkExample->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PkExample);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 571, 24));
        menuActions = new QMenu(menubar);
        menuActions->setObjectName(QString::fromUtf8("menuActions"));
        PkExample->setMenuBar(menubar);
        toolBar = new QToolBar(PkExample);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        PkExample->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuActions->menuAction());

        retranslateUi(PkExample);

        QMetaObject::connectSlotsByName(PkExample);
    } // setupUi

    void retranslateUi(QMainWindow *PkExample)
    {
        PkExample->setWindowTitle(QApplication::translate("PkExample", "PolicyKit-qt example", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PkExample", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Making the helper <span style=\" font-weight:600;\">Play</span> requires the user to authenticate. The authorization is kept for the life time of the process</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This is a <span style=\" font-weight:600;\">SPECIAL</span> method that calls our helper!</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PkExample", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Making the helper <span style=\" font-weight:600;\">Cry</span> requires the user to authenticate. This is a one-shot authorization.</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PkExample", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:9pt;\">Making the helper <span style=\" font-weight:600;\">Kick</span> requires a system administrator to authenticate. This instance overrides the defaults set in Action.</p></body></html>", 0, QApplication::UnicodeUTF8));
        playPB->setText(QApplication::translate("PkExample", "Play!", 0, QApplication::UnicodeUTF8));
        cryPB->setText(QApplication::translate("PkExample", "Cry!", 0, QApplication::UnicodeUTF8));
        kickPB->setText(QApplication::translate("PkExample", "Kick... (long)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PkExample", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Making the helper <span style=\" font-weight:600;\">Delete</span> requires a system administrator to authenticate. Once authenticated, this privilege can be retained indefinitely.</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PkExample", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Making the helper <span style=\" font-weight:600;\">Bleed</span> requires the user to authenticate. Once authenticated, this privilege can be retained for the remainder of the desktop session.</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PkExample", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:9pt;\">The <span style=\" font-weight:600;\">Listen</span> action demonstrates the use of PolicyKit to drive a toggleable QPushButton; it's an intuitive way to ask users to give up authorizations when they are done with them. E.g. the button is 'pressed in' exactly when the authorization is held. Toggling the button means obtaining resp. revoking the authorization in question. It also demonstrates the use of ActionButtons, as the action is connected also to a checkbox.</p></body></html>", 0, QApplication::UnicodeUTF8));
        deletePB->setText(QApplication::translate("PkExample", "Delete!", 0, QApplication::UnicodeUTF8));
        bleedPB->setText(QApplication::translate("PkExample", "Bleed!", 0, QApplication::UnicodeUTF8));
        listenPB->setText(QApplication::translate("PkExample", "Click to make changes...", 0, QApplication::UnicodeUTF8));
        listenCB->setText(QApplication::translate("PkExample", "Click to make changes...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PkExample", "<i>Tip: try editing /etc/PolicyKit/Policy.conf and see the proxy widgets update in real-time.</i>.", 0, QApplication::UnicodeUTF8));
        menuActions->setTitle(QApplication::translate("PkExample", "Actions", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("PkExample", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PkExample: public Ui_PkExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PKEXAMPLE_H
