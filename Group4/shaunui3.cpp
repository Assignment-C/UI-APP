#include "shaunui3.h"
#include "ui_shaunui3.h"

ShaunUI3::ShaunUI3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShaunUI3)
{
    ui->setupUi(this);
}

ShaunUI3::~ShaunUI3()
{
    delete ui;
}
