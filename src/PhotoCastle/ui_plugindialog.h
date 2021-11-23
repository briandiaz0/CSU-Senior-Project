/********************************************************************************
** Form generated from reading UI file 'plugindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINDIALOG_H
#define UI_PLUGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginDialog
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;

    void setupUi(QDialog *PluginDialog)
    {
        if (PluginDialog->objectName().isEmpty())
            PluginDialog->setObjectName(QString::fromUtf8("PluginDialog"));
        PluginDialog->setWindowModality(Qt::ApplicationModal);
        PluginDialog->resize(383, 380);
        buttonBox = new QDialogButtonBox(PluginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 340, 361, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listWidget = new QListWidget(PluginDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 361, 321));

        retranslateUi(PluginDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PluginDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PluginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PluginDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginDialog)
    {
        PluginDialog->setWindowTitle(QCoreApplication::translate("PluginDialog", "Plugin Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginDialog: public Ui_PluginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINDIALOG_H
