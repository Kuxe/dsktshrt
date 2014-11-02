#-------------------------------------------------
#
# Project created by QtCreator 2014-10-30T21:46:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dsktshrt
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++1y -Werror -Wall

SOURCES += main.cpp\
        mainwindow.cpp \
    model.cpp

HEADERS  += mainwindow.h \
    model.h

FORMS    += mainwindow.ui
