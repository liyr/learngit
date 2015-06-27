/********************************************************************************
** Form generated from reading UI file 'editwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWINDOW_H
#define UI_EDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Editwindow
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Editwindow)
    {
        if (Editwindow->objectName().isEmpty())
            Editwindow->setObjectName(QStringLiteral("Editwindow"));
        Editwindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(Editwindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Editwindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), Editwindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Editwindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(Editwindow);
    } // setupUi

    void retranslateUi(QDialog *Editwindow)
    {
        Editwindow->setWindowTitle(QApplication::translate("Editwindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Editwindow: public Ui_Editwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWINDOW_H
