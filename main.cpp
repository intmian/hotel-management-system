#include "mainwindow.h"
#include <QApplication>
#include "mywin.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWin w;
    w.show();
    return a.exec();
}
