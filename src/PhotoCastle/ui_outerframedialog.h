/********************************************************************************
** Form generated from reading UI file 'outerframedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTERFRAMEDIALOG_H
#define UI_OUTERFRAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include "brushtypecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OuterFrameDialog
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *colorValue;
    QLabel *label;
    QLabel *label_2;
    BrushTypeComboBox *colorComboBox;

    void setupUi(QDialog *OuterFrameDialog)
    {
        if (OuterFrameDialog->objectName().isEmpty())
            OuterFrameDialog->setObjectName(QString::fromUtf8("OuterFrameDialog"));
        OuterFrameDialog->setWindowModality(Qt::ApplicationModal);
        OuterFrameDialog->resize(372, 136);
        buttonBox = new QDialogButtonBox(OuterFrameDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 90, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        colorValue = new QSpinBox(OuterFrameDialog);
        colorValue->setObjectName(QString::fromUtf8("colorValue"));
        colorValue->setGeometry(QRect(20, 40, 61, 24));
        label = new QLabel(OuterFrameDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 61, 16));
        label_2 = new QLabel(OuterFrameDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 20, 121, 16));
        colorComboBox = new BrushTypeComboBox(OuterFrameDialog);
        colorComboBox->setObjectName(QString::fromUtf8("colorComboBox"));
        colorComboBox->setGeometry(QRect(90, 40, 120, 24));

        retranslateUi(OuterFrameDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OuterFrameDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OuterFrameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OuterFrameDialog);
    } // setupUi

    void retranslateUi(QDialog *OuterFrameDialog)
    {
        OuterFrameDialog->setWindowTitle(QCoreApplication::translate("OuterFrameDialog", "Outside frame", nullptr));
        label->setText(QCoreApplication::translate("OuterFrameDialog", "Width:", nullptr));
        label_2->setText(QCoreApplication::translate("OuterFrameDialog", "Colour:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OuterFrameDialog: public Ui_OuterFrameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTERFRAMEDIALOG_H
