#-------------------------------------------------
#
# Project created by QtCreator 2019-02-26T08:44:53
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProductionTool
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    setting.cpp \
    setting_outputpower.cpp \
    setting_carrieroffsetanddrift.cpp \
    setting_modulationcharacteristic.cpp \
    setting_sensitivity.cpp \
    setting_maximuminputpower.cpp \
    setting_perintegrity.cpp \
    pairingtool.cpp

HEADERS += \
        mainwindow.h \
    setting.h \
    setting_outputpower.h \
    setting_carrieroffsetanddrift.h \
    setting_modulationcharacteristic.h \
    setting_sensitivity.h \
    setting_maximuminputpower.h \
    setting_perintegrity.h \
    pairingtool.h

FORMS += \
        mainwindow.ui \
    setting.ui \
    setting_outputpower.ui \
    setting_carrieroffsetanddrift.ui \
    setting_modulationcharacteristic.ui \
    setting_sensitivity.ui \
    setting_maximuminputpower.ui \
    setting_perintegrity.ui \
    pairingtool.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
