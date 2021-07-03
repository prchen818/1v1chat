/********************************************************************************
** Form generated from reading UI file 'mywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWINDOW_H
#define UI_MYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *sendingMessage;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *msgsent;
    QGroupBox *recording;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *msgrecord;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *port;
    QLabel *label_2;
    QLineEdit *ip;
    QLabel *label;
    QPushButton *conn;
    QPushButton *discon;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *myWindow)
    {
        if (myWindow->objectName().isEmpty())
            myWindow->setObjectName(QString::fromUtf8("myWindow"));
        myWindow->resize(494, 574);
        centralwidget = new QWidget(myWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sendingMessage = new QGroupBox(centralwidget);
        sendingMessage->setObjectName(QString::fromUtf8("sendingMessage"));
        horizontalLayout_3 = new QHBoxLayout(sendingMessage);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        msgsent = new QTextEdit(sendingMessage);
        msgsent->setObjectName(QString::fromUtf8("msgsent"));

        horizontalLayout_3->addWidget(msgsent);


        gridLayout->addWidget(sendingMessage, 3, 0, 1, 1);

        recording = new QGroupBox(centralwidget);
        recording->setObjectName(QString::fromUtf8("recording"));
        horizontalLayout_2 = new QHBoxLayout(recording);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        msgrecord = new QTextEdit(recording);
        msgrecord->setObjectName(QString::fromUtf8("msgrecord"));

        horizontalLayout_2->addWidget(msgrecord);


        gridLayout->addWidget(recording, 2, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(322, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        sendButton = new QPushButton(widget_2);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        horizontalLayout_4->addWidget(sendButton);

        horizontalSpacer = new QSpacerItem(321, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout->addWidget(widget_2, 4, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        port = new QLineEdit(widget);
        port->setObjectName(QString::fromUtf8("port"));

        gridLayout_2->addWidget(port, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        ip = new QLineEdit(widget);
        ip->setObjectName(QString::fromUtf8("ip"));

        gridLayout_2->addWidget(ip, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        conn = new QPushButton(widget);
        conn->setObjectName(QString::fromUtf8("conn"));

        gridLayout_2->addWidget(conn, 0, 3, 1, 1);

        discon = new QPushButton(widget);
        discon->setObjectName(QString::fromUtf8("discon"));

        gridLayout_2->addWidget(discon, 1, 3, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        myWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 494, 26));
        myWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(myWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myWindow->setStatusBar(statusbar);

        retranslateUi(myWindow);

        QMetaObject::connectSlotsByName(myWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myWindow)
    {
        myWindow->setWindowTitle(QApplication::translate("myWindow", "myWindow", nullptr));
        sendingMessage->setTitle(QApplication::translate("myWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        recording->setTitle(QApplication::translate("myWindow", "\346\266\210\346\201\257\350\256\260\345\275\225", nullptr));
        sendButton->setText(QApplication::translate("myWindow", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QApplication::translate("myWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label->setText(QApplication::translate("myWindow", "IP\357\274\232", nullptr));
        conn->setText(QApplication::translate("myWindow", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        discon->setText(QApplication::translate("myWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myWindow: public Ui_myWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW_H
