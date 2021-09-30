#include "reaksaui1.h"
#include "ui_reaksaui1.h"

ReakSaUI1::ReakSaUI1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReakSaUI1)
{
    ui->setupUi(this);
}

ReakSaUI1::~ReakSaUI1()
{
    delete ui;
}
