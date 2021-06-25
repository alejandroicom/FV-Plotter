#-------------------------------------------------
#
# Project created by QtCreator 2021-06-16T21:35:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = FVPloter2
TEMPLATE = app

CONFIG += c++11

QMAKE_CXXFLAGS += -Wcomment -fno-strict-aliasing

SOURCES += main.cpp\
        mainwindow.cpp \
    CanModule/CanModule.cpp \
    Common/ColorDefs.cpp \
    MainCanManager/MainCanManager.cpp \
    PeakCAN/PeakCANModule.cpp \
    SystecCAN/SystecCANModule.cpp \
    config.cpp \
    QCustomplot/qcustomplot.cpp \
    PlotManager/PlotManager.cpp \
    Specific/CANDecoder.cpp \
    Specific/CANEncoder.cpp \
    consolewindow.cpp

HEADERS  += mainwindow.h \
    CanModule/CanModule.h \
    Common/ColorDefs.h \
    libs/peak/include/PCANBasic.h \
    libs/systec/include/Usbcan32.h \
    MainCanManager/MainCanManager.h \
    PeakCAN/PeakCANModule.h \
    SystecCAN/SystecCANModule.h \
    config.h \
    QCustomplot/qcustomplot.h \
    PlotManager/PlotManager.h \
    Specific/CANDecoder.h \
    Specific/CANEncoder.h \
    Specific/ODMapping.h \
    consolewindow.h

FORMS    += mainwindow.ui \
    config.ui \
    consolewindow.ui


INCLUDEPATH += \
    ".\libs\systec\include" \
    ".\libs\peak\include" \
    ".\CanModule" \
    ".\MainCanManager" \
    ".\PeakCAN" \
    ".\SystecCAN" \
    ".\Common" \
    ".\QCustomplot" \
    ".\Specific" \
    ".\PlotManager"

LIBS += "./libs/peak/lib/PCANBasic.lib" \
        "./libs/systec/lib/USBCAN32.lib"

RESOURCES += \
    res.qrc
