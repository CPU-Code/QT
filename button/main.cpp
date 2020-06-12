/*
 * @Author: cpu_code
 * @Date: 2020-06-11 21:57:13
 * @LastEditTime: 2020-06-11 22:14:05
 * @FilePath: \QT\button\main.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include "widget.h" //包含头文件
#include <QApplication> //包含QApplication头文件

//程序入口 argc命令行变量的数量 argv命令行变量数组
int main(int argc, char *argv[])
{
    //a 应用程序对象，对于Qt项目必须有应用程序对象，而且有且仅有一个
    QApplication a(argc, argv); 
    Widget w;     //创建一个Widget对象

    //创建出的窗口对象并不会直接显示，需要调用show方法
    w.show(); 

    return a.widget(); //进入消息循环机制,阻塞状态
/*
    while(true)
    {
        if(点击叉子)
            break;
    }
*/
}
