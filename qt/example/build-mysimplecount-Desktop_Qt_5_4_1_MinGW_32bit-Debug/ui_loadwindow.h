/********************************************************************************
** Form generated from reading UI file 'loadwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADWINDOW_H
#define UI_LOADWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Loadwindow
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;

    void setupUi(QDialog *Loadwindow)
    {
        if (Loadwindow->objectName().isEmpty())
            Loadwindow->setObjectName(QStringLiteral("Loadwindow"));
        Loadwindow->resize(849, 448);
        buttonBox = new QDialogButtonBox(Loadwindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(740, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBox = new QCheckBox(Loadwindow);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(640, 350, 181, 22));

        retranslateUi(Loadwindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), Loadwindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Loadwindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(Loadwindow);
    } // setupUi

    void retranslateUi(QDialog *Loadwindow)
    {
        Loadwindow->setWindowTitle(QApplication::translate("Loadwindow", "\351\200\211\346\213\251\345\212\240\350\275\275\351\241\271", 0));
        checkBox->setText(QApplication::translate("Loadwindow", "\345\220\257\347\224\250\351\253\230\347\272\247\350\256\241\346\227\266\345\212\237\350\203\275", 0));
    } // retranslateUi

};

namespace Ui {
    class Loadwindow: public Ui_Loadwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADWINDOW_H
