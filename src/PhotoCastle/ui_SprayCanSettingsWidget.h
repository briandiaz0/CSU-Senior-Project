/********************************************************************************
** Form generated from reading UI file 'SprayCanSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRAYCANSETTINGSWIDGET_H
#define UI_SPRAYCANSETTINGSWIDGET_H

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

class Ui_SprayCanSettingsWidget
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
    QSlider *dispersionSlider;
    QCheckBox *rainbowCheckBox;

    void setupUi(QWidget *SprayCanSettingsWidget)
    {
        if (SprayCanSettingsWidget->objectName().isEmpty())
            SprayCanSettingsWidget->setObjectName(QString::fromUtf8("SprayCanSettingsWidget"));
        SprayCanSettingsWidget->resize(134, 198);
        verticalLayout_2 = new QVBoxLayout(SprayCanSettingsWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(SprayCanSettingsWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        radiusSpinBox = new QSpinBox(SprayCanSettingsWidget);
        radiusSpinBox->setObjectName(QString::fromUtf8("radiusSpinBox"));
        radiusSpinBox->setMinimumSize(QSize(0, 24));
        radiusSpinBox->setMinimum(2);
        radiusSpinBox->setValue(32);

        verticalLayout->addWidget(radiusSpinBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(SprayCanSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        pressureSlider = new QSlider(SprayCanSettingsWidget);
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
        label_2 = new QLabel(SprayCanSettingsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        dispersionSlider = new QSlider(SprayCanSettingsWidget);
        dispersionSlider->setObjectName(QString::fromUtf8("dispersionSlider"));
        dispersionSlider->setMinimum(1);
        dispersionSlider->setMaximum(50);
        dispersionSlider->setSingleStep(5);
        dispersionSlider->setPageStep(5);
        dispersionSlider->setOrientation(Qt::Horizontal);
        dispersionSlider->setTickPosition(QSlider::TicksBelow);

        verticalLayout_4->addWidget(dispersionSlider);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addLayout(verticalLayout_3);

        rainbowCheckBox = new QCheckBox(SprayCanSettingsWidget);
        rainbowCheckBox->setObjectName(QString::fromUtf8("rainbowCheckBox"));

        verticalLayout->addWidget(rainbowCheckBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SprayCanSettingsWidget);

        QMetaObject::connectSlotsByName(SprayCanSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SprayCanSettingsWidget)
    {
        SprayCanSettingsWidget->setWindowTitle(QCoreApplication::translate("SprayCanSettingsWidget", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("SprayCanSettingsWidget", "Radius", nullptr));
        label->setText(QCoreApplication::translate("SprayCanSettingsWidget", "Pressure", nullptr));
        label_2->setText(QCoreApplication::translate("SprayCanSettingsWidget", "Dispersion", nullptr));
        rainbowCheckBox->setText(QCoreApplication::translate("SprayCanSettingsWidget", "Rainbow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SprayCanSettingsWidget: public Ui_SprayCanSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRAYCANSETTINGSWIDGET_H
