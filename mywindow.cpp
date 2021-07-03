#include "mywindow.h"
#include "ui_mywindow.h"


myWindow::myWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myWindow)
{
    ui->setupUi(this);
    setWindowTitle("TCPserveer");

    ui->port->setText("8899");
    //m_tcp = new QTcpSocket(this);
    //create an server object to listen
    ser = new QTcpServer(this);
    connect(ser, &QTcpServer::newConnection, this, [=]() {
        ui->msgrecord->append("connected successfully...");
        m_tcp = ser->nextPendingConnection();

        //test if it is readyread, if true, print the message on the textedit
        connect(m_tcp, &QTcpSocket::readyRead, this, [=]() {
            QByteArray data = m_tcp->readAll();
            ui->msgrecord->append("the cilent say:" + data);
            });

        connect(m_tcp, &QTcpSocket::disconnected, this, [=]()
            {
                m_tcp->deleteLater();
                ui->msgrecord->append("Disconnected!");
            });
        });

    
}

myWindow::~myWindow()
{
    delete ui;
}


void myWindow::on_start_clicked()
{
    unsigned short port = ui->port->text().toUShort();
    ser->listen(QHostAddress::Any,port);
    ui->start->setDisabled(true);
}

void myWindow::on_sendButton_clicked()
{
    QString msg = ui->msgsent->toPlainText();
    m_tcp->write(msg.toUtf8());
    ui->msgrecord->append("the server say:" + msg);
    ui->msgsent->clear();
}