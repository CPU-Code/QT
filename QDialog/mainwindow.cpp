/*
 * @Author: cpu_code
 * @Date: 2020-06-18 09:25:56
 * @LastEditTime: 2020-06-18 10:35:49
 * @FilePath: \QT\QDialog\mainwindow.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>

/*
QColorDialog：  选择颜色；
QFileDialog：    选择文件或者目录；
QFontDialog：   选择字体；
QInputDialog：  允许用户输入一个值，并将其值返回；
QMessageBox：       模态对话框，用于显示信息、询问问题等；
QPageSetupDialog： 为打印机提供纸张相关的选项；
QPrintDialog：       打印机配置；
QPrintPreviewDialog：打印预览；
QProgressDialog：   显示操作过程
*/ 
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //点击新建菜单项 弹出对话框
    connect(ui->actionnew_2, &QAction::triggered, this,[=](){

        //对话框  有两种: 模态对话框 （不可以对其他窗口进行操作）、非模态对话框 （可以对其他窗口操作）
        /*
        QDialog::exec() 实现应用程序级别的模态对话框 
        QDialog::open() 实现窗口级别的模态对话框
        QDialog::show() 实现非模态对话框, 不会阻塞当前线程，对话框会显示出来，然后函数立即返回，代码继续执行
        */
        QDialog dlg(this);
        dlg.resize(200,100);
        dlg.exec();      //阻塞

        qDebug() << "弹出对话框！";

        //非模态对话框创建
        //创建到栈上 一闪而过
        //QDialog dlg2(this); 
        QDialog * dlg2 = new QDialog(this);
        dlg2->resize(200,100);
        dlg2->show();
        //需要设置属性 dlg2   55号, 设置对话框关闭时，自动销毁对话框
        dlg2->setAttribute(Qt::WA_DeleteOnClose);

        //使用标准对话框  QMessageBox
        //错误对话框, 对话框将显示一个红色的错误符号。我们可以通过 buttons 参数指明其显示的按钮 
        QMessageBox::critical(this, "错误！", "critical");
        //信息对话框, 普通信息图标
        QMessageBox::information(this, "信息", "info");

        /**
         * @function: 询问对话框, 问号图标，并且其显示的按钮是“ 是 ” 和 “ 否 ”
         * @parameter: 
         *      this：对话框的父窗口是 this，初始显示位置将会是在 parent 窗口的中央
         *      问题：对话框的标题
         *      question：显示的内容
         *      Save | Cancel：关联的按键类型， 可用 或运算符（|）指定对话框应该出现的按钮
         *      Cancel：默认选择的按钮
         * @return: 
         *     success: 确定用户点击的是哪一个按钮
         *     error:
         * @note: 
         */
        if(QMessageBox::Save == QMessageBox::question(this, 
                                                      "问题", 
                                                      "question",
                                                      QMessageBox::Save | QMessageBox::Cancel,
                                                      QMessageBox::Cancel))
        {
            qDebug() << "点击的是保存";
        }
        else
        {
            qDebug() << "点击的是取消";
        }

        //警告对话框, 黄色叹号图标
        QMessageBox::warning(this, "警告！", "warning");

        //选择颜色对话框
        QColor color =  QColorDialog::getColor(QColor(255,0,0));
        qDebug() << color.red() << color.green() << color.blue();

        //文件对话框
        /**
         * @function: 获取需要打开的文件的路径
         * @parameter: 
         *      this：父窗口
         *      打开文件：对话框标题
         *      C:\\Users\\zhangtao\\Desktop：对话框打开时的默认目录
         *            “.” 代表程序运行目录
         *            “/” 代表当前盘符的根目录（特指 Windows 平台； Linux 平台当然就是根目录），
         *            这个参数也可以是平台相关的，比如“C:\\”等
         *      (*.txt *.png)：过滤器
         * @return: 
         *     success: 选择的文件路径
         *     error:
         * @note: 
         */
        QString path =  QFileDialog::getOpenFileName(this, "打开文件", "C:\\Users\\zhangtao\\Desktop", "(*.txt *.png)");
        qDebug() << path;
    });



}

MainWindow::~MainWindow()
{
    delete ui;
}
