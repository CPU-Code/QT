/*
 * @Author: cpu_code
 * @Date: 2020-06-12 12:56:16
 * @LastEditTime: 2020-06-12 12:57:41
 * @FilePath: \QT\signalsAndSlot\widget.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "teacher.h"
#include "student.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    //下课了
    void classIsOver();

    Teacher * zt ;
    Student * st;
};

#endif // WIDGET_H