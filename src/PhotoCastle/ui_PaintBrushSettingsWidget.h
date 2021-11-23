/********************************************************************************
** Form generated from reading UI file 'PaintBrushSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTBRUSHSETTINGSWIDGET_H
#define UI_PAINTBRUSHSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaintBrushSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QToolButton *buttonRoundCap;
    QSpacerItem *verticalSpacer;
    QToolButton *buttonSquareCap;
    QLabel *labelRadius;
    QLabel *labelRadiusValue;
    QSlider *sliderRadius;
    QLabel *label;
    QLabel *labelPressureValue;
    QSlider *pressureSlider;
    QCheckBox *cbAntialias;

    void setupUi(QWidget *PaintBrushSettingsWidget)
    {
        if (PaintBrushSettingsWidget->objectName().isEmpty())
            PaintBrushSettingsWidget->setObjectName(QString::fromUtf8("PaintBrushSettingsWidget"));
        PaintBrushSettingsWidget->resize(134, 209);
        gridLayout = new QGridLayout(PaintBrushSettingsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonRoundCap = new QToolButton(PaintBrushSettingsWidget);
        buttonRoundCap->setObjectName(QString::fromUtf8("buttonRoundCap"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/brushes/assets/brushes/circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRoundCap->setIcon(icon);
        buttonRoundCap->setIconSize(QSize(32, 32));
        buttonRoundCap->setCheckable(true);
        buttonRoundCap->setChecked(true);

        gridLayout->addWidget(buttonRoundCap, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        buttonSquareCap = new QToolButton(PaintBrushSettingsWidget);
        buttonSquareCap->setObjectName(QString::fromUtf8("buttonSquareCap"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/brushes/assets/brushes/square.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonSquareCap->setIcon(icon1);
        buttonSquareCap->setIconSize(QSize(32, 32));
        buttonSquareCap->setCheckable(true);
        buttonSquareCap->setChecked(false);

        gridLayout->addWidget(buttonSquareCap, 0, 2, 1, 1);

        labelRadius = new QLabel(PaintBrushSettingsWidget);
        labelRadius->setObjectName(QString::fromUtf8("labelRadius"));

        gridLayout->addWidget(labelRadius, 1, 0, 1, 2);

        labelRadiusValue = new QLabel(PaintBrushSettingsWidget);
        labelRadiusValue->setObjectName(QString::fromUtf8("labelRadiusValue"));

        gridLayout->addWidget(labelRadiusValue, 1, 2, 1, 1);

        sliderRadius = new QSlider(PaintBrushSettingsWidget);
        sliderRadius->setObjectName(QString::fromUtf8("sliderRadius"));
        sliderRadius->setMinimum(1);
        sliderRadius->setOrientation(Qt::Horizontal);
        sliderRadius->setTickPosition(QSlider::TicksBelow);

        gridLayout->addWidget(sliderRadius, 2, 0, 1, 3);

        label = new QLabel(PaintBrushSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 2);

        labelPressureValue = new QLabel(PaintBrushSettingsWidget);
        labelPressureValue->setObjectName(QString::fromUtf8("labelPressureValue"));

        gridLayout->addWidget(labelPressureValue, 3, 2, 1, 1);

        pressureSlider = new QSlider(PaintBrushSettingsWidget);
        pressureSlider->setObjectName(QString::fromUtf8("pressureSlider"));
        pressureSlider->setMinimum(10);
        pressureSlider->setMaximum(100);
        pressureSlider->setSingleStep(10);
        pressureSlider->setValue(100);
        pressureSlider->setOrientation(Qt::Horizontal);
        pressureSlider->setTickPosition(QSlider::TicksBelow);
        pressureSlider->setTickInterval(10);

        gridLayout->addWidget(pressureSlider, 4, 0, 1, 3);

        cbAntialias = new QCheckBox(PaintBrushSettingsWidget);
        cbAntialias->setObjectName(QString::fromUtf8("cbAntialias"));

        gridLayout->addWidget(cbAntialias, 5, 0, 1, 3);

#if QT_CONFIG(shortcut)
        labelRadius->setBuddy(sliderRadius);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PaintBrushSettingsWidget);

        QMetaObject::connectSlotsByName(PaintBrushSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *PaintBrushSettingsWidget)
    {
        PaintBrushSettingsWidget->setWindowTitle(QCoreApplication::translate("PaintBrushSettingsWidget", "Form", nullptr));
        buttonRoundCap->setText(QCoreApplication::translate("PaintBrushSettingsWidget", "...", nullptr));
        buttonSquareCap->setText(QCoreApplication::translate("PaintBrushSettingsWidget", "...", nullptr));
        labelRadius->setText(QCoreApplication::translate("PaintBrushSettingsWidget", "&Radius:", nullptr));
        labelRadiusValue->setText(QCoreApplication::translate("PaintBrushSettingsWidget", "0", nullptr));
        label->setText(QCoreApplication::translate("PaintBrushSettingsWidget", "Pressure", nullptr));
        labelPressureValue->setText(QCoreApplication::translate("PaintBrushSettingsWidget", "100", nullptr));
        cbAntialias->setText(QCoreApplication::translate("PaintBrushSettingsWidget", "&Anti-aliasing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaintBrushSettingsWidget: public Ui_PaintBrushSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTBRUSHSETTINGSWIDGET_H
