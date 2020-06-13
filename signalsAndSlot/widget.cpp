/*
 * @Author: cpu_code
 * @Date: 2020-06-12 12:58:04
 * @LastEditTime: 2020-06-12 19:25:02
 * @FilePath: \QT\signalsAndSlot\widget.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */
#include "widget.h"
#include <QPushButton>
#include <QDebug>

//需要
//Teacher类 饿了
//Student类 请客
//下课 classIsOver

Widget::Widget(QWidget *parent): QWidget(parent)
{
    qDebug() << "in Widget(QWidget *parent)";

    zt = new Teacher(this);
    st = new Student(this);

     //连接信号和槽
    void(Teacher:: * teacherSingal1)(void) = &Teacher::hungry;
    void(Student:: * studentSlot1)(void) = &Student::treat;
    connect(zt, teacherSingal1, st, studentSlot1);

    qDebug() << "连接信号和槽后";
    //断开信号和槽连接
    disconnect(zt, teacherSingal1, st, studentSlot1);

    //指针      地址
    //函数指针  函数地址
    //void(Teacher:: * teacherSingal)(QString) = &Teacher::hungry;
    //void(Student:: * studentSlot)(QString) = &Student::treat;
    //connect(zt, teacherSingal, st, studentSlot);

    //classIsOver();

    //信号连接信号
    QPushButton* btn  = new QPushButton;
    btn->setParent(this);
    btn->setText("老板");

    connect(btn, &QPushButton::clicked, zt, teacherSingal1);

    //Qt 4  如何写信号和槽
    //优点 参数直观显示
    //确定，编译时候不会检测类型错误
    //Qt 5版本兼容Qt4 版本的信号槽写法，反之不可以
    connect(zt, SIGNAL(hungry(QString)), st, SLOT(treat(QString)));

    classIsOver();

    //Lambda表达式
    QPushButton * myBtn = new QPushButton(this);
    QPushButton * myBtn2 = new QPushButton(this);

    myBtn->move(100,0);
    myBtn2->move(100,100);
    myBtn->setText("100 + 10");
    myBtn2->setText("m");

    int m = 10;
    //使用mutable 可以改变 值传递的变量
    connect(myBtn, &QPushButton::clicked, this, [m] ()mutable {
        m = 100 + 10;
        qDebug() << m;
    });

    connect(myBtn2, &QPushButton::clicked, this, [=] () {
        qDebug() << m;
    });

    qDebug() << "m == " << m;

    //返回值
    int num =  []()->int{ return 1000;}();
    qDebug() << "num == " <<num;

    //lambda表达式在连接时候可以写3个参数，默认第三个参数是this
    QPushButton * btn3 = new QPushButton("老铁双击加关注",this);

    btn3->move(0,100);

    connect(btn3, &QPushButton::clicked, [=](){
        btn3->setText("6666666");
    });

    qDebug() << "exit Widget(QWidget *parent)";
}

void Widget::classIsOver()
{
    //发送自定义的信号
    emit zt->hungry();

    //发送带参数的信号
    emit zt->hungry(QString("开发板炒鱿鱼"));

}

Widget::~Widget()
{
    qDebug() << "~Widget()";
}