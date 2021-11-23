/********************************************************************************
** Form generated from reading UI file 'BrushTypeComboBox.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRUSHTYPECOMBOBOX_H
#define UI_BRUSHTYPECOMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrushTypeComboBox
{
public:

    void setupUi(QWidget *BrushTypeComboBox)
    {
        if (BrushTypeComboBox->objectName().isEmpty())
            BrushTypeComboBox->setObjectName(QString::fromUtf8("BrushTypeComboBox"));
        BrushTypeComboBox->resize(105, 58);

        retranslateUi(BrushTypeComboBox);

        QMetaObject::connectSlotsByName(BrushTypeComboBox);
    } // setupUi

    void retranslateUi(QWidget *BrushTypeComboBox)
    {
        BrushTypeComboBox->setWindowTitle(QCoreApplication::translate("BrushTypeComboBox", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrushTypeComboBox: public Ui_BrushTypeComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRUSHTYPECOMBOBOX_H
