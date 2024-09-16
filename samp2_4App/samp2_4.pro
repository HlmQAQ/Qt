#-------------------------------------------------
#
# Project created by QtCreator 2016-11-14T00:17:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = samp2_4
TEMPLATE = app


SOURCES += main.cpp\
        newwindowl.cpp \
        qwmainwind.cpp

HEADERS  += qwmainwind.h \
    newwindowl.h

FORMS    += qwmainwind.ui \
    newwindowl.ui

RESOURCES += \
    res.qrc

RC_ICONS = AppIcon.ico
