#include "mywindow.h"
#include "ui_mywindow.h"

#include <QHostAddress>


myWindow::myWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::myWindow)
{

    ui->setupUi(this);
    ui->discon->setDisabled(true);

    m_tcp = new QTcpSocket(this);

    connect(m_tcp, &QTcpSocket::readyRead, this, [=]()
    {
        QByteArray data = m_tcp->readAll();
        ui->msgrecord->append("the server say:" + data);
    });

    connect(m_tcp, &QTcpSocket::disconnected, this, [=]()
    {
        m_tcp->close();
        m_tcp->deleteLater();
        ui->msgrecord->append("disconnected!");
        ui->discon->setDisabled(true);
        ui->conn->setEnabled(true);
    });

    connect(m_tcp, &QTcpSocket::connected, this, [=]()
    {
        ui->msgrecord->append("connected successfully!");
        ui->conn->setDisabled(true);
        ui->discon->setEnabled(true);
    });

    ui->port->setText("8899");
    ui->ip->setText("127.0.0.1");
}



myWindow::~myWindow()
{
    delete ui;
}



void myWindow::on_sendButton_clicked()
{
    QString msg = ui->msgsent->toPlainText();
    m_tcp->write(msg.toUtf8());
    ui->msgrecord->append("the client say:" + msg);
    ui->msgsent->clear();
}

void myWindow::on_conn_clicked()
{
    //m_tcp = new QTcpSocket(this);
    QString ip = ui->ip->text();
    unsigned short port = ui->port->text().toUShort();
    m_tcp->connectToHost(QHostAddress(ip), port);

}

void myWindow::on_discon_clicked()
{
    m_tcp->close();
    ui->discon->setDisabled(true);
    ui->conn->setEnabled(true);
}
