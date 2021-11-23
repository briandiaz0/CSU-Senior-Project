/********************************************************************************
** Form generated from reading UI file 'imagepropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEPROPERTIESDIALOG_H
#define UI_IMAGEPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_imagePropertiesDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *imageNameLabel;
    QLabel *folderLabel;
    QLabel *colorCountLabel;
    QLabel *sizeLabel;
    QLabel *fileSizeLabel;
    QLabel *dateLabel;
    QLabel *memorySizeLabel;
    QLabel *totalSizeLabel;
    QLabel *label_9;
    QLabel *fileTypeLabel;

    void setupUi(QDialog *imagePropertiesDialog)
    {
        if (imagePropertiesDialog->objectName().isEmpty())
            imagePropertiesDialog->setObjectName(QString::fromUtf8("imagePropertiesDialog"));
        imagePropertiesDialog->setWindowModality(Qt::ApplicationModal);
        imagePropertiesDialog->resize(525, 274);
        buttonBox = new QDialogButtonBox(imagePropertiesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(170, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        label = new QLabel(imagePropertiesDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 91, 16));
        label->setScaledContents(false);
        label->setWordWrap(false);
        label_2 = new QLabel(imagePropertiesDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 111, 16));
        label_3 = new QLabel(imagePropertiesDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 47, 13));
        label_4 = new QLabel(imagePropertiesDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 70, 81, 16));
        label_5 = new QLabel(imagePropertiesDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 110, 61, 16));
        label_6 = new QLabel(imagePropertiesDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 130, 41, 16));
        label_7 = new QLabel(imagePropertiesDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 170, 101, 16));
        label_8 = new QLabel(imagePropertiesDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 190, 201, 16));
        imageNameLabel = new QLabel(imagePropertiesDialog);
        imageNameLabel->setObjectName(QString::fromUtf8("imageNameLabel"));
        imageNameLabel->setGeometry(QRect(150, 10, 501, 16));
        folderLabel = new QLabel(imagePropertiesDialog);
        folderLabel->setObjectName(QString::fromUtf8("folderLabel"));
        folderLabel->setGeometry(QRect(150, 30, 551, 16));
        colorCountLabel = new QLabel(imagePropertiesDialog);
        colorCountLabel->setObjectName(QString::fromUtf8("colorCountLabel"));
        colorCountLabel->setGeometry(QRect(150, 70, 631, 16));
        sizeLabel = new QLabel(imagePropertiesDialog);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));
        sizeLabel->setGeometry(QRect(150, 50, 571, 16));
        fileSizeLabel = new QLabel(imagePropertiesDialog);
        fileSizeLabel->setObjectName(QString::fromUtf8("fileSizeLabel"));
        fileSizeLabel->setGeometry(QRect(150, 110, 291, 16));
        dateLabel = new QLabel(imagePropertiesDialog);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(150, 130, 291, 16));
        memorySizeLabel = new QLabel(imagePropertiesDialog);
        memorySizeLabel->setObjectName(QString::fromUtf8("memorySizeLabel"));
        memorySizeLabel->setGeometry(QRect(150, 170, 231, 16));
        totalSizeLabel = new QLabel(imagePropertiesDialog);
        totalSizeLabel->setObjectName(QString::fromUtf8("totalSizeLabel"));
        totalSizeLabel->setGeometry(QRect(150, 190, 261, 16));
        label_9 = new QLabel(imagePropertiesDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 150, 47, 13));
        fileTypeLabel = new QLabel(imagePropertiesDialog);
        fileTypeLabel->setObjectName(QString::fromUtf8("fileTypeLabel"));
        fileTypeLabel->setGeometry(QRect(150, 150, 47, 13));

        retranslateUi(imagePropertiesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), imagePropertiesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), imagePropertiesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(imagePropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *imagePropertiesDialog)
    {
        imagePropertiesDialog->setWindowTitle(QCoreApplication::translate("imagePropertiesDialog", "Image Properties", nullptr));
        label->setText(QCoreApplication::translate("imagePropertiesDialog", "Image name:", nullptr));
        label_2->setText(QCoreApplication::translate("imagePropertiesDialog", "Folder:", nullptr));
        label_3->setText(QCoreApplication::translate("imagePropertiesDialog", "Size:", nullptr));
        label_4->setText(QCoreApplication::translate("imagePropertiesDialog", "Color count:", nullptr));
        label_5->setText(QCoreApplication::translate("imagePropertiesDialog", "File size:", nullptr));
        label_6->setText(QCoreApplication::translate("imagePropertiesDialog", "Date:", nullptr));
        label_7->setText(QCoreApplication::translate("imagePropertiesDialog", "Memory size:", nullptr));
        label_8->setText(QCoreApplication::translate("imagePropertiesDialog", "Undo Cache Size", nullptr));
        imageNameLabel->setText(QCoreApplication::translate("imagePropertiesDialog", "TextLabel", nullptr));
        folderLabel->setText(QCoreApplication::translate("imagePropertiesDialog", "TextLabel", nullptr));
        colorCountLabel->setText(QCoreApplication::translate("imagePropertiesDialog", "TextLabel", nullptr));
        sizeLabel->setText(QCoreApplication::translate("imagePropertiesDialog", "TextLabel", nullptr));
        fileSizeLabel->setText(QCoreApplication::translate("imagePropertiesDialog", "TextLabel", nullptr));
        dateLabel->setText(QCoreApplication::translate("imagePropertiesDialog", "TextLabel", nullptr));
        memorySizeLabel->setText(QCoreApplication::translate("imagePropertiesDialog", "TextLabel", nullptr));
        totalSizeLabel->setText(QCoreApplication::translate("imagePropertiesDialog", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("imagePropertiesDialog", "File type", nullptr));
        fileTypeLabel->setText(QCoreApplication::translate("imagePropertiesDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class imagePropertiesDialog: public Ui_imagePropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEPROPERTIESDIALOG_H
