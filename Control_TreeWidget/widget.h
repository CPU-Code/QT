/*
 * @Author: cpu_code
 * @Date: 2020-06-18 20:56:39
 * @LastEditTime: 2020-06-18 20:58:42
 * @FilePath: \QT\Control_TreeWidget\widget.h
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