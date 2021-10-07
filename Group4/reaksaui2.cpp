#include "reaksaui2.h"
#include "ui_reaksaui2.h"

reaksaui2::reaksaui2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reaksaui2)
{
    ui->setupUi(this);
}

reaksaui2::~reaksaui2()
{
    delete ui;
}
