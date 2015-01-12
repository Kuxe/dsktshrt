#ifndef MODEL_H
#define MODEL_H

#include <string>

using std::string;

class Model
{
public:
	string name = "";
	string appPath = "";
	string iconPath = "";
	string sudopwd = "";
	string errorMessage = "";

public:
	void setName(const string &value);
	void setAppPath(const string &value);
	void setIconPath(const string &value);
	void createShortcut();
};

#endif // MODEL_H
