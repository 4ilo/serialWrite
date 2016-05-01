#ifndef SERIALWRITE_H
#define SERIALWRITE_H

#include <QMainWindow>
#include <QtWidgets>
#include <QSerialPort>
#include <QSerialPortInfo>

namespace Ui {
class SerialWrite;
}

class SerialWrite : public QMainWindow
{
    Q_OBJECT

public:
    explicit SerialWrite(QWidget *parent = 0);
    ~SerialWrite();

private slots:
    void on_btn_send_clicked();

    void on_btn_Open_clicked();

private:
    Ui::SerialWrite *ui;
    QSerialPort * m_uart;
};

#endif // SERIALWRITE_H
