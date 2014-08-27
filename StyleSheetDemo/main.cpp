#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QFile file(":/css/myCsssheet.qss");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());
    //:/css/myCsssheet.qss

    return a.exec();
}
