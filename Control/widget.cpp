/*
 * @Author: cpu_code
 * @Date: 2020-06-18 13:13:46
 * @LastEditTime: 2020-06-18 13:17:03
 * @FilePath: \QT\Control\widget.cpp
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //单选按钮 默认选中 男
    ui->rBtnMan->setChecked(true);

    //点击女的 就打印选中了
    connect(ui->rBtnWoman, &QRadioButton::clicked, [=](){
        qDebug() << "选中女的了！";
    });

     //多选框  选中后打印内容
    //选中2  未选中 0   tristate 1状态
    connect(ui->checkBox, &QCheckBox::stateChanged, [=](int state){
        qDebug() << state ;
    });

    //利用listWidget 写诗
//    QListWidgetItem  * item = new QListWidgetItem("锄禾日当午");

    //设置对齐方式
//    item->setTextAlignment(Qt::AlignHCenter);
//    ui->listWidget->addItem(item);

    //QStringList ===  QList<QString>

    QStringList list;

    list << "锄禾日当午"<< "汗滴禾下土"<< "谁知盘中餐"<< "粒粒皆辛苦";
    //QStringList()<<"锄禾日当午"<< "汗滴禾下土"<< "谁知盘中餐"<< "粒粒皆辛苦" 匿名对象也可以直接使用

    ui->listWidget->addItems(list);

}

Widget::~Widget()
{
    delete ui;
}