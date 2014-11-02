#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class Model;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

	void setModel(Model* model);

public slots:
	void setName(const QString &value);
	void setAppPath(const QString &value);
	void setIconPath(const QString &value);
	void setSudopwd(const QString &value);

	void createShortcut();

private:
	Model* model;
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
