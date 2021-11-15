#include "homaapp.h"
#include "ui_homaapp.h"

HomaApp::HomaApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomaApp)
{
    ui->setupUi(this);
}

HomaApp::~HomaApp()
{
    delete ui;
}


