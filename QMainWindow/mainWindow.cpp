/*
 * @Author: cpu_code
 * @Date: 2020-06-12 22:08:38
 * @LastEditTime: 2020-06-13 20:07:50
 * @FilePath: \QT\QMainWindow\mainWindow.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */

#include "mainWindow.h"

#include <QMenuBar>
#include <QToolBar>
#include <QLabel>
#include <QStatusBar>
#include <QDockWidget>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    //指定窗口大小
    resize(600, 400);

    // 包含菜单栏 只能有一个, 获取主窗口菜单栏指针
    QMenuBar * bar =  menuBar();
    //将菜单栏放入到窗口中
    this->setMenuBar(bar);

    //创建文件菜单
    QMenu * fileMenu =  bar->addMenu("文件");
    //QMenu * editMenu =
    bar->addMenu("编辑");

    //添加菜单项
    QAction * newAction =  fileMenu->addAction("新建");

    // 添加分割线
    fileMenu->addSeparator();

    //添加菜单项
    QAction * openAction =  fileMenu->addAction("打开");

    //工具栏  可以有多个
    QToolBar * toolBar = new QToolBar(this);

    /**
     * @function: 获取主窗口的工具条对象，每增加一个工具条都需要调用一次该函数
     * @parameter:
     *      Qt::LeftToolBarArea 停靠在左侧
     *      Qt::RightToolBarArea 停靠在右侧
     *      Qt::TopToolBarArea 停靠在顶部
     *      Qt::BottomToolBarArea 停靠在底部
     *      Qt::AllToolBarAreas 以上四个位置都可停靠
     * @return:
     *     success:
     *     error:
     * @note:
     */
    addToolBar(Qt::RightToolBarArea, toolBar); //默认停靠范围

    //只允许左右侧停靠
    toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea );

    //设置浮动
    //toolBar->setFloatable(false);

    //设置移动 （总开关）
    //工具条不可移动, 只能停靠在初始化的位置上
    //toolBar->setMovable(false);

    //工具栏添加菜单项
    toolBar->addAction(newAction);

    //添加分割线
    toolBar->addSeparator();
    toolBar->addAction(openAction);

    //状态栏 只能有一个
    QStatusBar * stBar = statusBar();
    setStatusBar(stBar);

    QLabel * label = new QLabel("提示信息", this);

    //添加小部件
    stBar->addWidget(label); //添加提示信息到左侧
    //插入小部件
    //insertWi1dget(int index, QWidget * widget, int stretch = 0);
    //删除小部件
    stBar->removeWidget(label);

    QLabel * label2 = new QLabel("右侧提示信息", this);
    //右侧
    stBar->addPermanentWidget(label2);
    //左侧
    //stBar->addWidget(label2);

    //铆接部件 浮动窗口 可以有多个
    QDockWidget * dock = new QDockWidget;
    //添加铆接部件到 窗口中
    addDockWidget(Qt::BottomDockWidgetArea, dock);

    //设置停靠范围
    dock->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);


    //核心部件 只能一个，中心显示的部件都可以作为核心部件
    QTextEdit * edit = new QTextEdit; //文本编辑框
    setCentralWidget(edit);
}

MainWindow::~MainWindow()
{

}
