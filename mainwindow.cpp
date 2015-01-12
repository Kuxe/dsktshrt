#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::setModel(Model* model)
{
	this->model = model;
}

void MainWindow::setName(const QString &value) { model->setName(value.toUtf8().constData()); }
void MainWindow::setAppPath(const QString &value) { model->setAppPath(value.toUtf8().constData()); }
void MainWindow::setIconPath(const QString &value) { model->setIconPath(value.toUtf8().constData()); }
void MainWindow::createShortcut() { model->createShortcut(); }
