/*
 * @Author: cpu_code
 * @Date: 2020-06-11 20:24:20
 * @LastEditTime: 2020-06-18 19:23:32
 * @FilePath: \QT\firstQt\main.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include "mywidget.h" //包含头文件
#include <QApplication> //包含QApplication头文件

//程序入口 argc命令行变量的数量 argv命令行变量数组
int main(int argc, char *argv[])
{
    //Qt 一个类对应一个头文件， 类名就是头文件名
    //QApplication 应用程序类
    //  管理图形用户界面应用程序的控制流和主要设置
    //  是 Qt 的整个后台管理的命脉它包含主事件循环，在其中来自窗口系统和其它资源的所有事件处理和调度。
    //      它也处理应用程序的初始化和结束，并且提供对话管理。
    //  对于任何一个使用 Qt 的图形用户界面应用程序，都正好存在一个 QApplication 对象，
    //      而不论这个应用程序在同一时间内是不是有 0、 1、2 或更多个窗口
    QApplication a(argc, argv); 
    //创建一个MyWidget对象
    MyWidget w; 

    //创建出的窗口对象并不会直接显示，需要调用show方法
    w.show(); 

    //进入消息循环机制,阻塞状态
    //程序进入消息循环，等待对用户输入进行响应。这里 main()把控制权转交给Qt，
    //  Qt 完成事件处理工作，当应用程序退出的时候 exec()的值就会返回。
    //  在 exec()中， Qt 接受并处理用户和系统的事件并且把它们传递给适当的窗口部件
    return a.exec(); 
/*    while(true)
    {
        if(点击叉子)
            break;
    }
*/
}
