#include "newwindowl.h"
#include "ui_newwindowl.h"

newWindowl::newWindowl(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::newWindowl)
{
    ui->setupUi(this);
}

newWindowl::~newWindowl()
{
    delete ui;
}
