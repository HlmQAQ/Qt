#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStack>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString operand;
    QString opcode;
    QStack<QString> operands;
    QStack<QString> opcodes;

    QString calculation(bool *ok=NULL);

private slots:
    void btnNumClicked();

    void btnbinaryOperateClicked();

    void btnUnaryOperateClicked();

    void on_BtnPoint_clicked();

    void on_BtnLeft_clicked();

    void on_BtnInitial_clicked();

    void on_BtnEqual_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
