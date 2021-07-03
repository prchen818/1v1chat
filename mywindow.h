#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <qtcpsocket.h>


QT_BEGIN_NAMESPACE
namespace Ui { class myWindow; }
QT_END_NAMESPACE

class myWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit myWindow(QWidget *parent = nullptr);
    ~myWindow();

private slots:
    void on_start_clicked();
    void on_sendButton_clicked();

private:
	Ui::myWindow* ui;
	QTcpServer* ser;
    QTcpSocket* m_tcp;
};
#endif // MYWINDOW_H
