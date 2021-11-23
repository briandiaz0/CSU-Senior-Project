/********************************************************************************
** Form generated from reading UI file 'smudgesettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMUDGESETTINGSWIDGET_H
#define UI_SMUDGESETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmudgeSettingsWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QSlider *pressureSlider;
    QSpinBox *radiusSpinBox;

    void setupUi(QWidget *SmudgeSettingsWidget)
    {
        if (SmudgeSettingsWidget->objectName().isEmpty())
            SmudgeSettingsWidget->setObjectName(QString::fromUtf8("SmudgeSettingsWidget"));
        SmudgeSettingsWidget->resize(151, 300);
        label = new QLabel(SmudgeSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 67, 17));
        label_2 = new QLabel(SmudgeSettingsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 67, 17));
        pressureSlider = new QSlider(SmudgeSettingsWidget);
        pressureSlider->setObjectName(QString::fromUtf8("pressureSlider"));
        pressureSlider->setGeometry(QRect(10, 100, 111, 20));
        pressureSlider->setMinimum(1);
        pressureSlider->setMaximum(10);
        pressureSlider->setPageStep(1);
        pressureSlider->setSliderPosition(6);
        pressureSlider->setOrientation(Qt::Horizontal);
        pressureSlider->setTickPosition(QSlider::TicksBelow);
        radiusSpinBox = new QSpinBox(SmudgeSettingsWidget);
        radiusSpinBox->setObjectName(QString::fromUtf8("radiusSpinBox"));
        radiusSpinBox->setGeometry(QRect(10, 50, 121, 26));
        radiusSpinBox->setMinimum(2);
        radiusSpinBox->setValue(32);

        retranslateUi(SmudgeSettingsWidget);

        QMetaObject::connectSlotsByName(SmudgeSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SmudgeSettingsWidget)
    {
        SmudgeSettingsWidget->setWindowTitle(QCoreApplication::translate("SmudgeSettingsWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("SmudgeSettingsWidget", "Radius", nullptr));
        label_2->setText(QCoreApplication::translate("SmudgeSettingsWidget", "Pressure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmudgeSettingsWidget: public Ui_SmudgeSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMUDGESETTINGSWIDGET_H
