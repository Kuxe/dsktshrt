#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"
#include <QFileDialog>
#include <QPalette>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
    ui->onCreateMsgLabel->setVisible(false);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::setModel(Model* model)
{
	this->model = model;
    model->saveInPath = QDir::homePath().toStdString() + "/.local/share/applications";
    ui->saveInLineEdit->setText(QString::fromStdString(model->saveInPath));
}

void MainWindow::setName(const QString &value) { model->setName(value.toUtf8().constData()); }
void MainWindow::setAppPath(const QString &value) { model->setAppPath(value.toUtf8().constData()); }
void MainWindow::setIconPath(const QString &value) { model->setIconPath(value.toUtf8().constData()); }
void MainWindow::setSaveInPath(const QString &value) { model->setSaveInPath(value.toUtf8().constData()); }
void MainWindow::createShortcut()
{
    model->createShortcut();
    QPalette palette = ui->pathLabel->palette();
    if(model->statusMessage == "Success!")
    {
        ui->onCreateMsgLabel->setStyleSheet("QLabel { color: green }");
    }
    else
    {
        ui->onCreateMsgLabel->setStyleSheet("QLabel { color: red }");
    }
    ui->onCreateMsgLabel->setText(QString::fromStdString(model->statusMessage));
    ui->onCreateMsgLabel->setVisible(true);
}
void MainWindow::browsePath()
{
    const QString appPath = QFileDialog::getOpenFileName((this), tr("Set file"), "", tr("Any files (*)"));
    if(appPath == "") return;
    setAppPath(appPath);
    ui->pathLineEdit->setText(appPath);
}
void MainWindow::browseIcon()
{
    const QString iconPath = QFileDialog::getOpenFileName((this), tr("Set file"), "", tr("Icon files (*.ico *.png *.jpg)"));
    if(iconPath == "") return;
    setIconPath(iconPath);
    ui->iconLineEdit->setText(iconPath);
}
void MainWindow::browseSaveIn()
{
    QString saveInPath = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly);
    if(saveInPath == "") return;
    setSaveInPath(saveInPath);
    ui->saveInLineEdit->setText(saveInPath);
}
