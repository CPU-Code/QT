/*
 * @Author: cpu_code
 * @Date: 2020-06-11 22:05:24
 * @LastEditTime: 2020-06-11 22:26:30
 * @FilePath: \QT\button\widget.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

//继承与QWidget
class Widget : public QWidget
{
    //支持Qt中的信号和槽使用
    Q_OBJECT

public:
    Widget(QWidget *parent = 0); //构造
    ~Widget();      //析构
};

#endif // WIDGET_H
