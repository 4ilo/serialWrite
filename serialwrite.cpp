#include "serialwrite.h"
#include "ui_serialwrite.h"

SerialWrite::SerialWrite(QWidget *parent) : QMainWindow(parent),ui(new Ui::SerialWrite)
{
    ui->setupUi(this);

    connect(ui->input,SIGNAL(returnPressed()),this,SLOT(on_btn_send_clicked()));


    // We vragen alle aangesloten serial ports op voor in de lijst
    QList<QSerialPortInfo> poorten = QSerialPortInfo::availablePorts();
    for(int i=0; i< poorten.count(); i++)
    {
        ui->input_com->addItem(poorten.at(i).portName());
    }

    // We maken een serial object
    m_uart = new QSerialPort(this);

}

SerialWrite::~SerialWrite()
{
    delete ui;
}

//
//  We sturen de data uit de input box
//
void SerialWrite::on_btn_send_clicked()
{
    // We sturen de data over de uart
    QTextStream uart(m_uart);
    uart << ui->input->text();

    // We echoen de tekst ook lokaal
    if(ui->input_echo->checkState())
    {
        ui->output->appendPlainText("( " + ui->input->text() + " )");
    }

    ui->input->clear();
}

//
//  Open de verbinding met de serial port
//
void SerialWrite::on_btn_Open_clicked()
{
    // We pakken de gekozen poort + baudRate
    m_uart->setPortName(ui->input_com->currentText());
    m_uart->setBaudRate(ui->input_baud->currentText().toInt());
    if(m_uart->open(QIODevice::ReadWrite))
    {
        ui->btn_send->setEnabled(true);
    }
}
