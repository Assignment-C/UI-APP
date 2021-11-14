#include "listclass.h"
#include "ui_listclass.h"

ListClass::ListClass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListClass)
{
    ui->setupUi(this);
}

ListClass::~ListClass()
{
    delete ui;
}
