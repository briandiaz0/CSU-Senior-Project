/********************************************************************************
** Form generated from reading UI file 'erasersettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERASERSETTINGSWIDGET_H
#define UI_ERASERSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EraserSettingsWidget
{
public:
    QLabel *label;
    QSlider *radiusSlider;
    QLabel *radiusValueLabel;

    void setupUi(QWidget *EraserSettingsWidget)
    {
        if (EraserSettingsWidget->objectName().isEmpty())
            EraserSettingsWidget->setObjectName(QString::fromUtf8("EraserSettingsWidget"));
        EraserSettingsWidget->resize(155, 261);
        label = new QLabel(EraserSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 67, 17));
        radiusSlider = new QSlider(EraserSettingsWidget);
        radiusSlider->setObjectName(QString::fromUtf8("radiusSlider"));
        radiusSlider->setGeometry(QRect(10, 60, 121, 21));
        radiusSlider->setMinimum(1);
        radiusSlider->setMaximum(99);
        radiusSlider->setSingleStep(1);
        radiusSlider->setPageStep(10);
        radiusSlider->setValue(1);
        radiusSlider->setOrientation(Qt::Horizontal);
        radiusSlider->setTickPosition(QSlider::TicksBelow);
        radiusSlider->setTickInterval(0);
        radiusValueLabel = new QLabel(EraserSettingsWidget);
        radiusValueLabel->setObjectName(QString::fromUtf8("radiusValueLabel"));
        radiusValueLabel->setGeometry(QRect(66, 40, 61, 16));

        retranslateUi(EraserSettingsWidget);

        QMetaObject::connectSlotsByName(EraserSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *EraserSettingsWidget)
    {
        EraserSettingsWidget->setWindowTitle(QCoreApplication::translate("EraserSettingsWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("EraserSettingsWidget", "Size:", nullptr));
        radiusValueLabel->setText(QCoreApplication::translate("EraserSettingsWidget", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EraserSettingsWidget: public Ui_EraserSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERASERSETTINGSWIDGET_H
