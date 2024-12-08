#include "basic_calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    basic_calculator w;
    w.show();
    return a.exec();
}
