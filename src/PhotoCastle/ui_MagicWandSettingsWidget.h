/********************************************************************************
** Form generated from reading UI file 'MagicWandSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGICWANDSETTINGSWIDGET_H
#define UI_MAGICWANDSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MagicWandSettingsWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QSpinBox *toleranceSpinBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *colorCheckBox;

    void setupUi(QWidget *MagicWandSettingsWidget)
    {
        if (MagicWandSettingsWidget->objectName().isEmpty())
            MagicWandSettingsWidget->setObjectName(QString::fromUtf8("MagicWandSettingsWidget"));
        MagicWandSettingsWidget->resize(134, 111);
        verticalLayout_2 = new QVBoxLayout(MagicWandSettingsWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(MagicWandSettingsWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        toleranceSpinBox = new QSpinBox(MagicWandSettingsWidget);
        toleranceSpinBox->setObjectName(QString::fromUtf8("toleranceSpinBox"));
        toleranceSpinBox->setMinimumSize(QSize(0, 24));
        toleranceSpinBox->setMaximum(100);
        toleranceSpinBox->setValue(0);

        verticalLayout->addWidget(toleranceSpinBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addLayout(verticalLayout_3);

        colorCheckBox = new QCheckBox(MagicWandSettingsWidget);
        colorCheckBox->setObjectName(QString::fromUtf8("colorCheckBox"));

        verticalLayout->addWidget(colorCheckBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MagicWandSettingsWidget);

        QMetaObject::connectSlotsByName(MagicWandSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *MagicWandSettingsWidget)
    {
        MagicWandSettingsWidget->setWindowTitle(QCoreApplication::translate("MagicWandSettingsWidget", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("MagicWandSettingsWidget", "Tolerance", nullptr));
        colorCheckBox->setText(QCoreApplication::translate("MagicWandSettingsWidget", "Color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MagicWandSettingsWidget: public Ui_MagicWandSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGICWANDSETTINGSWIDGET_H
