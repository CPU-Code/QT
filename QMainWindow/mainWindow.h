/*
 * @Author: cpu_code
 * @Date: 2020-06-12 22:09:08
 * @LastEditTime: 2020-06-12 22:11:11
 * @FilePath: \QT\QMainWindow\mainWindow.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
