/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *onCreateMsgLabel;
    QLineEdit *nameLineEdit;
    QLineEdit *iconLineEdit;
    QLineEdit *pathLineEdit;
    QLabel *iconLabel;
    QLabel *nameLabel;
    QLabel *pathLabel;
    QPushButton *iconButton;
    QPushButton *pathButton;
    QLabel *saveInLabel;
    QLineEdit *saveInLineEdit;
    QPushButton *saveInButton;
    QPushButton *createShortcutButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(347, 174);
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
        onCreateMsgLabel = new QLabel(centralWidget);
        onCreateMsgLabel->setObjectName(QStringLiteral("onCreateMsgLabel"));
        onCreateMsgLabel->setCursor(QCursor(Qt::ArrowCursor));

        gridLayout->addWidget(onCreateMsgLabel, 4, 3, 1, 1);

        nameLineEdit = new QLineEdit(centralWidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80);"));
        nameLineEdit->setEchoMode(QLineEdit::Normal);
        nameLineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout->addWidget(nameLineEdit, 0, 1, 1, 1);

        iconLineEdit = new QLineEdit(centralWidget);
        iconLineEdit->setObjectName(QStringLiteral("iconLineEdit"));
        iconLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80);"));

        gridLayout->addWidget(iconLineEdit, 2, 1, 1, 1);

        pathLineEdit = new QLineEdit(centralWidget);
        pathLineEdit->setObjectName(QStringLiteral("pathLineEdit"));
        pathLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80);"));

        gridLayout->addWidget(pathLineEdit, 1, 1, 1, 1);

        iconLabel = new QLabel(centralWidget);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        iconLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(iconLabel, 2, 0, 1, 1);

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

        iconButton = new QPushButton(centralWidget);
        iconButton->setObjectName(QStringLiteral("iconButton"));

        gridLayout->addWidget(iconButton, 2, 3, 1, 1);

        pathButton = new QPushButton(centralWidget);
        pathButton->setObjectName(QStringLiteral("pathButton"));
        pathButton->setDefault(false);
        pathButton->setFlat(false);

        gridLayout->addWidget(pathButton, 1, 3, 1, 1);

        saveInLabel = new QLabel(centralWidget);
        saveInLabel->setObjectName(QStringLiteral("saveInLabel"));

        gridLayout->addWidget(saveInLabel, 3, 0, 1, 1);

        saveInLineEdit = new QLineEdit(centralWidget);
        saveInLineEdit->setObjectName(QStringLiteral("saveInLineEdit"));
        saveInLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(80, 80, 80);"));

        gridLayout->addWidget(saveInLineEdit, 3, 1, 1, 1);

        saveInButton = new QPushButton(centralWidget);
        saveInButton->setObjectName(QStringLiteral("saveInButton"));

        gridLayout->addWidget(saveInButton, 3, 3, 1, 1);

        createShortcutButton = new QPushButton(centralWidget);
        createShortcutButton->setObjectName(QStringLiteral("createShortcutButton"));

        gridLayout->addWidget(createShortcutButton, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
#ifndef QT_NO_SHORTCUT
        iconLabel->setBuddy(iconLineEdit);
        nameLabel->setBuddy(nameLineEdit);
        pathLabel->setBuddy(pathLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(nameLineEdit, pathLineEdit);
        QWidget::setTabOrder(pathLineEdit, pathButton);
        QWidget::setTabOrder(pathButton, iconLineEdit);
        QWidget::setTabOrder(iconLineEdit, iconButton);
        QWidget::setTabOrder(iconButton, saveInLineEdit);
        QWidget::setTabOrder(saveInLineEdit, saveInButton);
        QWidget::setTabOrder(saveInButton, createShortcutButton);

        retranslateUi(MainWindow);
        QObject::connect(nameLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(setName(QString)));
        QObject::connect(pathLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(setAppPath(QString)));
        QObject::connect(iconLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(setIconPath(QString)));
        QObject::connect(createShortcutButton, SIGNAL(clicked()), MainWindow, SLOT(createShortcut()));
        QObject::connect(pathButton, SIGNAL(pressed()), MainWindow, SLOT(browsePath()));
        QObject::connect(iconButton, SIGNAL(pressed()), MainWindow, SLOT(browseIcon()));
        QObject::connect(saveInButton, SIGNAL(pressed()), MainWindow, SLOT(browseSaveIn()));
        QObject::connect(saveInLineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(setSaveInPath(QString)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Shortcut", 0));
        onCreateMsgLabel->setText(QApplication::translate("MainWindow", "NOTSET", 0));
#ifndef QT_NO_TOOLTIP
        nameLineEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>eg: dsktshrt</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        nameLineEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        iconLineEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>eg: /home/sillyusername/arbitraryfolder/icon.ico</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pathLineEdit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>eg: /home/sillyusername/arbitraryfolder/executablefile</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pathLineEdit->setText(QString());
        iconLabel->setText(QApplication::translate("MainWindow", "Icon:", 0));
        nameLabel->setText(QApplication::translate("MainWindow", "Name:", 0));
        pathLabel->setText(QApplication::translate("MainWindow", "Path:", 0));
        iconButton->setText(QApplication::translate("MainWindow", "Browse...", 0));
        pathButton->setText(QApplication::translate("MainWindow", "Browse...", 0));
        saveInLabel->setText(QApplication::translate("MainWindow", "Save in:", 0));
        saveInButton->setText(QApplication::translate("MainWindow", "Browse...", 0));
        createShortcutButton->setText(QApplication::translate("MainWindow", "Create shortcut", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
