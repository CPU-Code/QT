/*
 * @Author: cpu_code
 * @Date: 2020-06-12 12:59:58
 * @LastEditTime: 2020-06-13 20:38:51
 * @FilePath: \QT\signalsAndSlot\student.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT

public:
    explicit Student(QObject *parent = 0);

signals:

public slots:
    //请客的槽函数 槽函数必须要实现
    //作为成员函数，受到 public、 private、protected 的影响
    //任何成员函数、 static 函数、全局函数和 Lambda 表达式都可以作为槽函数
    //信号槽要求信号和槽的参数一致，所谓一致，是参数类型一致。
    //槽函数的参数比信号的少
    //多个信号可以连接到一个槽，只要任意一个信号发出，这个槽就会被调用。
    //槽可以被取消链接，当一个对象 delete 之后， Qt 自动取消所有连接到这个对象上面的槽。
    void treat();
    void treat(QString foodName);
};

#endif // STUDENT_H