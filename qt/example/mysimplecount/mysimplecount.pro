#-------------------------------------------------
#
# Project created by QtCreator 2015-06-27T12:44:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mysimplecount
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    loadwindow.cpp \
    settingwindow.cpp \
    editwindow.cpp

HEADERS  += mainwindow.h \
    loadwindow.h \
    settingwindow.h \
    editwindow.h

FORMS    += mainwindow.ui \
    editwindow.ui \
    loadwindow.ui \
    settingwindow.ui
