#-------------------------------------------------
#
# Project created by QtCreator 2019-02-26T08:44:53
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
QT       += sql

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
    Source/main.cpp \
    Source/mainwindow.cpp \
    Source/setting/setting.cpp \
    Source/setting/setting_carrieroffsetanddrift.cpp \
    Source/setting/setting_maximuminputpower.cpp \
    Source/setting/setting_modulationcharacteristic.cpp \
    Source/setting/setting_outputpower.cpp \
    Source/setting/setting_perintegrity.cpp \
    Source/setting/setting_sensitivity.cpp \
    Source/tool/pairingTool/mysql.cpp \
    Source/tool/pairingTool/pairingtool.cpp \
    Source/tool/pairingTool/notifypairinginfo.cpp

HEADERS += \
    Header/setting/setting.h \
    Header/setting/setting_carrieroffsetanddrift.h \
    Header/setting/setting_maximuminputpower.h \
    Header/setting/setting_modulationcharacteristic.h \
    Header/setting/setting_outputpower.h \
    Header/setting/setting_perintegrity.h \
    Header/setting/setting_sensitivity.h \
    Header/mainwindow.h \
    Header/tool/pairingTool/mysql.h \
    Header/tool/pairingTool/pairingtool.h \
    Header/tool/pairingTool/notifypairinginfo.h

FORMS += \
    UI/setting/setting.ui \
    UI/setting/setting_carrieroffsetanddrift.ui \
    UI/setting/setting_maximuminputpower.ui \
    UI/setting/setting_modulationcharacteristic.ui \
    UI/setting/setting_outputpower.ui \
    UI/setting/setting_perintegrity.ui \
    UI/setting/setting_sensitivity.ui \
    UI/mainwindow.ui \
    UI/tool/pairingTool/pairingtool.ui \
    UI/tool/pairingTool/notifypairinginfo.ui

INCLUDEPATH += ./HEADER/
INCLUDEPATH += ./HEADER/setting
INCLUDEPATH += ./HEADER/tool/pairingTool

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
