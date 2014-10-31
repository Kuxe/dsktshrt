/********************************************************************************
** Form generated from reading UI file 'modelform.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELFORM_H
#define UI_MODELFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelForm
{
public:

    void setupUi(QWidget *ModelForm)
    {
        if (ModelForm->objectName().isEmpty())
            ModelForm->setObjectName(QStringLiteral("ModelForm"));
        ModelForm->resize(400, 300);

        retranslateUi(ModelForm);

        QMetaObject::connectSlotsByName(ModelForm);
    } // setupUi

    void retranslateUi(QWidget *ModelForm)
    {
        ModelForm->setWindowTitle(QApplication::translate("ModelForm", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ModelForm: public Ui_ModelForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELFORM_H
