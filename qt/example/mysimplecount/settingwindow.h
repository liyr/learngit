#ifndef SETTINGWINDOW_H
#define SETTINGWINDOW_H

#include <QDialog>

namespace Ui {
class Settingwindow;
}

class Settingwindow : public QDialog
{
    Q_OBJECT

public:
    explicit Settingwindow(QWidget *parent = 0);
    ~Settingwindow();

private:
    Ui::Settingwindow *ui;
};

#endif // SETTINGWINDOW_H
