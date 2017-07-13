#include "mainplotwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainPlotWidget w;
    w.show();

    return a.exec();
}
