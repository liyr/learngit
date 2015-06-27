#ifndef EDITWINDOW_H
#define EDITWINDOW_H

#include <QDialog>

namespace Ui {
class Editwindow;
}

class Editwindow : public QDialog
{
    Q_OBJECT

public:
    explicit Editwindow(QWidget *parent = 0);
    ~Editwindow();

private:
    Ui::Editwindow *ui;
};

#endif // EDITWINDOW_H
