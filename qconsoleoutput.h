#ifndef QCONSOLEOUTPUT_H
#define QCONSOLEOUTPUT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class QConsoleOutput;
}
QT_END_NAMESPACE

class QConsoleOutput : public QMainWindow
{
    Q_OBJECT

public:
    QConsoleOutput(QWidget *parent = nullptr);
    ~QConsoleOutput();

    void printHelloWorld();

private:
    Ui::QConsoleOutput *ui;
};
#endif // QCONSOLEOUTPUT_H
