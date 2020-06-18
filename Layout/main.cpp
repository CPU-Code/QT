/*
 * @Author: cpu_code
 * @Date: 2020-06-18 11:25:12
 * @LastEditTime: 2020-06-18 11:26:25
 * @FilePath: \QT\Layout\main.c
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
