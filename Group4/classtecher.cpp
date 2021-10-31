#include "classtecher.h"
#include "ui_classtecher.h"

ClassTecher::ClassTecher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClassTecher)
{
    ui->setupUi(this);
}

ClassTecher::~ClassTecher()
{
    delete ui;
}
