#ifndef LOADWINDOW_H
#define LOADWINDOW_H

#include <QDialog>

namespace Ui {
class Loadwindow;
}

class Loadwindow : public QDialog
{
    Q_OBJECT

public:
    explicit Loadwindow(QWidget *parent = 0);
    ~Loadwindow();

private:
    Ui::Loadwindow *ui;
};

#endif // LOADWINDOW_H
