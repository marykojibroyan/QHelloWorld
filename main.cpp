#include "qconsoleoutput.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QConsoleOutput w;
    w.printHelloWorld();
    return a.exec();
}
