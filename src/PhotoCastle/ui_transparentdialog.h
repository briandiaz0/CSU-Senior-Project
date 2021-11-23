/********************************************************************************
** Form generated from reading UI file 'transparentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPARENTDIALOG_H
#define UI_TRANSPARENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_TransparentDialog
{
public:
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *toleranceValue;
    QLabel *color;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *TransparentDialog)
    {
        if (TransparentDialog->objectName().isEmpty())
            TransparentDialog->setObjectName(QString::fromUtf8("TransparentDialog"));
        TransparentDialog->setWindowModality(Qt::WindowModal);
        TransparentDialog->resize(398, 167);
        horizontalSlider = new QSlider(TransparentDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(19, 98, 361, 19));
        horizontalSlider->setFocusPolicy(Qt::NoFocus);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(5);
        label = new QLabel(TransparentDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 71, 16));
        toleranceValue = new QLabel(TransparentDialog);
        toleranceValue->setObjectName(QString::fromUtf8("toleranceValue"));
        toleranceValue->setGeometry(QRect(100, 70, 31, 16));
        color = new QLabel(TransparentDialog);
        color->setObjectName(QString::fromUtf8("color"));
        color->setGeometry(QRect(20, 40, 50, 27));
        color->setAutoFillBackground(false);
        color->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(120,120,120)"));
        label_3 = new QLabel(TransparentDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 20, 47, 13));
        pushButton = new QPushButton(TransparentDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 130, 81, 23));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new QPushButton(TransparentDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 130, 75, 23));
        pushButton_3 = new QPushButton(TransparentDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 130, 75, 23));

        retranslateUi(TransparentDialog);

        QMetaObject::connectSlotsByName(TransparentDialog);
    } // setupUi

    void retranslateUi(QDialog *TransparentDialog)
    {
        TransparentDialog->setWindowTitle(QCoreApplication::translate("TransparentDialog", "Transparent colour", nullptr));
        label->setText(QCoreApplication::translate("TransparentDialog", "Tolerance:", nullptr));
        toleranceValue->setText(QCoreApplication::translate("TransparentDialog", "0", nullptr));
        color->setText(QString());
        label_3->setText(QCoreApplication::translate("TransparentDialog", "Color:", nullptr));
        pushButton->setText(QCoreApplication::translate("TransparentDialog", "Preview", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TransparentDialog", "OK", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TransparentDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransparentDialog: public Ui_TransparentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSPARENTDIALOG_H
