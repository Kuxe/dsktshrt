#ifndef MODELFORM_H
#define MODELFORM_H

#include <QWidget>
#include "model.h"

namespace Ui {
class ModelForm;
}

class ModelForm : public QWidget
{
	Q_OBJECT

public:
	explicit ModelForm(QWidget *parent = 0);
	~ModelForm();


public slots:
	void setName(const QString &value);
	void setAppPath(const QString &value);
	void setIconPath(const QString &value);
	void setSudopwd(const QString &value);

	void createShortcut();

private:
	Model model;
	Ui::ModelForm *ui;
};

#endif // MODELFORM_H
