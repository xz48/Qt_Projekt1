#include "mainwindow.h"

#include <QApplication>

//Qt creator manual verwenden

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
