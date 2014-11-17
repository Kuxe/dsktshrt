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

void Model::setSudopwd(const string &value)
{
	sudopwd = value;
}

void Model::createShortcut()
{

	string dotdesktopspath = "/home/kuxe/.local/share/applications/" + name + ".desktop";
	cout << "creating shortcut at: " << dotdesktopspath << endl;
	ofstream outfile(dotdesktopspath);
	if(outfile.is_open() && name != "" && appPath != "")
	{
		errorMessage = "";
		cout << "opened stream" << endl;
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
		errorMessage = "Could't create " + dotdesktopspath;
		cout << errorMessage << endl;
		cout << "Perhaps I am not running with correct privilegies?" << endl;
	}
	outfile.close();
}
