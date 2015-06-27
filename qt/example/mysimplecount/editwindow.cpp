#include "editwindow.h"
#include "ui_editwindow.h"

Editwindow::Editwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editwindow)
{
    ui->setupUi(this);
}

Editwindow::~Editwindow()
{
    delete ui;
}
