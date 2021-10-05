#include "brosithst3.h"
#include "ui_brosithst3.h"

brosithst3::brosithst3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::brosithst3)
{
    ui->setupUi(this);
}

brosithst3::~brosithst3()
{
    delete ui;
}
