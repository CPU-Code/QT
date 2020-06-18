/*
 * @Author: cpu_code
 * @Date: 2020-06-18 11:25:37
 * @LastEditTime: 2020-06-18 11:26:34
 * @FilePath: \QT\Layout\mainwindow.cpp
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
