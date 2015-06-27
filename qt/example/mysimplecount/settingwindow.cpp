#include "settingwindow.h"
#include "ui_settingwindow.h"

Settingwindow::Settingwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settingwindow)
{
    ui->setupUi(this);
}

Settingwindow::~Settingwindow()
{
    delete ui;
}
