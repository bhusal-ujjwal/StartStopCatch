#include "mainwindow.h"

#include <QApplication>

extern int i,j,k;
extern QString s;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
