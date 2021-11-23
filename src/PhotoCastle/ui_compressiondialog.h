/********************************************************************************
** Form generated from reading UI file 'compressiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPRESSIONDIALOG_H
#define UI_COMPRESSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_CompressionDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *valueLabel;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;

    void setupUi(QDialog *CompressionDialog)
    {
        if (CompressionDialog->objectName().isEmpty())
            CompressionDialog->setObjectName(QString::fromUtf8("CompressionDialog"));
        CompressionDialog->setWindowModality(Qt::ApplicationModal);
        CompressionDialog->resize(391, 164);
        buttonBox = new QDialogButtonBox(CompressionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 130, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(CompressionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 91, 16));
        valueLabel = new QLabel(CompressionDialog);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        valueLabel->setGeometry(QRect(110, 10, 41, 16));
        horizontalSlider = new QSlider(CompressionDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 30, 371, 20));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(90);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(10);
        label_3 = new QLabel(CompressionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 121, 21));
        label_4 = new QLabel(CompressionDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 50, 121, 20));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(CompressionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 10, 16, 17));

        retranslateUi(CompressionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CompressionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CompressionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CompressionDialog);
    } // setupUi

    void retranslateUi(QDialog *CompressionDialog)
    {
        CompressionDialog->setWindowTitle(QCoreApplication::translate("CompressionDialog", "JPEG", nullptr));
        label->setText(QCoreApplication::translate("CompressionDialog", "Compression:", nullptr));
        valueLabel->setText(QCoreApplication::translate("CompressionDialog", "90", nullptr));
        label_3->setText(QCoreApplication::translate("CompressionDialog", "Low quality", nullptr));
        label_4->setText(QCoreApplication::translate("CompressionDialog", "Best quality", nullptr));
        label_2->setText(QCoreApplication::translate("CompressionDialog", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompressionDialog: public Ui_CompressionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPRESSIONDIALOG_H
