/********************************************************************************
** Form generated from reading UI file 'batchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHDIALOG_H
#define UI_BATCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "brushtypecombobox.h"
#include "imagepositionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_batchDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *Files_tab;
    QListWidget *listWidget;
    QLabel *label_5;
    QComboBox *sourceFormat;
    QLabel *label_7;
    QLineEdit *outputDir;
    QLabel *label_8;
    QComboBox *outFormat;
    QPushButton *addFilesButton;
    QPushButton *outFolderPushButton;
    QWidget *Resize_tab;
    QCheckBox *imageSizeCheckBox;
    QLabel *imageHeight;
    QDoubleSpinBox *imageWvalue;
    QDoubleSpinBox *imageHvalue;
    QLabel *imageWidth;
    QCheckBox *aspectRatioCheckBox;
    QDoubleSpinBox *canvasHvalue;
    QLabel *canvasWidth;
    QLabel *canvasHeight;
    QCheckBox *canvasSizeCheckBox;
    QDoubleSpinBox *canvasWvalue;
    QComboBox *imageWHcombo;
    QLabel *imageUnit;
    ImagePositionWidget *positionWidget;
    QLabel *backgroundLabel;
    BrushTypeComboBox *backgroundColorComboBox;
    QLabel *positionLabel;
    QWidget *Adjust_tab;
    QSlider *brightnessSlider;
    QSlider *contrastSlider;
    QSlider *saturationSlider;
    QSlider *gammaSlider;
    QComboBox *brightnessChannel;
    QComboBox *contrastChannel;
    QComboBox *SaturationChannel;
    QComboBox *gammaChannel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *brightnessValue;
    QLabel *contrastValue;
    QLabel *saturationValue;
    QLabel *gammaValue;
    QWidget *Filter_tab;
    QLabel *label;
    QListWidget *listWidget_2;
    QLabel *label_2;
    QListWidget *listWidget_3;
    QPushButton *addFilterButton;
    QPushButton *removeFilterButton;
    QWidget *Transform_tab;
    QGroupBox *groupBox;
    QRadioButton *rotate90ccwRadioButton;
    QRadioButton *rotate180RadioButton;
    QCheckBox *rotateCheckBox;
    QRadioButton *rotate90radioButton;
    QGroupBox *groupBox_2;
    QRadioButton *flipVerticalRadioButton;
    QRadioButton *flipHorizontalRadioButton;
    QCheckBox *flipCheckBox;
    QWidget *Summary_tab;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *batchDialog)
    {
        if (batchDialog->objectName().isEmpty())
            batchDialog->setObjectName(QString::fromUtf8("batchDialog"));
        batchDialog->setWindowModality(Qt::ApplicationModal);
        batchDialog->resize(777, 391);
        buttonBox = new QDialogButtonBox(batchDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(420, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget = new QTabWidget(batchDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 751, 331));
        Files_tab = new QWidget();
        Files_tab->setObjectName(QString::fromUtf8("Files_tab"));
        listWidget = new QListWidget(Files_tab);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 361, 231));
        listWidget->setAcceptDrops(true);
        listWidget->setStyleSheet(QString::fromUtf8(""));
        listWidget->setDragDropMode(QAbstractItemView::DropOnly);
        listWidget->setAlternatingRowColors(true);
        listWidget->setSelectionMode(QAbstractItemView::NoSelection);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        label_5 = new QLabel(Files_tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 40, 181, 17));
        sourceFormat = new QComboBox(Files_tab);
        sourceFormat->setObjectName(QString::fromUtf8("sourceFormat"));
        sourceFormat->setGeometry(QRect(430, 60, 291, 27));
        label_7 = new QLabel(Files_tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(430, 160, 191, 16));
        outputDir = new QLineEdit(Files_tab);
        outputDir->setObjectName(QString::fromUtf8("outputDir"));
        outputDir->setGeometry(QRect(430, 180, 261, 27));
        outputDir->setReadOnly(true);
        label_8 = new QLabel(Files_tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(430, 220, 201, 17));
        outFormat = new QComboBox(Files_tab);
        outFormat->setObjectName(QString::fromUtf8("outFormat"));
        outFormat->setGeometry(QRect(430, 240, 291, 27));
        addFilesButton = new QPushButton(Files_tab);
        addFilesButton->setObjectName(QString::fromUtf8("addFilesButton"));
        addFilesButton->setGeometry(QRect(10, 10, 141, 27));
        addFilesButton->setBaseSize(QSize(99, 27));
        outFolderPushButton = new QPushButton(Files_tab);
        outFolderPushButton->setObjectName(QString::fromUtf8("outFolderPushButton"));
        outFolderPushButton->setGeometry(QRect(692, 180, 32, 27));
        tabWidget->addTab(Files_tab, QString());
        Resize_tab = new QWidget();
        Resize_tab->setObjectName(QString::fromUtf8("Resize_tab"));
        imageSizeCheckBox = new QCheckBox(Resize_tab);
        imageSizeCheckBox->setObjectName(QString::fromUtf8("imageSizeCheckBox"));
        imageSizeCheckBox->setGeometry(QRect(10, 10, 221, 17));
        imageHeight = new QLabel(Resize_tab);
        imageHeight->setObjectName(QString::fromUtf8("imageHeight"));
        imageHeight->setEnabled(false);
        imageHeight->setGeometry(QRect(130, 30, 67, 17));
        imageWvalue = new QDoubleSpinBox(Resize_tab);
        imageWvalue->setObjectName(QString::fromUtf8("imageWvalue"));
        imageWvalue->setEnabled(false);
        imageWvalue->setGeometry(QRect(10, 50, 100, 27));
        imageWvalue->setDecimals(0);
        imageWvalue->setMinimum(1.000000000000000);
        imageWvalue->setMaximum(9999.000000000000000);
        imageWvalue->setValue(800.000000000000000);
        imageWvalue->setProperty("displayIntegerBase", QVariant(10));
        imageHvalue = new QDoubleSpinBox(Resize_tab);
        imageHvalue->setObjectName(QString::fromUtf8("imageHvalue"));
        imageHvalue->setEnabled(false);
        imageHvalue->setGeometry(QRect(130, 50, 100, 27));
        imageHvalue->setDecimals(0);
        imageHvalue->setMinimum(1.000000000000000);
        imageHvalue->setMaximum(9999.000000000000000);
        imageHvalue->setValue(600.000000000000000);
        imageWidth = new QLabel(Resize_tab);
        imageWidth->setObjectName(QString::fromUtf8("imageWidth"));
        imageWidth->setEnabled(false);
        imageWidth->setGeometry(QRect(10, 30, 67, 17));
        aspectRatioCheckBox = new QCheckBox(Resize_tab);
        aspectRatioCheckBox->setObjectName(QString::fromUtf8("aspectRatioCheckBox"));
        aspectRatioCheckBox->setEnabled(false);
        aspectRatioCheckBox->setGeometry(QRect(10, 90, 171, 17));
        canvasHvalue = new QDoubleSpinBox(Resize_tab);
        canvasHvalue->setObjectName(QString::fromUtf8("canvasHvalue"));
        canvasHvalue->setEnabled(false);
        canvasHvalue->setGeometry(QRect(130, 170, 100, 27));
        canvasHvalue->setDecimals(0);
        canvasHvalue->setMinimum(1.000000000000000);
        canvasHvalue->setMaximum(9999.000000000000000);
        canvasHvalue->setValue(600.000000000000000);
        canvasWidth = new QLabel(Resize_tab);
        canvasWidth->setObjectName(QString::fromUtf8("canvasWidth"));
        canvasWidth->setEnabled(false);
        canvasWidth->setGeometry(QRect(10, 150, 67, 17));
        canvasHeight = new QLabel(Resize_tab);
        canvasHeight->setObjectName(QString::fromUtf8("canvasHeight"));
        canvasHeight->setEnabled(false);
        canvasHeight->setGeometry(QRect(130, 150, 67, 17));
        canvasSizeCheckBox = new QCheckBox(Resize_tab);
        canvasSizeCheckBox->setObjectName(QString::fromUtf8("canvasSizeCheckBox"));
        canvasSizeCheckBox->setGeometry(QRect(10, 130, 211, 17));
        canvasWvalue = new QDoubleSpinBox(Resize_tab);
        canvasWvalue->setObjectName(QString::fromUtf8("canvasWvalue"));
        canvasWvalue->setEnabled(false);
        canvasWvalue->setGeometry(QRect(10, 170, 100, 27));
        canvasWvalue->setDecimals(0);
        canvasWvalue->setMinimum(1.000000000000000);
        canvasWvalue->setMaximum(9999.000000000000000);
        canvasWvalue->setValue(800.000000000000000);
        canvasWvalue->setProperty("displayIntegerBase", QVariant(10));
        imageWHcombo = new QComboBox(Resize_tab);
        imageWHcombo->addItem(QString());
        imageWHcombo->addItem(QString());
        imageWHcombo->setObjectName(QString::fromUtf8("imageWHcombo"));
        imageWHcombo->setEnabled(false);
        imageWHcombo->setGeometry(QRect(250, 50, 150, 27));
        imageWHcombo->setEditable(false);
        imageUnit = new QLabel(Resize_tab);
        imageUnit->setObjectName(QString::fromUtf8("imageUnit"));
        imageUnit->setEnabled(false);
        imageUnit->setGeometry(QRect(250, 30, 31, 17));
        positionWidget = new ImagePositionWidget(Resize_tab);
        positionWidget->setObjectName(QString::fromUtf8("positionWidget"));
        positionWidget->setEnabled(false);
        positionWidget->setGeometry(QRect(420, 170, 120, 120));
        backgroundLabel = new QLabel(Resize_tab);
        backgroundLabel->setObjectName(QString::fromUtf8("backgroundLabel"));
        backgroundLabel->setEnabled(false);
        backgroundLabel->setGeometry(QRect(250, 150, 131, 16));
        backgroundColorComboBox = new BrushTypeComboBox(Resize_tab);
        backgroundColorComboBox->setObjectName(QString::fromUtf8("backgroundColorComboBox"));
        backgroundColorComboBox->setEnabled(false);
        backgroundColorComboBox->setGeometry(QRect(250, 170, 150, 27));
        positionLabel = new QLabel(Resize_tab);
        positionLabel->setObjectName(QString::fromUtf8("positionLabel"));
        positionLabel->setEnabled(false);
        positionLabel->setGeometry(QRect(420, 150, 131, 16));
        tabWidget->addTab(Resize_tab, QString());
        Adjust_tab = new QWidget();
        Adjust_tab->setObjectName(QString::fromUtf8("Adjust_tab"));
        brightnessSlider = new QSlider(Adjust_tab);
        brightnessSlider->setObjectName(QString::fromUtf8("brightnessSlider"));
        brightnessSlider->setGeometry(QRect(30, 40, 271, 19));
        brightnessSlider->setMinimum(-100);
        brightnessSlider->setMaximum(100);
        brightnessSlider->setSingleStep(1);
        brightnessSlider->setOrientation(Qt::Horizontal);
        brightnessSlider->setTickPosition(QSlider::TicksBelow);
        brightnessSlider->setTickInterval(10);
        contrastSlider = new QSlider(Adjust_tab);
        contrastSlider->setObjectName(QString::fromUtf8("contrastSlider"));
        contrastSlider->setGeometry(QRect(30, 90, 271, 19));
        contrastSlider->setMinimum(-100);
        contrastSlider->setMaximum(100);
        contrastSlider->setOrientation(Qt::Horizontal);
        contrastSlider->setTickPosition(QSlider::TicksBelow);
        contrastSlider->setTickInterval(10);
        saturationSlider = new QSlider(Adjust_tab);
        saturationSlider->setObjectName(QString::fromUtf8("saturationSlider"));
        saturationSlider->setGeometry(QRect(30, 140, 271, 19));
        saturationSlider->setMinimum(-100);
        saturationSlider->setMaximum(100);
        saturationSlider->setOrientation(Qt::Horizontal);
        saturationSlider->setTickPosition(QSlider::TicksBelow);
        saturationSlider->setTickInterval(10);
        gammaSlider = new QSlider(Adjust_tab);
        gammaSlider->setObjectName(QString::fromUtf8("gammaSlider"));
        gammaSlider->setGeometry(QRect(30, 190, 271, 19));
        gammaSlider->setMinimum(10);
        gammaSlider->setMaximum(300);
        gammaSlider->setSingleStep(10);
        gammaSlider->setValue(100);
        gammaSlider->setOrientation(Qt::Horizontal);
        gammaSlider->setTickPosition(QSlider::TicksBelow);
        gammaSlider->setTickInterval(10);
        brightnessChannel = new QComboBox(Adjust_tab);
        brightnessChannel->addItem(QString());
        brightnessChannel->addItem(QString());
        brightnessChannel->addItem(QString());
        brightnessChannel->addItem(QString());
        brightnessChannel->addItem(QString());
        brightnessChannel->addItem(QString());
        brightnessChannel->addItem(QString());
        brightnessChannel->setObjectName(QString::fromUtf8("brightnessChannel"));
        brightnessChannel->setGeometry(QRect(320, 40, 61, 21));
        contrastChannel = new QComboBox(Adjust_tab);
        contrastChannel->addItem(QString());
        contrastChannel->addItem(QString());
        contrastChannel->addItem(QString());
        contrastChannel->addItem(QString());
        contrastChannel->addItem(QString());
        contrastChannel->addItem(QString());
        contrastChannel->addItem(QString());
        contrastChannel->setObjectName(QString::fromUtf8("contrastChannel"));
        contrastChannel->setGeometry(QRect(320, 90, 61, 21));
        SaturationChannel = new QComboBox(Adjust_tab);
        SaturationChannel->addItem(QString());
        SaturationChannel->addItem(QString());
        SaturationChannel->addItem(QString());
        SaturationChannel->addItem(QString());
        SaturationChannel->addItem(QString());
        SaturationChannel->addItem(QString());
        SaturationChannel->addItem(QString());
        SaturationChannel->setObjectName(QString::fromUtf8("SaturationChannel"));
        SaturationChannel->setGeometry(QRect(320, 140, 61, 21));
        gammaChannel = new QComboBox(Adjust_tab);
        gammaChannel->addItem(QString());
        gammaChannel->addItem(QString());
        gammaChannel->addItem(QString());
        gammaChannel->addItem(QString());
        gammaChannel->addItem(QString());
        gammaChannel->addItem(QString());
        gammaChannel->addItem(QString());
        gammaChannel->setObjectName(QString::fromUtf8("gammaChannel"));
        gammaChannel->setGeometry(QRect(320, 190, 61, 21));
        label_3 = new QLabel(Adjust_tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 20, 141, 16));
        label_4 = new QLabel(Adjust_tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 70, 131, 16));
        label_6 = new QLabel(Adjust_tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 120, 131, 16));
        label_9 = new QLabel(Adjust_tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 170, 141, 16));
        label_10 = new QLabel(Adjust_tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 20, 91, 16));
        brightnessValue = new QLabel(Adjust_tab);
        brightnessValue->setObjectName(QString::fromUtf8("brightnessValue"));
        brightnessValue->setGeometry(QRect(260, 20, 71, 16));
        contrastValue = new QLabel(Adjust_tab);
        contrastValue->setObjectName(QString::fromUtf8("contrastValue"));
        contrastValue->setGeometry(QRect(260, 70, 81, 16));
        saturationValue = new QLabel(Adjust_tab);
        saturationValue->setObjectName(QString::fromUtf8("saturationValue"));
        saturationValue->setGeometry(QRect(260, 120, 81, 16));
        gammaValue = new QLabel(Adjust_tab);
        gammaValue->setObjectName(QString::fromUtf8("gammaValue"));
        gammaValue->setGeometry(QRect(260, 170, 31, 16));
        tabWidget->addTab(Adjust_tab, QString());
        Filter_tab = new QWidget();
        Filter_tab->setObjectName(QString::fromUtf8("Filter_tab"));
        label = new QLabel(Filter_tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 161, 17));
        listWidget_2 = new QListWidget(Filter_tab);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 40, 331, 231));
        label_2 = new QLabel(Filter_tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 10, 151, 17));
        listWidget_3 = new QListWidget(Filter_tab);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(400, 40, 331, 231));
        addFilterButton = new QPushButton(Filter_tab);
        addFilterButton->setObjectName(QString::fromUtf8("addFilterButton"));
        addFilterButton->setGeometry(QRect(350, 100, 41, 25));
        addFilterButton->setFocusPolicy(Qt::NoFocus);
        removeFilterButton = new QPushButton(Filter_tab);
        removeFilterButton->setObjectName(QString::fromUtf8("removeFilterButton"));
        removeFilterButton->setGeometry(QRect(350, 170, 41, 25));
        removeFilterButton->setFocusPolicy(Qt::NoFocus);
        tabWidget->addTab(Filter_tab, QString());
        Transform_tab = new QWidget();
        Transform_tab->setObjectName(QString::fromUtf8("Transform_tab"));
        groupBox = new QGroupBox(Transform_tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 191, 121));
        rotate90ccwRadioButton = new QRadioButton(groupBox);
        rotate90ccwRadioButton->setObjectName(QString::fromUtf8("rotate90ccwRadioButton"));
        rotate90ccwRadioButton->setEnabled(false);
        rotate90ccwRadioButton->setGeometry(QRect(10, 60, 151, 17));
        rotate180RadioButton = new QRadioButton(groupBox);
        rotate180RadioButton->setObjectName(QString::fromUtf8("rotate180RadioButton"));
        rotate180RadioButton->setEnabled(false);
        rotate180RadioButton->setGeometry(QRect(10, 80, 131, 17));
        rotateCheckBox = new QCheckBox(groupBox);
        rotateCheckBox->setObjectName(QString::fromUtf8("rotateCheckBox"));
        rotateCheckBox->setGeometry(QRect(0, 0, 151, 17));
        rotate90radioButton = new QRadioButton(groupBox);
        rotate90radioButton->setObjectName(QString::fromUtf8("rotate90radioButton"));
        rotate90radioButton->setEnabled(false);
        rotate90radioButton->setGeometry(QRect(10, 40, 141, 17));
        rotate90radioButton->setChecked(true);
        groupBox_2 = new QGroupBox(Transform_tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 140, 191, 91));
        flipVerticalRadioButton = new QRadioButton(groupBox_2);
        flipVerticalRadioButton->setObjectName(QString::fromUtf8("flipVerticalRadioButton"));
        flipVerticalRadioButton->setEnabled(false);
        flipVerticalRadioButton->setGeometry(QRect(10, 40, 141, 17));
        flipVerticalRadioButton->setChecked(true);
        flipHorizontalRadioButton = new QRadioButton(groupBox_2);
        flipHorizontalRadioButton->setObjectName(QString::fromUtf8("flipHorizontalRadioButton"));
        flipHorizontalRadioButton->setEnabled(false);
        flipHorizontalRadioButton->setGeometry(QRect(10, 60, 151, 17));
        flipCheckBox = new QCheckBox(groupBox_2);
        flipCheckBox->setObjectName(QString::fromUtf8("flipCheckBox"));
        flipCheckBox->setGeometry(QRect(0, 0, 131, 17));
        tabWidget->addTab(Transform_tab, QString());
        Summary_tab = new QWidget();
        Summary_tab->setObjectName(QString::fromUtf8("Summary_tab"));
        plainTextEdit = new QPlainTextEdit(Summary_tab);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 10, 741, 271));
        plainTextEdit->setReadOnly(true);
        tabWidget->addTab(Summary_tab, QString());

        retranslateUi(batchDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), batchDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), batchDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(batchDialog);
    } // setupUi

    void retranslateUi(QDialog *batchDialog)
    {
        batchDialog->setWindowTitle(QCoreApplication::translate("batchDialog", "Automate/Batch", nullptr));
        label_5->setText(QCoreApplication::translate("batchDialog", "Source Format", nullptr));
        label_7->setText(QCoreApplication::translate("batchDialog", "Output Folder", nullptr));
        label_8->setText(QCoreApplication::translate("batchDialog", "Output Format", nullptr));
        addFilesButton->setText(QCoreApplication::translate("batchDialog", "Add Files", nullptr));
        outFolderPushButton->setText(QCoreApplication::translate("batchDialog", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Files_tab), QCoreApplication::translate("batchDialog", "Files", nullptr));
        imageSizeCheckBox->setText(QCoreApplication::translate("batchDialog", "Image size", nullptr));
        imageHeight->setText(QCoreApplication::translate("batchDialog", "Height:", nullptr));
        imageWidth->setText(QCoreApplication::translate("batchDialog", "Width:", nullptr));
        aspectRatioCheckBox->setText(QCoreApplication::translate("batchDialog", "Preserve aspect ratio", nullptr));
        canvasWidth->setText(QCoreApplication::translate("batchDialog", "Width:", nullptr));
        canvasHeight->setText(QCoreApplication::translate("batchDialog", "Height:", nullptr));
        canvasSizeCheckBox->setText(QCoreApplication::translate("batchDialog", "Canvas size", nullptr));
        imageWHcombo->setItemText(0, QCoreApplication::translate("batchDialog", "Pixels", nullptr));
        imageWHcombo->setItemText(1, QCoreApplication::translate("batchDialog", "%", nullptr));

        imageUnit->setText(QCoreApplication::translate("batchDialog", "Unit:", nullptr));
        backgroundLabel->setText(QCoreApplication::translate("batchDialog", "Background:", nullptr));
        positionLabel->setText(QCoreApplication::translate("batchDialog", "Position:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Resize_tab), QCoreApplication::translate("batchDialog", "Image Size", nullptr));
        brightnessChannel->setItemText(0, QCoreApplication::translate("batchDialog", "<Alls>", nullptr));
        brightnessChannel->setItemText(1, QCoreApplication::translate("batchDialog", "Red", nullptr));
        brightnessChannel->setItemText(2, QCoreApplication::translate("batchDialog", "Green", nullptr));
        brightnessChannel->setItemText(3, QCoreApplication::translate("batchDialog", "Blue", nullptr));
        brightnessChannel->setItemText(4, QCoreApplication::translate("batchDialog", "Cyan", nullptr));
        brightnessChannel->setItemText(5, QCoreApplication::translate("batchDialog", "Magenta", nullptr));
        brightnessChannel->setItemText(6, QCoreApplication::translate("batchDialog", "Yellow", nullptr));

        contrastChannel->setItemText(0, QCoreApplication::translate("batchDialog", "<Alls>", nullptr));
        contrastChannel->setItemText(1, QCoreApplication::translate("batchDialog", "Red", nullptr));
        contrastChannel->setItemText(2, QCoreApplication::translate("batchDialog", "Green", nullptr));
        contrastChannel->setItemText(3, QCoreApplication::translate("batchDialog", "Blue", nullptr));
        contrastChannel->setItemText(4, QCoreApplication::translate("batchDialog", "Cyan", nullptr));
        contrastChannel->setItemText(5, QCoreApplication::translate("batchDialog", "Magenta", nullptr));
        contrastChannel->setItemText(6, QCoreApplication::translate("batchDialog", "Yellow", nullptr));

        SaturationChannel->setItemText(0, QCoreApplication::translate("batchDialog", "<Alls>", nullptr));
        SaturationChannel->setItemText(1, QCoreApplication::translate("batchDialog", "Red", nullptr));
        SaturationChannel->setItemText(2, QCoreApplication::translate("batchDialog", "Green", nullptr));
        SaturationChannel->setItemText(3, QCoreApplication::translate("batchDialog", "Blue", nullptr));
        SaturationChannel->setItemText(4, QCoreApplication::translate("batchDialog", "Cyan", nullptr));
        SaturationChannel->setItemText(5, QCoreApplication::translate("batchDialog", "Magenta", nullptr));
        SaturationChannel->setItemText(6, QCoreApplication::translate("batchDialog", "Yellow", nullptr));

        gammaChannel->setItemText(0, QCoreApplication::translate("batchDialog", "<Alls>", nullptr));
        gammaChannel->setItemText(1, QCoreApplication::translate("batchDialog", "Red", nullptr));
        gammaChannel->setItemText(2, QCoreApplication::translate("batchDialog", "Green", nullptr));
        gammaChannel->setItemText(3, QCoreApplication::translate("batchDialog", "Blue", nullptr));
        gammaChannel->setItemText(4, QCoreApplication::translate("batchDialog", "Cyan", nullptr));
        gammaChannel->setItemText(5, QCoreApplication::translate("batchDialog", "Magenta", nullptr));
        gammaChannel->setItemText(6, QCoreApplication::translate("batchDialog", "Yellow", nullptr));

        label_3->setText(QCoreApplication::translate("batchDialog", "Brightness", nullptr));
        label_4->setText(QCoreApplication::translate("batchDialog", "Contrast", nullptr));
        label_6->setText(QCoreApplication::translate("batchDialog", "Saturation", nullptr));
        label_9->setText(QCoreApplication::translate("batchDialog", "Gamma correct", nullptr));
        label_10->setText(QCoreApplication::translate("batchDialog", "Channel", nullptr));
        brightnessValue->setText(QCoreApplication::translate("batchDialog", "0%", nullptr));
        contrastValue->setText(QCoreApplication::translate("batchDialog", "0%", nullptr));
        saturationValue->setText(QCoreApplication::translate("batchDialog", "0%", nullptr));
        gammaValue->setText(QCoreApplication::translate("batchDialog", "1.00", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Adjust_tab), QCoreApplication::translate("batchDialog", "Adjust Levels", nullptr));
        label->setText(QCoreApplication::translate("batchDialog", "Available", nullptr));
        label_2->setText(QCoreApplication::translate("batchDialog", "Enabled", nullptr));
        addFilterButton->setText(QCoreApplication::translate("batchDialog", ">", nullptr));
        removeFilterButton->setText(QCoreApplication::translate("batchDialog", "<", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Filter_tab), QCoreApplication::translate("batchDialog", "Filters", nullptr));
        groupBox->setTitle(QString());
        rotate90ccwRadioButton->setText(QCoreApplication::translate("batchDialog", "Rotate 90\302\260 CCW", nullptr));
        rotate180RadioButton->setText(QCoreApplication::translate("batchDialog", "Rotate 180\302\260", nullptr));
        rotateCheckBox->setText(QCoreApplication::translate("batchDialog", "Rotate", nullptr));
        rotate90radioButton->setText(QCoreApplication::translate("batchDialog", "Rotate 90\302\260 CW", nullptr));
        groupBox_2->setTitle(QString());
        flipVerticalRadioButton->setText(QCoreApplication::translate("batchDialog", "Flip vertical", nullptr));
        flipHorizontalRadioButton->setText(QCoreApplication::translate("batchDialog", "Flip horizontal", nullptr));
        flipCheckBox->setText(QCoreApplication::translate("batchDialog", "Flip", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Transform_tab), QCoreApplication::translate("batchDialog", "Transform", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Summary_tab), QCoreApplication::translate("batchDialog", "Summary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class batchDialog: public Ui_batchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHDIALOG_H
