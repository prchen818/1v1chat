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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *port;
    QPushButton *start;
    QGroupBox *recording;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *msgrecord;
    QGroupBox *sendingMessage;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *msgsent;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *myWindow)
    {
        if (myWindow->objectName().isEmpty())
            myWindow->setObjectName(QString::fromUtf8("myWindow"));
        myWindow->resize(468, 510);
        centralwidget = new QWidget(myWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        port = new QLineEdit(widget);
        port->setObjectName(QString::fromUtf8("port"));

        horizontalLayout->addWidget(port);

        start = new QPushButton(widget);
        start->setObjectName(QString::fromUtf8("start"));

        horizontalLayout->addWidget(start);


        verticalLayout->addWidget(widget);

        recording = new QGroupBox(centralwidget);
        recording->setObjectName(QString::fromUtf8("recording"));
        horizontalLayout_2 = new QHBoxLayout(recording);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        msgrecord = new QTextEdit(recording);
        msgrecord->setObjectName(QString::fromUtf8("msgrecord"));

        horizontalLayout_2->addWidget(msgrecord);


        verticalLayout->addWidget(recording);

        sendingMessage = new QGroupBox(centralwidget);
        sendingMessage->setObjectName(QString::fromUtf8("sendingMessage"));
        horizontalLayout_3 = new QHBoxLayout(sendingMessage);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        msgsent = new QTextEdit(sendingMessage);
        msgsent->setObjectName(QString::fromUtf8("msgsent"));

        horizontalLayout_3->addWidget(msgsent);


        verticalLayout->addWidget(sendingMessage);

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


        verticalLayout->addWidget(widget_2);

        myWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 468, 26));
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
        label->setText(QApplication::translate("myWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        start->setText(QApplication::translate("myWindow", "\345\220\257\345\212\250", nullptr));
        recording->setTitle(QApplication::translate("myWindow", "\346\266\210\346\201\257\350\256\260\345\275\225", nullptr));
        sendingMessage->setTitle(QApplication::translate("myWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        sendButton->setText(QApplication::translate("myWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myWindow: public Ui_myWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW_H
