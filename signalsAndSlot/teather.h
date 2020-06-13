/*
 * @Author: cpu_code
 * @Date: 2020-06-12 13:00:49
 * @LastEditTime: 2020-06-13 20:38:06
 * @FilePath: \QT\signalsAndSlot\teather.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT

public:
    explicit Teacher(QObject *parent = 0);

//信号 自定义的信号 写到signals 下
signals:
    //信号槽要求信号和槽的参数一致，所谓一致，是参数类型一致。
    //槽函数的参数比信号的少
    //信号返回值是void
    //信号只需要声明 不需要实现
    //一个信号可以和多个槽相连，这些槽会一个接一个的被调用，但是它们的调用顺序是不确定的。
    //一个信号可以连接到另外的一个信号，当第一个信号发出时，第二个信号被发出。\
    //  除此之外，这种信号-信号的形式和信号-槽的形式没有什么区别。
    void hungry();
    void hungry( QString foodName );
    void hungry(int);

//槽函数可以写到public slots
public slots:

};

#endif // TEACHER_H