#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->BtnNum0,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->BtnNum1,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->BtnNum2,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->BtnNum3,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->BtnNum4,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->BtnNum5,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->BtnNum6,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->BtnNum7,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->BtnNum8,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->BtnNum9,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnNumClicked()
{
    QString str = ui->lineEdit->text();
    str += qobject_cast<QPushButton *>(sender())->text();

    ui->lineEdit->setText(str);
    //ui->statusbar->showMessage(qobject_cast<QPushButton *>(sender())->text());
}

void MainWindow::on_BtnPoint_clicked()
{
    QString str = ui->lineEdit->text();
    if(!str.contains("."))
        str += qobject_cast<QPushButton *>(sender())->text();
    ui->lineEdit->setText(str);
}


void MainWindow::on_BtnLeft_clicked()
{
    QString str = ui->lineEdit->text();
    str = str.left(str.length()-1);
    ui->lineEdit->setText(str);
}

