#include "shaun.h"
#include "ui_shaun.h"

Shaun::Shaun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Shaun)
{
    ui->setupUi(this);
}

Shaun::~Shaun()
{
    delete ui;
}