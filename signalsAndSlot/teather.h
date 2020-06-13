/*
 * @Author: cpu_code
 * @Date: 2020-06-12 13:00:49
 * @LastEditTime: 2020-06-12 13:04:53
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
    //信号返回值是void
    //信号只需要声明 不需要实现
    void hungry();
    void hungry( QString foodName );
    void hungry(int);

//槽函数可以写到public slots
public slots:

};

#endif // TEACHER_H