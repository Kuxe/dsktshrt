#include "mainwindow.h"
#include <QApplication>
#include "model.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    Model model;
    if(argc != 1)
    {
        cout << "No args allowed yet, try running without arguments!" << endl;
        return 1;

    }
    QApplication a(argc, argv);
    MainWindow w;
    w.setModel(&model);
    w.show();
    return a.exec();
}
