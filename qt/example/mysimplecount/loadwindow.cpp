#include "loadwindow.h"
#include "ui_loadwindow.h"

Loadwindow::Loadwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loadwindow)
{
    ui->setupUi(this);
}

Loadwindow::~Loadwindow()
{
    delete ui;
}
