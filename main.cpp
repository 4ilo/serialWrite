#include "serialwrite.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SerialWrite w;
    w.show();

    return a.exec();
}
