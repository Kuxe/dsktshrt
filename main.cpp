#include "mainwindow.h"
#include <QApplication>
#include "model.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    Model model;

    if(argc == 2 && (strcmp(argv[1], "-g") == 0 || strcmp(argv[1], "--gui") == 0))
    {
        QApplication a(argc, argv);
        MainWindow w;
        w.setModel(&model);
        w.show();
        return a.exec();
    }

    if(argc == 4)
    {
        string name = argv[1];
        string appPath = argv[2];
        string iconPath = argv[3];

        model.setName(name);
        model.setAppPath(appPath);
        model.setIconPath(iconPath);
        model.createShortcut();
        return 0;
    }
    cout << "Usage:\tdsktshrt <appName> <appPath> <appIcon>" << endl;
    cout << "\tdsktshrt --help\t\t Display this help and exit" << endl;
    cout << "\tdsktshrt [-g | --gui]\t Start Graphical User Interface" << endl;
    return 1;
}
