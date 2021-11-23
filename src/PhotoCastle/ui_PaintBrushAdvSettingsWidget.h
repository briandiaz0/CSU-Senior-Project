/********************************************************************************
** Form generated from reading UI file 'PaintBrushAdvSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTBRUSHADVSETTINGSWIDGET_H
#define UI_PAINTBRUSHADVSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "brushtypecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_PaintBrushAdvSettingsWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    BrushTypeComboBox *comboBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSlider *pressureSlider;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSlider *stepSlider;
    QCheckBox *fadeCheckBox;

    void setupUi(QWidget *PaintBrushAdvSettingsWidget)
    {
        if (PaintBrushAdvSettingsWidget->objectName().isEmpty())
            PaintBrushAdvSettingsWidget->setObjectName(QString::fromUtf8("PaintBrushAdvSettingsWidget"));
        PaintBrushAdvSettingsWidget->resize(134, 198);
        verticalLayout_2 = new QVBoxLayout(PaintBrushAdvSettingsWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        comboBox = new BrushTypeComboBox(PaintBrushAdvSettingsWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(32, 32));
        comboBox->setMaximumSize(QSize(115, 32));
        QFont font;
        font.setKerning(false);
        comboBox->setFont(font);
        comboBox->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(comboBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(PaintBrushAdvSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        pressureSlider = new QSlider(PaintBrushAdvSettingsWidget);
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
        label_2 = new QLabel(PaintBrushAdvSettingsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        stepSlider = new QSlider(PaintBrushAdvSettingsWidget);
        stepSlider->setObjectName(QString::fromUtf8("stepSlider"));
        stepSlider->setMinimum(1);
        stepSlider->setMaximum(50);
        stepSlider->setSingleStep(5);
        stepSlider->setPageStep(5);
        stepSlider->setOrientation(Qt::Horizontal);
        stepSlider->setTickPosition(QSlider::TicksBelow);

        verticalLayout_4->addWidget(stepSlider);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addLayout(verticalLayout_3);

        fadeCheckBox = new QCheckBox(PaintBrushAdvSettingsWidget);
        fadeCheckBox->setObjectName(QString::fromUtf8("fadeCheckBox"));

        verticalLayout->addWidget(fadeCheckBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(PaintBrushAdvSettingsWidget);

        QMetaObject::connectSlotsByName(PaintBrushAdvSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *PaintBrushAdvSettingsWidget)
    {
        PaintBrushAdvSettingsWidget->setWindowTitle(QCoreApplication::translate("PaintBrushAdvSettingsWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("PaintBrushAdvSettingsWidget", "Pressure", nullptr));
        label_2->setText(QCoreApplication::translate("PaintBrushAdvSettingsWidget", "Step", nullptr));
        fadeCheckBox->setText(QCoreApplication::translate("PaintBrushAdvSettingsWidget", "Fade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaintBrushAdvSettingsWidget: public Ui_PaintBrushAdvSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTBRUSHADVSETTINGSWIDGET_H
