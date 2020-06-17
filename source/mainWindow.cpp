/*
 * @Author: cpu_code
 * @Date: 2020-06-14 11:01:59
 * @LastEditTime: 2020-06-17 21:47:53
 * @FilePath: \QT\source\mainWindow.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //通过ui寻找控件
    //ui->actionNew->setIcon(QIcon("E:/Image/Luffy.png"));
    //添加资源文件 到项目中
    //使用资源文件 " : + 前缀名 + 文件名 "
    ui->actionnew_2->setIcon(QIcon(":/Image/Frame.jpg"));
    ui->actionne->setIcon(QIcon(":/Image/up.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}
