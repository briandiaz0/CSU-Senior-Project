/********************************************************************************
** Form generated from reading UI file 'dropshadowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DROPSHADOWDIALOG_H
#define UI_DROPSHADOWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "brushtypecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_dropshadowDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *radiusValue;
    QSpinBox *paddingValue;
    BrushTypeComboBox *colorComboBox;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *offsetxValue;
    QSpinBox *offsetyValue;
    QPushButton *defaultsButton;

    void setupUi(QDialog *dropshadowDialog)
    {
        if (dropshadowDialog->objectName().isEmpty())
            dropshadowDialog->setObjectName(QString::fromUtf8("dropshadowDialog"));
        dropshadowDialog->setWindowModality(Qt::ApplicationModal);
        dropshadowDialog->resize(400, 195);
        buttonBox = new QDialogButtonBox(dropshadowDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 150, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(dropshadowDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 121, 17));
        label_2 = new QLabel(dropshadowDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 20, 101, 17));
        label_3 = new QLabel(dropshadowDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 20, 121, 17));
        radiusValue = new QSpinBox(dropshadowDialog);
        radiusValue->setObjectName(QString::fromUtf8("radiusValue"));
        radiusValue->setGeometry(QRect(20, 40, 41, 26));
        paddingValue = new QSpinBox(dropshadowDialog);
        paddingValue->setObjectName(QString::fromUtf8("paddingValue"));
        paddingValue->setGeometry(QRect(140, 40, 48, 26));
        colorComboBox = new BrushTypeComboBox(dropshadowDialog);
        colorComboBox->setObjectName(QString::fromUtf8("colorComboBox"));
        colorComboBox->setGeometry(QRect(250, 40, 120, 21));
        label_4 = new QLabel(dropshadowDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 80, 101, 17));
        label_5 = new QLabel(dropshadowDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 80, 81, 17));
        offsetxValue = new QSpinBox(dropshadowDialog);
        offsetxValue->setObjectName(QString::fromUtf8("offsetxValue"));
        offsetxValue->setGeometry(QRect(20, 100, 48, 26));
        offsetyValue = new QSpinBox(dropshadowDialog);
        offsetyValue->setObjectName(QString::fromUtf8("offsetyValue"));
        offsetyValue->setGeometry(QRect(140, 100, 48, 26));
        defaultsButton = new QPushButton(dropshadowDialog);
        defaultsButton->setObjectName(QString::fromUtf8("defaultsButton"));
        defaultsButton->setGeometry(QRect(20, 140, 141, 25));

        retranslateUi(dropshadowDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), dropshadowDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dropshadowDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(dropshadowDialog);
    } // setupUi

    void retranslateUi(QDialog *dropshadowDialog)
    {
        dropshadowDialog->setWindowTitle(QCoreApplication::translate("dropshadowDialog", "Drop shadow", nullptr));
        label->setText(QCoreApplication::translate("dropshadowDialog", "Blur radius", nullptr));
        label_2->setText(QCoreApplication::translate("dropshadowDialog", "Padding", nullptr));
        label_3->setText(QCoreApplication::translate("dropshadowDialog", "Colour", nullptr));
        label_4->setText(QCoreApplication::translate("dropshadowDialog", "Offset x", nullptr));
        label_5->setText(QCoreApplication::translate("dropshadowDialog", "Offset y", nullptr));
        defaultsButton->setText(QCoreApplication::translate("dropshadowDialog", "Default values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dropshadowDialog: public Ui_dropshadowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DROPSHADOWDIALOG_H
