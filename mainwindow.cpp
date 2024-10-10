#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

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

    connect(ui->BtnMutiply,SIGNAL(clicked()),this,SLOT(btnbinaryOperateClicked()));
    connect(ui->BtnAdd,SIGNAL(clicked()),this,SLOT(btnbinaryOperateClicked()));
    connect(ui->BtnDelete,SIGNAL(clicked()),this,SLOT(btnbinaryOperateClicked()));
    connect(ui->BtnDivide,SIGNAL(clicked()),this,SLOT(btnbinaryOperateClicked()));

    connect(ui->BtnSquare_2,SIGNAL(clicked()),this,SLOT(btnUnaryOperateClicked()));
    connect(ui->BtnFraction,SIGNAL(clicked()),this,SLOT(btnUnaryOperateClicked()));
    connect(ui->BtnRoot,SIGNAL(clicked()),this,SLOT(btnUnaryOperateClicked()));
    connect(ui->BtnPercentage,SIGNAL(clicked()),this,SLOT(btnUnaryOperateClicked()));

}


MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::calculation(bool *ok)
{
    double result=0;
    if(operands.size()==2 && opcodes.size()>0){
        //取操作数
        double operand1 =operands.front().toDouble();
        operands.pop_front();
        double operand2 =operands.front().toDouble();
        operands.pop_front();

        //取操作符
        QString op = opcodes.front();
        opcodes.pop_front();

        if(op=="+"){
            result = operand1+operand2;
        }else if(op=="-"){
            result = operand1-operand2;
        }else if(op=="×"){
            result = operand1*operand2;
        }else if(op=="/"){
            result = operand1/operand2;
        }

        operands.push_back(QString::number(result));

        ui->statusbar->showMessage(QString("calcuation is in progress:operands is%1,opcode is%2").arg(operands.size()).arg(opcodes.size()));
    }else
        ui->statusbar->showMessage(QString("operands is%1,opcode is%2").arg(operands.size()).arg(opcodes.size()));
    \
    return QString::number(result);
}

void MainWindow::btnNumClicked()
{
    QString digit =qobject_cast<QPushButton *>(sender())->text();

    if(digit=="0"&& operand=="0")
        digit="";
    if(operand=="0"&& digit!="0")
        digit="";
    operand += digit;

    //QString str = ui->lineEdit->text();
    //str += qobject_cast<QPushButton *>(sender())->text();

    ui->lineEdit->setText(operand);
    //ui->statusbar->showMessage(qobject_cast<QPushButton *>(sender())->text());
}



void MainWindow::on_BtnPoint_clicked()
{
    //QString str = ui->lineEdit->text();
    if(!operand.contains("."))
        operand += qobject_cast<QPushButton *>(sender())->text();
    ui->lineEdit->setText(operand);
}


void MainWindow::on_BtnLeft_clicked()
{
    //QString str = ui->lineEdit->text();
    operand = operand.left(operand.length()-1);
    ui->lineEdit->setText(operand);
}


void MainWindow::on_BtnInitial_clicked()
{
    operand.clear();
    ui->lineEdit->setText(operand);
}

void MainWindow::btnbinaryOperateClicked()
{
    QString opcode =qobject_cast<QPushButton *>(sender())->text();

    if(operand!=""){
        operands.push_back(operand);
        operand="";

        opcodes.push_back(opcode);


    QString result=calculation();

    ui->lineEdit->setText(result);
    }
}

void MainWindow::btnUnaryOperateClicked()
{
    if(operand!=""){
        double result = operand.toDouble();
        operand="";
        QString op =qobject_cast<QPushButton*>(sender())->text();
        if(op == "%")
            result/=100.0;
        else if(op =="⅟x")
            result=1/result;
        else if(op =="x²")
            result*=result;
        else if(op=="√")
            result=sqrt(result);

        ui->lineEdit->setText(QString::number(result));
    }
}

void MainWindow::on_BtnEqual_clicked()
{
    if(operand!=""){
        operands.push_back(operand);
        operand="";
    }
    QString result=calculation();

    ui->lineEdit->setText(result);
}

