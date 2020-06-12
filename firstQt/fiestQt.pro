 #
 # @Author: cpu_code
 # @Date: 2020-06-11 20:52:48
 # @LastEditTime: 2020-06-11 20:52:49
 # @FilePath: \QT\firstQt\fistQt.cpp
 # @Gitee: https://gitee.com/cpu_code
 # @CSDN: https://blog.csdn.net/qq_44226094
 #
#-------------------------------------------------
#
# Project created by QtCreator 2020-06-11T19:50:38
#
#-------------------------------------------------
# .pro 就是工程文件(project)，它是 qmake 自动生成的用于生产 makefile 的配置文件
#包含的模块
QT       += core gui 

# 大于 Qt4 版本 才包含 widget 模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#应用程序名 生成的.exe 程序名称
TARGET = untitled

#模板类型 应用程序模板
#app -建立一个应用程序的 makefile。这是默认值，所以如果模板没有被指定，这个将被使用。
# lib - 建立一个库的 makefile。
# vcapp - 建立一个应用程序的 VisualStudio 项目文件。
# vclib - 建立一个库的 VisualStudio 项目文件。
# subdirs -这是一个特殊的模板， 它可以创建一个能够进入特定目录并且为一个项目文件生成 makefile 并且为它调用 make 的 makefile
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#源文件
SOURCES += \
        main.cpp \
        mainwindow.cpp
#头文件
HEADERS += \
        mainwindow.h

# 工程中包含的.ui 设计文件
FORMS += \
        mainwindow.ui

#工程中包含的资源文件
#RESOURCES += qrc/painter.qrc

#配置信息
#CONFIG 用来告诉 qmake 关于应用程序的配置信息。
#CONFIG += c++11 //使用 c++11 的特性
