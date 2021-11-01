#include "shaunui2.h"
#include "ui_shaunui2.h"

ShaunUI2::ShaunUI2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShaunUI2)
{
    ui->setupUi(this);
}

ShaunUI2::~ShaunUI2()
{
    delete ui;
}
