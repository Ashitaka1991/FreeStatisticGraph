#-------------------------------------------------
#
# Project created by QtCreator 2017-01-15T18:43:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FreeStatisticsProject
TEMPLATE = app


SOURCES += main.cpp\
        mainplotwidget.cpp \
    settemplatedialog.cpp \
    inputdatadialog.cpp \
    choosedatadialog.cpp

HEADERS  += mainplotwidget.h \
    settemplatedialog.h \
    inputdatadialog.h \
    choosedatadialog.h

FORMS    += mainplotwidget.ui \
    settemplatedialog.ui \
    inputdatadialog.ui \
    choosedatadialog.ui
