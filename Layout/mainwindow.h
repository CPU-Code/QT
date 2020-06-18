/*
 * @Author: cpu_code
 * @Date: 2020-06-18 11:25:55
 * @LastEditTime: 2020-06-18 11:26:42
 * @FilePath: \QT\Layout\mainwindow.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
