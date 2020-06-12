/*
 * @Author: cpu_code
 * @Date: 2020-06-11 22:01:52
 * @LastEditTime: 2020-06-11 22:32:04
 * @FilePath: \QT\button\widget.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include "widget.h"
#include "button.h"

#include<QPushButton>
#include <QDebug>

//命名规范
//类名 首字母大写、单词与单词之间 首字母大写
//函数、变量名称首字母小写  单词与单词之间首字母大写

//帮助文档的查看方式
//第一种 f1查看
//第二种 左侧的按钮
//第三种 exe程序

//快捷键
//编译+运行 ctrl +r
//编译  ctrl+b
//帮助文档 f1
//字体大小 ctrl + 鼠标滚轮
//同名的.h 和.cpp之间的切换 F4
//注释 ctrl+ /
//查找关键字 ctrl +f
// ctrl + shift +↑ 或者↓

Widget::Widget(QWidget *parent): QWidget(parent)
{
    QPushButton * btn = new QPushButton;

    // btn->show();
    //btn应该依赖于主窗口
    //设置父类
    btn->setParent(this);

    //显示文字
    btn->setText("德玛");

    //第二种创建方式
    QPushButton * btn2 = new QPushButton("德玛西亚",this);

    //移动窗口
    btn2->move(100,100);

    //重置窗口大小
    resize(960,640);

    //btn可不可以 resize? 可以
    btn2->resize(50,50);

    //设置窗口标题名称
    this->setWindowTitle("德玛西亚万岁");

    //限制窗口大小
    // this->setFixedSize(600,400);

    //对象树
    Button * myBtn = new Button();
    myBtn->setParent(this);
    myBtn->move(200,200);
    myBtn->setText("我的按钮");

    //窗体的坐标系
    //左上角为 0 0 点
    // x 以右侧为正方向  y 以下侧为正方向

    /**
     * @function: 需求 点击“我的按钮” ，关闭窗口，连接信号槽的关键字 connect
     * @parameter: 
     *      myBtn：发出信号的对象
     *      clicked：发送的信号
     *      this: 接收信号的对象
     *      close:  接收对象在接收到信号之后所需要调用的函数（槽函数）
     * @return: 
     *     success: 
     *     error:
     * @note:
     */
    connect(myBtn, &QPushButton::clicked, this, &Widget::close);
}

Widget::~Widget()
{
    qDebug("Widget析构了！");
}
