/********************************************************************************
** Form generated from reading UI file 'NewDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDIALOG_H
#define UI_NEWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "brushtypecombobox.h"
#include "imagepositionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_NewDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *imageWidth;
    QDoubleSpinBox *imageWvalue;
    QComboBox *imageWHcombo;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *pixelWvalue;
    QDoubleSpinBox *pixelHvalue;
    QDoubleSpinBox *memoryValue;
    QGroupBox *groupBox_2;
    QPushButton *lockedRatioButton;
    BrushTypeComboBox *backgroundColorComboBox;
    ImagePositionWidget *positionWidget;
    QLabel *positionLabel;
    BrushTypeComboBox *backgroundColorComboBox_NewFile;
    QComboBox *imagePresetCombo;
    QLabel *imagePreset;
    QLabel *backgroundColorNewLabel;
    QLabel *imageHeight;
    QDoubleSpinBox *imageHvalue;
    QLabel *backgroundLabel;
    QLabel *imageRes;
    QDoubleSpinBox *imageRvalue;
    QComboBox *imageResCombo;
    QCheckBox *backgroundColourEnabled;

    void setupUi(QDialog *NewDialog)
    {
        if (NewDialog->objectName().isEmpty())
            NewDialog->setObjectName(QString::fromUtf8("NewDialog"));
        NewDialog->setWindowModality(Qt::ApplicationModal);
        NewDialog->resize(353, 458);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        NewDialog->setFont(font);
        NewDialog->setAutoFillBackground(false);
        NewDialog->setModal(false);
        buttonBox = new QDialogButtonBox(NewDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 420, 321, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        imageWidth = new QLabel(NewDialog);
        imageWidth->setObjectName(QString::fromUtf8("imageWidth"));
        imageWidth->setGeometry(QRect(20, 130, 67, 17));
        imageWvalue = new QDoubleSpinBox(NewDialog);
        imageWvalue->setObjectName(QString::fromUtf8("imageWvalue"));
        imageWvalue->setGeometry(QRect(20, 150, 100, 27));
        imageWvalue->setDecimals(0);
        imageWvalue->setMinimum(1.000000000000000);
        imageWvalue->setMaximum(9999.000000000000000);
        imageWvalue->setValue(800.000000000000000);
        imageWvalue->setProperty("displayIntegerBase", QVariant(10));
        imageWHcombo = new QComboBox(NewDialog);
        imageWHcombo->addItem(QString());
        imageWHcombo->addItem(QString());
        imageWHcombo->addItem(QString());
        imageWHcombo->setObjectName(QString::fromUtf8("imageWHcombo"));
        imageWHcombo->setGeometry(QRect(190, 180, 141, 27));
        imageWHcombo->setEditable(false);
        groupBox = new QGroupBox(NewDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 331, 80));
        groupBox->setFlat(false);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 67, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 30, 67, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 30, 67, 17));
        pixelWvalue = new QDoubleSpinBox(groupBox);
        pixelWvalue->setObjectName(QString::fromUtf8("pixelWvalue"));
        pixelWvalue->setGeometry(QRect(10, 50, 69, 27));
        pixelWvalue->setFocusPolicy(Qt::NoFocus);
        pixelWvalue->setFrame(true);
        pixelWvalue->setReadOnly(true);
        pixelWvalue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pixelWvalue->setDecimals(0);
        pixelWvalue->setMaximum(9999.000000000000000);
        pixelHvalue = new QDoubleSpinBox(groupBox);
        pixelHvalue->setObjectName(QString::fromUtf8("pixelHvalue"));
        pixelHvalue->setGeometry(QRect(100, 50, 69, 27));
        pixelHvalue->setFocusPolicy(Qt::NoFocus);
        pixelHvalue->setReadOnly(true);
        pixelHvalue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pixelHvalue->setDecimals(0);
        pixelHvalue->setMaximum(9999.000000000000000);
        memoryValue = new QDoubleSpinBox(groupBox);
        memoryValue->setObjectName(QString::fromUtf8("memoryValue"));
        memoryValue->setGeometry(QRect(220, 50, 69, 27));
        memoryValue->setFocusPolicy(Qt::NoFocus);
        memoryValue->setReadOnly(true);
        memoryValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        memoryValue->setMaximum(9999999.000000000000000);
        groupBox_2 = new QGroupBox(NewDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(10, 100, 331, 311));
        groupBox_2->setFocusPolicy(Qt::NoFocus);
        groupBox_2->setFlat(false);
        lockedRatioButton = new QPushButton(groupBox_2);
        lockedRatioButton->setObjectName(QString::fromUtf8("lockedRatioButton"));
        lockedRatioButton->setGeometry(QRect(110, 70, 21, 41));
        lockedRatioButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/assets/icons/unlinked.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icons/assets/icons/linked.png"), QSize(), QIcon::Normal, QIcon::On);
        lockedRatioButton->setIcon(icon);
        lockedRatioButton->setIconSize(QSize(32, 32));
        lockedRatioButton->setCheckable(true);
        lockedRatioButton->setAutoDefault(false);
        lockedRatioButton->setFlat(true);
        backgroundColorComboBox = new BrushTypeComboBox(groupBox_2);
        backgroundColorComboBox->setObjectName(QString::fromUtf8("backgroundColorComboBox"));
        backgroundColorComboBox->setGeometry(QRect(10, 150, 150, 27));
        positionWidget = new ImagePositionWidget(groupBox_2);
        positionWidget->setObjectName(QString::fromUtf8("positionWidget"));
        positionWidget->setGeometry(QRect(180, 180, 120, 120));
        positionLabel = new QLabel(groupBox_2);
        positionLabel->setObjectName(QString::fromUtf8("positionLabel"));
        positionLabel->setGeometry(QRect(180, 130, 141, 16));
        backgroundColorComboBox_NewFile = new BrushTypeComboBox(groupBox_2);
        backgroundColorComboBox_NewFile->setObjectName(QString::fromUtf8("backgroundColorComboBox_NewFile"));
        backgroundColorComboBox_NewFile->setGeometry(QRect(10, 220, 161, 27));
        imagePresetCombo = new QComboBox(groupBox_2);
        imagePresetCombo->addItem(QString());
        imagePresetCombo->addItem(QString());
        imagePresetCombo->addItem(QString());
        imagePresetCombo->addItem(QString());
        imagePresetCombo->addItem(QString());
        imagePresetCombo->addItem(QString());
        imagePresetCombo->addItem(QString());
        imagePresetCombo->addItem(QString());
        imagePresetCombo->addItem(QString());
        imagePresetCombo->addItem(QString());
        imagePresetCombo->setObjectName(QString::fromUtf8("imagePresetCombo"));
        imagePresetCombo->setGeometry(QRect(10, 270, 161, 27));
        imagePreset = new QLabel(groupBox_2);
        imagePreset->setObjectName(QString::fromUtf8("imagePreset"));
        imagePreset->setGeometry(QRect(10, 250, 201, 17));
        backgroundColorNewLabel = new QLabel(groupBox_2);
        backgroundColorNewLabel->setObjectName(QString::fromUtf8("backgroundColorNewLabel"));
        backgroundColorNewLabel->setGeometry(QRect(10, 200, 141, 17));
        imageHeight = new QLabel(groupBox_2);
        imageHeight->setObjectName(QString::fromUtf8("imageHeight"));
        imageHeight->setGeometry(QRect(10, 80, 67, 17));
        imageHvalue = new QDoubleSpinBox(groupBox_2);
        imageHvalue->setObjectName(QString::fromUtf8("imageHvalue"));
        imageHvalue->setGeometry(QRect(10, 100, 100, 27));
        imageHvalue->setDecimals(0);
        imageHvalue->setMinimum(1.000000000000000);
        imageHvalue->setMaximum(9999.000000000000000);
        imageHvalue->setValue(600.000000000000000);
        backgroundLabel = new QLabel(groupBox_2);
        backgroundLabel->setObjectName(QString::fromUtf8("backgroundLabel"));
        backgroundLabel->setGeometry(QRect(10, 130, 131, 16));
        imageRes = new QLabel(groupBox_2);
        imageRes->setObjectName(QString::fromUtf8("imageRes"));
        imageRes->setGeometry(QRect(10, 130, 101, 17));
        imageRvalue = new QDoubleSpinBox(groupBox_2);
        imageRvalue->setObjectName(QString::fromUtf8("imageRvalue"));
        imageRvalue->setGeometry(QRect(10, 150, 100, 27));
        imageRvalue->setMinimum(1.000000000000000);
        imageResCombo = new QComboBox(groupBox_2);
        imageResCombo->addItem(QString());
        imageResCombo->addItem(QString());
        imageResCombo->setObjectName(QString::fromUtf8("imageResCombo"));
        imageResCombo->setGeometry(QRect(180, 150, 141, 27));
        backgroundColourEnabled = new QCheckBox(groupBox_2);
        backgroundColourEnabled->setObjectName(QString::fromUtf8("backgroundColourEnabled"));
        backgroundColourEnabled->setGeometry(QRect(150, 200, 16, 21));
        groupBox_2->raise();
        buttonBox->raise();
        imageWidth->raise();
        imageWvalue->raise();
        imageWHcombo->raise();
        groupBox->raise();

        retranslateUi(NewDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewDialog, SLOT(reject()));

        imagePresetCombo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NewDialog);
    } // setupUi

    void retranslateUi(QDialog *NewDialog)
    {
        NewDialog->setWindowTitle(QCoreApplication::translate("NewDialog", "New", nullptr));
        imageWidth->setText(QCoreApplication::translate("NewDialog", "Width:", nullptr));
        imageWHcombo->setItemText(0, QCoreApplication::translate("NewDialog", "Pixels", nullptr));
        imageWHcombo->setItemText(1, QCoreApplication::translate("NewDialog", "Cm", nullptr));
        imageWHcombo->setItemText(2, QCoreApplication::translate("NewDialog", "Inches", nullptr));

        groupBox->setTitle(QCoreApplication::translate("NewDialog", "Size in Pixels/Memory", nullptr));
        label->setText(QCoreApplication::translate("NewDialog", "Width:", nullptr));
        label_2->setText(QCoreApplication::translate("NewDialog", "Height:", nullptr));
        label_3->setText(QCoreApplication::translate("NewDialog", "Memory:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NewDialog", "New Size", nullptr));
        lockedRatioButton->setText(QString());
        positionLabel->setText(QCoreApplication::translate("NewDialog", "Position:", nullptr));
        imagePresetCombo->setItemText(0, QCoreApplication::translate("NewDialog", "(none)", nullptr));
        imagePresetCombo->setItemText(1, QCoreApplication::translate("NewDialog", "100 x 100 pixels", nullptr));
        imagePresetCombo->setItemText(2, QCoreApplication::translate("NewDialog", "640 x 480 pixels", nullptr));
        imagePresetCombo->setItemText(3, QCoreApplication::translate("NewDialog", "800 x 600 pixels", nullptr));
        imagePresetCombo->setItemText(4, QCoreApplication::translate("NewDialog", "1024 x 768 pixels", nullptr));
        imagePresetCombo->setItemText(5, QCoreApplication::translate("NewDialog", "1366 x 768 pixels", nullptr));
        imagePresetCombo->setItemText(6, QCoreApplication::translate("NewDialog", "1600 x 900 pixels", nullptr));
        imagePresetCombo->setItemText(7, QCoreApplication::translate("NewDialog", "1920 x 1080 pixels", nullptr));
        imagePresetCombo->setItemText(8, QCoreApplication::translate("NewDialog", "2560 x 1440 pixels", nullptr));
        imagePresetCombo->setItemText(9, QCoreApplication::translate("NewDialog", "3840 x 2160 pixels", nullptr));

        imagePreset->setText(QCoreApplication::translate("NewDialog", "Preset Size:", nullptr));
        backgroundColorNewLabel->setText(QCoreApplication::translate("NewDialog", "Background colour:", nullptr));
        imageHeight->setText(QCoreApplication::translate("NewDialog", "Height:", nullptr));
        backgroundLabel->setText(QCoreApplication::translate("NewDialog", "Colour", nullptr));
        imageRes->setText(QCoreApplication::translate("NewDialog", "Resolution:", nullptr));
        imageResCombo->setItemText(0, QCoreApplication::translate("NewDialog", "Pixels/cm", nullptr));
        imageResCombo->setItemText(1, QCoreApplication::translate("NewDialog", "Pixels/inch", nullptr));

        backgroundColourEnabled->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewDialog: public Ui_NewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDIALOG_H
