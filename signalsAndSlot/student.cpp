/*
 * @Author: cpu_code
 * @Date: 2020-06-12 13:00:20
 * @LastEditTime: 2020-06-12 19:05:00
 * @FilePath: \QT\signalsAndSlot\student.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */

#include "student.h"
#include <QDebug>

Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat()
{
    qDebug() << "请老板玩开发板！";

}

void Student::treat(QString foodName)
{
    //QString -> char *
    //QString str  str.toUtf8().data();

    qDebug() << "请老板玩开发板！老板要：" << foodName.toUtf8().data();
}