/********************************************************************************
** Form generated from reading UI file 'LineSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINESETTINGSWIDGET_H
#define UI_LINESETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "brushtypecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_LineSettingsWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QSpinBox *widthSpinBox;
    QLabel *label_5;
    QSpinBox *opacitySpinBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *antialiasCheckBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QCheckBox *arrowCheckBox;
    QLabel *arrowLabel;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *arrowCheckBox2;
    QLabel *arrowLabel2;
    QLabel *label_3;
    BrushTypeComboBox *styleComboBox;

    void setupUi(QWidget *LineSettingsWidget)
    {
        if (LineSettingsWidget->objectName().isEmpty())
            LineSettingsWidget->setObjectName(QString::fromUtf8("LineSettingsWidget"));
        LineSettingsWidget->resize(141, 274);
        verticalLayout_2 = new QVBoxLayout(LineSettingsWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_4 = new QLabel(LineSettingsWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        widthSpinBox = new QSpinBox(LineSettingsWidget);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setMinimumSize(QSize(0, 24));
        widthSpinBox->setMinimum(1);

        verticalLayout->addWidget(widthSpinBox);

        label_5 = new QLabel(LineSettingsWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        opacitySpinBox = new QSpinBox(LineSettingsWidget);
        opacitySpinBox->setObjectName(QString::fromUtf8("opacitySpinBox"));
        opacitySpinBox->setMinimumSize(QSize(0, 24));
        opacitySpinBox->setMaximum(100);
        opacitySpinBox->setValue(100);

        verticalLayout->addWidget(opacitySpinBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        antialiasCheckBox = new QCheckBox(LineSettingsWidget);
        antialiasCheckBox->setObjectName(QString::fromUtf8("antialiasCheckBox"));

        verticalLayout_3->addWidget(antialiasCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label = new QLabel(LineSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        arrowCheckBox = new QCheckBox(LineSettingsWidget);
        arrowCheckBox->setObjectName(QString::fromUtf8("arrowCheckBox"));

        horizontalLayout->addWidget(arrowCheckBox);

        arrowLabel = new QLabel(LineSettingsWidget);
        arrowLabel->setObjectName(QString::fromUtf8("arrowLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(arrowLabel->sizePolicy().hasHeightForWidth());
        arrowLabel->setSizePolicy(sizePolicy);
        arrowLabel->setMaximumSize(QSize(16777215, 16));
        arrowLabel->setPixmap(QPixmap(QString::fromUtf8(":/lines/assets/lines/arrow_1.png")));
        arrowLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(arrowLabel);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        arrowCheckBox2 = new QCheckBox(LineSettingsWidget);
        arrowCheckBox2->setObjectName(QString::fromUtf8("arrowCheckBox2"));

        horizontalLayout_4->addWidget(arrowCheckBox2);

        arrowLabel2 = new QLabel(LineSettingsWidget);
        arrowLabel2->setObjectName(QString::fromUtf8("arrowLabel2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(arrowLabel2->sizePolicy().hasHeightForWidth());
        arrowLabel2->setSizePolicy(sizePolicy1);
        arrowLabel2->setMaximumSize(QSize(16777215, 16));
        arrowLabel2->setPixmap(QPixmap(QString::fromUtf8(":/lines/assets/lines/arrow_2.png")));

        horizontalLayout_4->addWidget(arrowLabel2);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addLayout(verticalLayout_3);

        label_3 = new QLabel(LineSettingsWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        styleComboBox = new BrushTypeComboBox(LineSettingsWidget);
        styleComboBox->setObjectName(QString::fromUtf8("styleComboBox"));
        styleComboBox->setMinimumSize(QSize(32, 32));
        styleComboBox->setMaximumSize(QSize(115, 32));

        verticalLayout->addWidget(styleComboBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LineSettingsWidget);

        QMetaObject::connectSlotsByName(LineSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *LineSettingsWidget)
    {
        LineSettingsWidget->setWindowTitle(QCoreApplication::translate("LineSettingsWidget", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("LineSettingsWidget", "Width", nullptr));
        label_5->setText(QCoreApplication::translate("LineSettingsWidget", "Opacity", nullptr));
        antialiasCheckBox->setText(QCoreApplication::translate("LineSettingsWidget", "Antialias", nullptr));
        label->setText(QCoreApplication::translate("LineSettingsWidget", "Arrow", nullptr));
        arrowCheckBox->setText(QString());
        arrowLabel->setText(QString());
        arrowCheckBox2->setText(QString());
        arrowLabel2->setText(QString());
        label_3->setText(QCoreApplication::translate("LineSettingsWidget", "Style:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LineSettingsWidget: public Ui_LineSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINESETTINGSWIDGET_H
