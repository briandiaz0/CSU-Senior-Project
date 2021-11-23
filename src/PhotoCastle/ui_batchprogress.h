/********************************************************************************
** Form generated from reading UI file 'batchprogress.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHPROGRESS_H
#define UI_BATCHPROGRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BatchProgress
{
public:
    QProgressBar *progressBar;
    QPushButton *hideButton;

    void setupUi(QDialog *BatchProgress)
    {
        if (BatchProgress->objectName().isEmpty())
            BatchProgress->setObjectName(QString::fromUtf8("BatchProgress"));
        BatchProgress->resize(290, 46);
        progressBar = new QProgressBar(BatchProgress);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 12, 211, 23));
        progressBar->setValue(0);
        hideButton = new QPushButton(BatchProgress);
        hideButton->setObjectName(QString::fromUtf8("hideButton"));
        hideButton->setGeometry(QRect(230, 10, 51, 25));

        retranslateUi(BatchProgress);

        QMetaObject::connectSlotsByName(BatchProgress);
    } // setupUi

    void retranslateUi(QDialog *BatchProgress)
    {
        BatchProgress->setWindowTitle(QCoreApplication::translate("BatchProgress", "Batch progress", nullptr));
        hideButton->setText(QCoreApplication::translate("BatchProgress", "Hide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BatchProgress: public Ui_BatchProgress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHPROGRESS_H
