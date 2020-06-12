/*
 * @Author: cpu_code
 * @Date: 2020-06-11 21:58:58
 * @LastEditTime: 2020-06-11 22:05:58
 * @FilePath: \QT\button\button.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#ifndef BUTTON_H
#define BUTTON_H

#include <QWidget>
#include <QPushButton>

class Button : public QPushButton
{
    Q_OBJECT

public:
    explicit Button(QWidget *parent = 0);
    ~Button();

signals:

public slots:
};

#endif // BUTTON_H
