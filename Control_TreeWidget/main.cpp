/*
 * @Author: cpu_code
 * @Date: 2020-06-18 20:56:16
 * @LastEditTime: 2020-06-18 20:58:25
 * @FilePath: \QT\Control_TreeWidget\main.cpp
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
