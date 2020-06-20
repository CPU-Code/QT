/*
 * @Author: cpu_code
 * @Date: 2020-06-18 13:12:24
 * @LastEditTime: 2020-06-18 13:14:19
 * @FilePath: \QT\Control\main.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
    w.show();

    return a.exec();
}
