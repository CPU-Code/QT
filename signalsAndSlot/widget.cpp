/*
 * @Author: cpu_code
 * @Date: 2020-06-12 12:58:04
 * @LastEditTime: 2020-06-13 20:31:17
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
    //SIGNAL 和 SLOT 这两个宏，将两个函数名转换成了字符串。
    connect(zt, SIGNAL(hungry(QString)), st, SLOT(treat(QString)));

    classIsOver();

    //Lambda表达式, 用于定义并创建匿名的函数对象
    QPushButton * myBtn = new QPushButton(this);
    QPushButton * myBtn2 = new QPushButton(this);

    myBtn->move(100,0);
    myBtn2->move(100,100);
    myBtn->setText("100 + 10");
    myBtn2->setText("m");

    int m = 10;

    /*使用mutable 可以改变 值传递的变量
     *[函数对象参数](操作符重载函数参数)mutable ->返回值{函数体}
     *函数对象参数:
     *  []，标识一个 Lambda 的开始，这部分必须存在， 不能省略
     *      空: 没有使用任何函数对象参数
     *      =：函数体内可以使用 Lambda 所在作用范围内所有可见的局部变量（包括 Lambda 所在类的 this），
     *          并且是值传递方式（按 值 传递了所有局部变量）
     *      &：函数体内可以使用 Lambda 所在作用范围内所有可见的局部变量（包括 Lambda 所在类的 this），
     *          并且是引用传递方式（按 引用 传递了所有局部变量）
     *      this：函数体内可以使用 Lambda 所在类中的成员变量。
     *      a：将 a 按 值 进行传递。按值进行传递时，函数体内不能修改传递进来的a 的拷贝，
     *          因为默认情况下函数是 const 的。 要修改传递进来的 a 的拷贝，可以添加 mutable 修饰符
     *      &a：将 a 按引用进行传递
     *      a, &b：将 a 按值进行传递， b 按引用进行传递
     *      =， &a, &b：除 a 和 b 按引用进行传递外，其他参数都按值进行传递
     *      &, a, b：除 a 和 b 按值进行传递外，其他参数都按引用进行传递。
     *操作符重载函数参数：
     *  标识重载的()操作符的参数，没有参数时，这部分可以省略。
     *      参数可以通过按值（如： (a,b)）和按引用（如： (&a,&b)）两种方式进行传递
     *可修改标示符：
     *  mutable 声明，这部分可以省略。按值传递函数对象参数时，加上 mutable修饰符后，
     *      可以修改按值传递进来的拷贝（注意是能修改拷贝，而不是值本身）。
     *函数返回值：
     *  ->返回值类型，标识函数返回值的类型，当返回值为 void，
     *      或者函数体中只有一处 return 的地方（此时编译器可以自动推断出返回值类型）时，
     *      这部分可以省略。
     *是函数体：
     *  {}，标识函数的实现，这部分不能省略，但函数体可以为空
     */
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
    //发送者和接收者都需要是 QObject 的子类

    //发送自定义的信号
    //emit 在恰当的位置发送信号
    emit zt->hungry();

    //发送带参数的信号
    emit zt->hungry(QString("开发板炒鱿鱼"));

}

Widget::~Widget()
{
    qDebug() << "~Widget()";
}