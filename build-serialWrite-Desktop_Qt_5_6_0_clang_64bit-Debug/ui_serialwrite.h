/********************************************************************************
** Form generated from reading UI file 'serialwrite.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALWRITE_H
#define UI_SERIALWRITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialWrite
{
public:
    QAction *action_Configure;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *input;
    QPushButton *btn_send;
    QLabel *label_2;
    QPlainTextEdit *output;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_com;
    QComboBox *input_com;
    QLabel *lbl_baud;
    QComboBox *input_baud;
    QCheckBox *input_echo;
    QPushButton *btn_Open;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SerialWrite)
    {
        if (SerialWrite->objectName().isEmpty())
            SerialWrite->setObjectName(QStringLiteral("SerialWrite"));
        SerialWrite->resize(405, 387);
        action_Configure = new QAction(SerialWrite);
        action_Configure->setObjectName(QStringLiteral("action_Configure"));
        centralWidget = new QWidget(SerialWrite);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        input = new QLineEdit(centralWidget);
        input->setObjectName(QStringLiteral("input"));
        input->setEnabled(true);

        horizontalLayout->addWidget(input);

        btn_send = new QPushButton(centralWidget);
        btn_send->setObjectName(QStringLiteral("btn_send"));
        btn_send->setEnabled(false);

        horizontalLayout->addWidget(btn_send);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        output = new QPlainTextEdit(centralWidget);
        output->setObjectName(QStringLiteral("output"));
        output->setReadOnly(true);

        verticalLayout->addWidget(output);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbl_com = new QLabel(centralWidget);
        lbl_com->setObjectName(QStringLiteral("lbl_com"));

        horizontalLayout_2->addWidget(lbl_com);

        input_com = new QComboBox(centralWidget);
        input_com->setObjectName(QStringLiteral("input_com"));

        horizontalLayout_2->addWidget(input_com);

        lbl_baud = new QLabel(centralWidget);
        lbl_baud->setObjectName(QStringLiteral("lbl_baud"));

        horizontalLayout_2->addWidget(lbl_baud);

        input_baud = new QComboBox(centralWidget);
        input_baud->setObjectName(QStringLiteral("input_baud"));

        horizontalLayout_2->addWidget(input_baud);

        input_echo = new QCheckBox(centralWidget);
        input_echo->setObjectName(QStringLiteral("input_echo"));

        horizontalLayout_2->addWidget(input_echo);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_Open = new QPushButton(centralWidget);
        btn_Open->setObjectName(QStringLiteral("btn_Open"));

        verticalLayout->addWidget(btn_Open);

        SerialWrite->setCentralWidget(centralWidget);
        output->raise();
        label->raise();
        label_2->raise();
        btn_Open->raise();
        menuBar = new QMenuBar(SerialWrite);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 405, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        SerialWrite->setMenuBar(menuBar);
        statusBar = new QStatusBar(SerialWrite);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SerialWrite->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(action_Configure);

        retranslateUi(SerialWrite);

        QMetaObject::connectSlotsByName(SerialWrite);
    } // setupUi

    void retranslateUi(QMainWindow *SerialWrite)
    {
        SerialWrite->setWindowTitle(QApplication::translate("SerialWrite", "SerialWrite", 0));
        action_Configure->setText(QApplication::translate("SerialWrite", "Instellen", 0));
        label->setText(QApplication::translate("SerialWrite", "Input:", 0));
        btn_send->setText(QApplication::translate("SerialWrite", "Send", 0));
        label_2->setText(QApplication::translate("SerialWrite", "Output:", 0));
        lbl_com->setText(QApplication::translate("SerialWrite", "Com:", 0));
        lbl_baud->setText(QApplication::translate("SerialWrite", "Baud:", 0));
        input_baud->clear();
        input_baud->insertItems(0, QStringList()
         << QApplication::translate("SerialWrite", "9600", 0)
         << QApplication::translate("SerialWrite", "19200", 0)
         << QApplication::translate("SerialWrite", "115200", 0)
        );
        input_echo->setText(QApplication::translate("SerialWrite", "Local Echo", 0));
        btn_Open->setText(QApplication::translate("SerialWrite", "Open", 0));
        menuFile->setTitle(QApplication::translate("SerialWrite", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class SerialWrite: public Ui_SerialWrite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALWRITE_H
