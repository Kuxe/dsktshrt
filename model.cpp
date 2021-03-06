#include "model.h"
#include <iostream>
#include <fstream>

using namespace std;

void Model::setName(const string &value)
{
	name = value;
}

void Model::setAppPath(const string &value)
{
	appPath = value;
}

void Model::setIconPath(const string &value)
{
	iconPath = value;
}

void Model::setSaveInPath(const string &value)
{
    saveInPath = value;
}

void Model::createShortcut()
{
    statusMessage = "";
    if(name == "")
    {
        statusMessage += "You must set name!\n";
    }
    if(appPath == "")
    {
        statusMessage += "You must set path!\n";
    }
    if(iconPath == "")
    {
        statusMessage += "You must set icon!\n";
    }
    if(saveInPath == "")
    {
        statusMessage += "You must set save in!\n";
    }

    //If any error was set...
    if(statusMessage != "")
    {
        //then abort
        return;
    }

    string dotdesktopspath = saveInPath + "/" + name + ".desktop";
	cout << "creating shortcut at: " << dotdesktopspath << endl;
	ofstream outfile(dotdesktopspath);
    if(outfile.is_open())
	{
        statusMessage = "Success!";
		outfile << "[Desktop Entry]" << endl;
		outfile << "Version=1.0" << endl;
		outfile << "Type=Application" << endl;
		outfile << "Encoding=UTF-8" << endl;
		outfile << "Name=" + name << endl;
		outfile << "GenericName=" + name << endl;
		outfile << "Exec=" + appPath << endl;
		outfile << "Terminal=false" << endl;
		outfile << "Icon=" + iconPath << endl;
		outfile << "Categories=Application" << endl;
	}
	else
	{
        statusMessage += "Failed to open output stream!\n" + dotdesktopspath + "\nPerhaps I am not running with correct privilegies?\nPerhaps Save in folder doesn't exist?\nPerhaps there's illegal characters in the name?";
	}
    cout << statusMessage << endl;
	outfile.close();
}
