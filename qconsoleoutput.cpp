#include "qconsoleoutput.h"
#include "ui_qconsoleoutput.h"
#include "QDebug"
QConsoleOutput::QConsoleOutput(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QConsoleOutput)
{
    ui->setupUi(this);
}

void QConsoleOutput::printHelloWorld() {
    qDebug() << "Hello, World!";
}

QConsoleOutput::~QConsoleOutput()
{
    delete ui;
}
