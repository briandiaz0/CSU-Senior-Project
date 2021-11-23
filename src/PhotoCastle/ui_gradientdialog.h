/********************************************************************************
** Form generated from reading UI file 'gradientdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADIENTDIALOG_H
#define UI_GRADIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include "brushtypecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_GradientDialog
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QRadioButton *directionN;
    QRadioButton *directionW;
    QRadioButton *directionE;
    QRadioButton *directionS;
    QRadioButton *directionNE;
    QRadioButton *directionSE;
    QRadioButton *directionSW;
    QRadioButton *directionNW;
    QGroupBox *groupBox_2;
    QRadioButton *duatone;
    QRadioButton *monochromatic;
    QGroupBox *groupBox_3;
    BrushTypeComboBox *startColorComboBox;
    QLabel *label;
    QLabel *opacityValue;
    QSlider *startOpacity;
    QGroupBox *stopColorGroupBox;
    BrushTypeComboBox *stopColorComboBox;
    QLabel *label_2;
    QLabel *opacityValue_2;
    QSlider *stopOpacity;

    void setupUi(QDialog *GradientDialog)
    {
        if (GradientDialog->objectName().isEmpty())
            GradientDialog->setObjectName(QString::fromUtf8("GradientDialog"));
        GradientDialog->setWindowModality(Qt::ApplicationModal);
        GradientDialog->resize(341, 408);
        buttonBox = new QDialogButtonBox(GradientDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(170, 370, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(GradientDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 321, 101));
        directionN = new QRadioButton(groupBox);
        directionN->setObjectName(QString::fromUtf8("directionN"));
        directionN->setGeometry(QRect(34, 34, 16, 16));
        directionN->setAutoFillBackground(false);
        directionN->setChecked(false);
        directionN->setAutoRepeat(false);
        directionW = new QRadioButton(groupBox);
        directionW->setObjectName(QString::fromUtf8("directionW"));
        directionW->setGeometry(QRect(14, 54, 16, 16));
        directionW->setAutoRepeat(false);
        directionE = new QRadioButton(groupBox);
        directionE->setObjectName(QString::fromUtf8("directionE"));
        directionE->setGeometry(QRect(54, 54, 16, 16));
        directionE->setAutoRepeat(false);
        directionS = new QRadioButton(groupBox);
        directionS->setObjectName(QString::fromUtf8("directionS"));
        directionS->setGeometry(QRect(34, 74, 16, 16));
        directionS->setAutoRepeat(false);
        directionNE = new QRadioButton(groupBox);
        directionNE->setObjectName(QString::fromUtf8("directionNE"));
        directionNE->setGeometry(QRect(48, 40, 16, 16));
        directionNE->setAutoFillBackground(false);
        directionNE->setAutoRepeat(false);
        directionSE = new QRadioButton(groupBox);
        directionSE->setObjectName(QString::fromUtf8("directionSE"));
        directionSE->setGeometry(QRect(48, 68, 16, 16));
        directionSE->setAutoFillBackground(false);
        directionSE->setAutoRepeat(false);
        directionSW = new QRadioButton(groupBox);
        directionSW->setObjectName(QString::fromUtf8("directionSW"));
        directionSW->setGeometry(QRect(20, 68, 16, 16));
        directionSW->setAutoFillBackground(false);
        directionSW->setAutoRepeat(false);
        directionNW = new QRadioButton(groupBox);
        directionNW->setObjectName(QString::fromUtf8("directionNW"));
        directionNW->setGeometry(QRect(20, 40, 16, 16));
        directionNW->setAutoFillBackground(false);
        directionNW->setChecked(false);
        directionNW->setAutoRepeat(false);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 10, 231, 81));
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        duatone = new QRadioButton(groupBox_2);
        duatone->setObjectName(QString::fromUtf8("duatone"));
        duatone->setGeometry(QRect(10, 30, 101, 17));
        duatone->setChecked(true);
        monochromatic = new QRadioButton(groupBox_2);
        monochromatic->setObjectName(QString::fromUtf8("monochromatic"));
        monochromatic->setGeometry(QRect(10, 50, 141, 17));
        groupBox_3 = new QGroupBox(GradientDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 120, 321, 111));
        startColorComboBox = new BrushTypeComboBox(groupBox_3);
        startColorComboBox->setObjectName(QString::fromUtf8("startColorComboBox"));
        startColorComboBox->setGeometry(QRect(10, 30, 131, 25));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 59, 61, 16));
        opacityValue = new QLabel(groupBox_3);
        opacityValue->setObjectName(QString::fromUtf8("opacityValue"));
        opacityValue->setGeometry(QRect(80, 60, 51, 16));
        startOpacity = new QSlider(groupBox_3);
        startOpacity->setObjectName(QString::fromUtf8("startOpacity"));
        startOpacity->setGeometry(QRect(10, 77, 301, 19));
        startOpacity->setMaximum(100);
        startOpacity->setValue(50);
        startOpacity->setOrientation(Qt::Horizontal);
        startOpacity->setTickPosition(QSlider::TicksBelow);
        startOpacity->setTickInterval(5);
        stopColorGroupBox = new QGroupBox(GradientDialog);
        stopColorGroupBox->setObjectName(QString::fromUtf8("stopColorGroupBox"));
        stopColorGroupBox->setEnabled(true);
        stopColorGroupBox->setGeometry(QRect(10, 240, 321, 111));
        stopColorComboBox = new BrushTypeComboBox(stopColorGroupBox);
        stopColorComboBox->setObjectName(QString::fromUtf8("stopColorComboBox"));
        stopColorComboBox->setGeometry(QRect(10, 30, 131, 25));
        label_2 = new QLabel(stopColorGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 59, 61, 16));
        opacityValue_2 = new QLabel(stopColorGroupBox);
        opacityValue_2->setObjectName(QString::fromUtf8("opacityValue_2"));
        opacityValue_2->setGeometry(QRect(80, 60, 51, 16));
        stopOpacity = new QSlider(stopColorGroupBox);
        stopOpacity->setObjectName(QString::fromUtf8("stopOpacity"));
        stopOpacity->setGeometry(QRect(10, 77, 301, 19));
        stopOpacity->setMaximum(100);
        stopOpacity->setValue(50);
        stopOpacity->setOrientation(Qt::Horizontal);
        stopOpacity->setTickPosition(QSlider::TicksBelow);
        stopOpacity->setTickInterval(5);

        retranslateUi(GradientDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GradientDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GradientDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GradientDialog);
    } // setupUi

    void retranslateUi(QDialog *GradientDialog)
    {
        GradientDialog->setWindowTitle(QCoreApplication::translate("GradientDialog", "Gradient", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GradientDialog", "Direction", nullptr));
        directionN->setText(QString());
        directionW->setText(QString());
        directionE->setText(QString());
        directionS->setText(QString());
        directionNE->setText(QString());
        directionSE->setText(QString());
        directionSW->setText(QString());
        directionNW->setText(QString());
        groupBox_2->setTitle(QString());
        duatone->setText(QCoreApplication::translate("GradientDialog", "Duotone", nullptr));
        monochromatic->setText(QCoreApplication::translate("GradientDialog", "Monochromatic", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GradientDialog", "Color 1", nullptr));
        label->setText(QCoreApplication::translate("GradientDialog", "Opacity:", nullptr));
        opacityValue->setText(QCoreApplication::translate("GradientDialog", "0%", nullptr));
        stopColorGroupBox->setTitle(QCoreApplication::translate("GradientDialog", "Color 2", nullptr));
        label_2->setText(QCoreApplication::translate("GradientDialog", "Opacity:", nullptr));
        opacityValue_2->setText(QCoreApplication::translate("GradientDialog", "0%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GradientDialog: public Ui_GradientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADIENTDIALOG_H
