/********************************************************************************
** Form generated from reading UI file 'BlurSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLURSETTINGSWIDGET_H
#define UI_BLURSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlurSettingsWidget
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

    void setupUi(QWidget *BlurSettingsWidget)
    {
        if (BlurSettingsWidget->objectName().isEmpty())
            BlurSettingsWidget->setObjectName(QString::fromUtf8("BlurSettingsWidget"));
        BlurSettingsWidget->resize(134, 131);
        verticalLayout_2 = new QVBoxLayout(BlurSettingsWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(BlurSettingsWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        radiusSpinBox = new QSpinBox(BlurSettingsWidget);
        radiusSpinBox->setObjectName(QString::fromUtf8("radiusSpinBox"));
        radiusSpinBox->setMinimumSize(QSize(0, 24));
        radiusSpinBox->setValue(32);

        verticalLayout->addWidget(radiusSpinBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(BlurSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        pressureSlider = new QSlider(BlurSettingsWidget);
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

        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(BlurSettingsWidget);

        QMetaObject::connectSlotsByName(BlurSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *BlurSettingsWidget)
    {
        BlurSettingsWidget->setWindowTitle(QCoreApplication::translate("BlurSettingsWidget", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("BlurSettingsWidget", "Radius", nullptr));
        label->setText(QCoreApplication::translate("BlurSettingsWidget", "Pressure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlurSettingsWidget: public Ui_BlurSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLURSETTINGSWIDGET_H
