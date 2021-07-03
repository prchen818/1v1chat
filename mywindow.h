#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>
#include <qtcpsocket.h>


QT_BEGIN_NAMESPACE
namespace Ui { class myWindow; }
QT_END_NAMESPACE

class myWindow : public QMainWindow
{
    Q_OBJECT

public:
    myWindow(QWidget* parent = nullptr);
    ~myWindow();

private slots:
    void on_sendButton_clicked();

    void on_conn_clicked();

    void on_discon_clicked();

private:
	Ui::myWindow* ui;
    QTcpSocket* m_tcp;
};
#endif // MYWINDOW_H
