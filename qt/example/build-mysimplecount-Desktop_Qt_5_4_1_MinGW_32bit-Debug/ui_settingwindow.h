/********************************************************************************
** Form generated from reading UI file 'settingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGWINDOW_H
#define UI_SETTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Settingwindow
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Settingwindow)
    {
        if (Settingwindow->objectName().isEmpty())
            Settingwindow->setObjectName(QStringLiteral("Settingwindow"));
        Settingwindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(Settingwindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Settingwindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), Settingwindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Settingwindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(Settingwindow);
    } // setupUi

    void retranslateUi(QDialog *Settingwindow)
    {
        Settingwindow->setWindowTitle(QApplication::translate("Settingwindow", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Settingwindow: public Ui_Settingwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGWINDOW_H
