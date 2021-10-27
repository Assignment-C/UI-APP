#include "hea.h"
#include "ui_hea.h"

hea::hea(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hea)
{
    ui->setupUi(this);
}

hea::~hea()
{
    delete ui;
}
