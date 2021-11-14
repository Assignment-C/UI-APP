#include "heaui7.h"
#include "ui_heaui7.h"
#include "listclass.h"
HeaUi7::HeaUi7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HeaUi7)
{
    ui->setupUi(this);
}

HeaUi7::~HeaUi7()
{
    delete ui;
}
void HeaUi7::ListClassTeacher(){
    ListClass* AllClass = new ListClass (nullptr);
    AllClass->show();
    this->hide();

}
