#include "modelform.h"
#include "ui_modelform.h"

ModelForm::ModelForm(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::ModelForm)
{
	ui->setupUi(this);
}

ModelForm::~ModelForm()
{
	delete ui;
}


void ModelForm::setName(const QString &value) { model.setName(value.toUtf8().constData()); }
void ModelForm::setAppPath(const QString &value) { model.setAppPath(value.toUtf8().constData()); }
void ModelForm::setIconPath(const QString &value) { model.setIconPath(value.toUtf8().constData()); }
void ModelForm::setSudopwd(const QString &value) { model.setSudopwd(value.toUtf8().constData()); }
void ModelForm::createShortcut() { model.createShortcut(); }
