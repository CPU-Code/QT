/*
 * @Author: cpu_code
 * @Date: 2020-06-12 22:08:15
 * @LastEditTime: 2020-06-12 22:11:32
 * @FilePath: \QT\QMainWindow\main.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();
}
