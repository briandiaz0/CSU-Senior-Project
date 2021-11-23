/********************************************************************************
** Form generated from reading UI file 'checkupdatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKUPDATEDIALOG_H
#define UI_CHECKUPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_checkupdateDialog
{
public:
    QPushButton *closeButton;
    QLabel *label;
    QPushButton *downloadButton;

    void setupUi(QDialog *checkupdateDialog)
    {
        if (checkupdateDialog->objectName().isEmpty())
            checkupdateDialog->setObjectName(QString::fromUtf8("checkupdateDialog"));
        checkupdateDialog->setWindowModality(Qt::ApplicationModal);
        checkupdateDialog->resize(400, 154);
        closeButton = new QPushButton(checkupdateDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(300, 120, 89, 25));
        label = new QLabel(checkupdateDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 181, 17));
        downloadButton = new QPushButton(checkupdateDialog);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        downloadButton->setGeometry(QRect(30, 40, 89, 25));

        retranslateUi(checkupdateDialog);

        QMetaObject::connectSlotsByName(checkupdateDialog);
    } // setupUi

    void retranslateUi(QDialog *checkupdateDialog)
    {
        checkupdateDialog->setWindowTitle(QCoreApplication::translate("checkupdateDialog", "Updates", nullptr));
        closeButton->setText(QCoreApplication::translate("checkupdateDialog", "Close", nullptr));
        label->setText(QCoreApplication::translate("checkupdateDialog", "Checking for updates...", nullptr));
        downloadButton->setText(QCoreApplication::translate("checkupdateDialog", "Download", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checkupdateDialog: public Ui_checkupdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKUPDATEDIALOG_H
