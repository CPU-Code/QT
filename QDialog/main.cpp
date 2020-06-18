/*
 * @Author: cpu_code
 * @Date: 2020-06-17 22:30:27
 * @LastEditTime: 2020-06-18 10:36:11
 * @FilePath: \QT\QDialog\main.cpp
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
