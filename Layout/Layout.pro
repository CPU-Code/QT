 #
 # @Author: cpu_code
 # @Date: 2020-06-18 11:27:45
 # @LastEditTime: 2020-06-18 11:28:09
 # @FilePath: \QT\Layout\Layout.pro
 # @Gitee: https://gitee.com/cpu_code
 # @CSDN: https://blog.csdn.net/qq_44226094
 # 

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Layout
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
