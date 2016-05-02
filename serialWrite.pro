#-------------------------------------------------
#
# Project created by QtCreator 2016-04-29T14:32:43
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = serialWrite
TEMPLATE = app

ICON = icon.icns


SOURCES += main.cpp\
        serialwrite.cpp \
    historylineedit.cpp \
    about.cpp

HEADERS  += serialwrite.h \
    historylineedit.h \
    about.h

FORMS    += serialwrite.ui \
    about.ui
