#ifndef SERIALWRITE_H
#define SERIALWRITE_H

#include <QMainWindow>
#include <QtWidgets>
#include <QSerialPort>
#include <QSerialPortInfo>

#include "historylineedit.h"
#include "about.h"

namespace Ui {
class SerialWrite;
}

class SerialWrite : public QMainWindow
{
    Q_OBJECT

public:
    explicit SerialWrite(QWidget *parent = 0);

    ~SerialWrite();

signals:

private slots:
    void on_btn_send_clicked();
    void on_btn_Open_clicked();
    void input_return_Pressed();
    void dataReadyToRead(void);

    void on_btn_clear_clicked();

    void on_actionAbout_triggered();

protected:


private:
    Ui::SerialWrite *ui;
    QSerialPort * m_uart;
    About * m_about;

};

#endif // SERIALWRITE_H
