#include "listclass.h"
#include "ui_listclass.h"
#include "reaksaui2.h"
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
void ListClass::AddClassTeacher(){

   reaksaui2* Addmore = new reaksaui2(nullptr);
   Addmore->show();
   this->hide();
}
