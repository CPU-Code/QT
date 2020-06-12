/*
 * @Author: cpu_code
 * @Date: 2020-06-11 21:03:25
 * @LastEditTime: 2020-06-11 21:06:26
 * @FilePath: \QT\firstQt\mainwindow.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
