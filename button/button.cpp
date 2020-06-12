/*
 * @Author: cpu_code
 * @Date: 2020-06-11 21:58:34
 * @LastEditTime: 2020-06-11 22:00:59
 * @FilePath: \QT\button\button.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include "button.h"
#include <QDebug>

Button::Button(QWidget *parent) : QPushButton(parent)
{

}

Button::~Button()
{
    qDebug() << "Button调用析构了！";
}
