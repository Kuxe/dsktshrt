/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "modelform.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *iconBrowseButton;
    QPushButton *pathBrowseButton;
    QLineEdit *pathLineEdit;
    QLineEdit *iconLineEdit;
    QLabel *iconLabel;
    QPushButton *createShortcutButton;
    QLabel *nameLabel;
    QLabel *pathLabel;
    QLabel *sudopwdLabel;
    QLineEdit *nameLineEdit;
    QToolButton *toolButton;
    QLabel *errorMessageLabel;
    QLineEdit *sudopwdLineEdit;
    ModelForm *modelWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(353, 180);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(29, 29, 29);\n"
"selection-color: rgb(238, 238, 238);\n"
"color: rgb(238, 238, 238);\n"
"selection-background-color: rgb(255, 146, 12);\n"
"font: 11pt \"Ubuntu Mono\";"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        iconBrowseButton = new QPushButton(centralWidget);
        iconBrowseButton->setObjectName(QStringLiteral("iconBrowseButton"));

        gridLayout->addWidget(iconBrowseButton, 2, 2, 1, 1);

        pathBrowseButton = new QPushButton(centralWidget);
        pathBrowseButton->setObjectName(QStringLiteral("pathBrowseButton"));

        gridLayout->addWidget(pathBrowseButton, 1, 2, 1, 1);

        pathLineEdit = new QLineEdit(centralWidget);
        pathLineEdit->setObjectName(QStringLiteral("pathLineEdit"));
        pathLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80);"));

        gridLayout->addWidget(pathLineEdit, 1, 1, 1, 1);

        iconLineEdit = new QLineEdit(centralWidget);
        iconLineEdit->setObjectName(QStringLiteral("iconLineEdit"));
        iconLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80);"));

        gridLayout->addWidget(iconLineEdit, 2, 1, 1, 1);

        iconLabel = new QLabel(centralWidget);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        iconLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(iconLabel, 2, 0, 1, 1);

        createShortcutButton = new QPushButton(centralWidget);
        createShortcutButton->setObjectName(QStringLiteral("createShortcutButton"));

        gridLayout->addWidget(createShortcutButton, 4, 1, 1, 1);

        nameLabel = new QLabel(centralWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);
        nameLabel->setLayoutDirection(Qt::LeftToRight);
        nameLabel->setFrameShape(QFrame::NoFrame);
        nameLabel->setFrameShadow(QFrame::Plain);
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        pathLabel = new QLabel(centralWidget);
        pathLabel->setObjectName(QStringLiteral("pathLabel"));
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(pathLabel, 1, 0, 1, 1);

        sudopwdLabel = new QLabel(centralWidget);
        sudopwdLabel->setObjectName(QStringLiteral("sudopwdLabel"));

        gridLayout->addWidget(sudopwdLabel, 3, 0, 1, 1);

        nameLineEdit = new QLineEdit(centralWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80);"));
        nameLineEdit->setEchoMode(QLineEdit::Normal);
        nameLineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout->addWidget(nameLineEdit, 0, 1, 1, 1);

        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 4, 0, 1, 1);

        errorMessageLabel = new QLabel(centralWidget);
        errorMessageLabel->setObjectName(QStringLiteral("errorMessageLabel"));
        errorMessageLabel->setStyleSheet(QLatin1String("color: rgb(255, 76, 76);\n"
"font: 75 11pt \"Ubuntu Mono\";"));

        gridLayout->addWidget(errorMessageLabel, 3, 2, 1, 1);

        sudopwdLineEdit = new QLineEdit(centralWidget);
        sudopwdLineEdit->setObjectName(QStringLiteral("sudopwdLineEdit"));
        sudopwdLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80);"));
        sudopwdLineEdit->setEchoMode(QLineEdit::Password);
        sudopwdLineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout->addWidget(sudopwdLineEdit, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        modelWidget = new ModelForm(centralWidget);
        modelWidget->setObjectName(QStringLiteral("modelWidget"));
        sizePolicy.setHeightForWidth(modelWidget->sizePolicy().hasHeightForWidth());
        modelWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(modelWidget);

        MainWindow->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        iconLabel->setBuddy(iconLineEdit);
        nameLabel->setBuddy(nameLineEdit);
        pathLabel->setBuddy(pathLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(nameLineEdit, pathLineEdit);
        QWidget::setTabOrder(pathLineEdit, pathBrowseButton);
        QWidget::setTabOrder(pathBrowseButton, iconLineEdit);
        QWidget::setTabOrder(iconLineEdit, iconBrowseButton);
        QWidget::setTabOrder(iconBrowseButton, sudopwdLineEdit);
        QWidget::setTabOrder(sudopwdLineEdit, createShortcutButton);

        retranslateUi(MainWindow);
        QObject::connect(nameLineEdit, SIGNAL(textChanged(QString)), modelWidget, SLOT(setName(QString)));
        QObject::connect(pathLineEdit, SIGNAL(textChanged(QString)), modelWidget, SLOT(setAppPath(QString)));
        QObject::connect(iconLineEdit, SIGNAL(textChanged(QString)), modelWidget, SLOT(setIconPath(QString)));
        QObject::connect(createShortcutButton, SIGNAL(clicked()), modelWidget, SLOT(createShortcut()));
        QObject::connect(sudopwdLineEdit, SIGNAL(textChanged(QString)), modelWidget, SLOT(setSudopwd(QString)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Shortcut", 0));
        iconBrowseButton->setText(QApplication::translate("MainWindow", "Browse...", 0));
        pathBrowseButton->setText(QApplication::translate("MainWindow", "Browse...", 0));
        pathLineEdit->setText(QString());
        iconLabel->setText(QApplication::translate("MainWindow", "Icon:", 0));
        createShortcutButton->setText(QApplication::translate("MainWindow", "Create shortcut", 0));
        nameLabel->setText(QApplication::translate("MainWindow", "Name:", 0));
        pathLabel->setText(QApplication::translate("MainWindow", "Path:", 0));
        sudopwdLabel->setText(QApplication::translate("MainWindow", "sudopwd", 0));
        nameLineEdit->setText(QString());
        toolButton->setText(QApplication::translate("MainWindow", "...", 0));
        errorMessageLabel->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu Mono'; font-size:11pt; font-weight:72; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Must be root</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
