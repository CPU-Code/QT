/*
 * @Author: cpu_code
 * @Date: 2020-06-12 12:59:58
 * @LastEditTime: 2020-06-12 13:02:01
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
    void treat();
    void treat(QString foodName);
};

#endif // STUDENT_H