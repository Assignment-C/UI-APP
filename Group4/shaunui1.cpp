#include "shaunui1.h"
#include "ui_shaunui1.h"

ShaunUI1::ShaunUI1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShaunUI1)
{
    ui->setupUi(this);
}

ShaunUI1::~ShaunUI1()
{
    delete ui;
}
