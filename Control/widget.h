/*
 * @Author: cpu_code
 * @Date: 2020-06-18 13:13:58
 * @LastEditTime: 2020-06-18 15:47:07
 * @FilePath: \QT\Control\widget.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui 
{
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
};


#endif // WIDGET_H