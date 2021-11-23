/********************************************************************************
** Form generated from reading UI file 'StampSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAMPSETTINGSWIDGET_H
#define UI_STAMPSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StampSettingsWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QSpinBox *radiusSpinBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSlider *pressureSlider;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSlider *stepSlider;
    QCheckBox *fixedCheckBox;
    QCheckBox *preciseCheckBox;
    QCheckBox *diffuseCheckBox;

    void setupUi(QWidget *StampSettingsWidget)
    {
        if (StampSettingsWidget->objectName().isEmpty())
            StampSettingsWidget->setObjectName(QString::fromUtf8("StampSettingsWidget"));
        StampSettingsWidget->resize(134, 246);
        verticalLayout_2 = new QVBoxLayout(StampSettingsWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(StampSettingsWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        radiusSpinBox = new QSpinBox(StampSettingsWidget);
        radiusSpinBox->setObjectName(QString::fromUtf8("radiusSpinBox"));
        radiusSpinBox->setMinimumSize(QSize(0, 24));
        radiusSpinBox->setValue(32);

        verticalLayout->addWidget(radiusSpinBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(StampSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        pressureSlider = new QSlider(StampSettingsWidget);
        pressureSlider->setObjectName(QString::fromUtf8("pressureSlider"));
        pressureSlider->setMinimum(1);
        pressureSlider->setMaximum(10);
        pressureSlider->setPageStep(1);
        pressureSlider->setSliderPosition(10);
        pressureSlider->setOrientation(Qt::Horizontal);
        pressureSlider->setTickPosition(QSlider::TicksBelow);

        verticalLayout_3->addWidget(pressureSlider);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(StampSettingsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        stepSlider = new QSlider(StampSettingsWidget);
        stepSlider->setObjectName(QString::fromUtf8("stepSlider"));
        stepSlider->setMinimum(1);
        stepSlider->setMaximum(99);
        stepSlider->setSingleStep(1);
        stepSlider->setPageStep(10);
        stepSlider->setOrientation(Qt::Horizontal);
        stepSlider->setTickPosition(QSlider::TicksBelow);

        verticalLayout_4->addWidget(stepSlider);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addLayout(verticalLayout_3);

        fixedCheckBox = new QCheckBox(StampSettingsWidget);
        fixedCheckBox->setObjectName(QString::fromUtf8("fixedCheckBox"));

        verticalLayout->addWidget(fixedCheckBox);

        preciseCheckBox = new QCheckBox(StampSettingsWidget);
        preciseCheckBox->setObjectName(QString::fromUtf8("preciseCheckBox"));

        verticalLayout->addWidget(preciseCheckBox);

        diffuseCheckBox = new QCheckBox(StampSettingsWidget);
        diffuseCheckBox->setObjectName(QString::fromUtf8("diffuseCheckBox"));

        verticalLayout->addWidget(diffuseCheckBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(StampSettingsWidget);

        QMetaObject::connectSlotsByName(StampSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *StampSettingsWidget)
    {
        StampSettingsWidget->setWindowTitle(QCoreApplication::translate("StampSettingsWidget", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("StampSettingsWidget", "Radius", nullptr));
        label->setText(QCoreApplication::translate("StampSettingsWidget", "Pressure", nullptr));
        label_2->setText(QCoreApplication::translate("StampSettingsWidget", "Step", nullptr));
        fixedCheckBox->setText(QCoreApplication::translate("StampSettingsWidget", "Fixed", nullptr));
        preciseCheckBox->setText(QCoreApplication::translate("StampSettingsWidget", "Precise", nullptr));
        diffuseCheckBox->setText(QCoreApplication::translate("StampSettingsWidget", "Diffuse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StampSettingsWidget: public Ui_StampSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAMPSETTINGSWIDGET_H
