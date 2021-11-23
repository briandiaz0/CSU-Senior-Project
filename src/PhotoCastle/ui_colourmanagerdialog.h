/********************************************************************************
** Form generated from reading UI file 'colourmanagerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOURMANAGERDIALOG_H
#define UI_COLOURMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_colourManagerDialog
{
public:
    QListWidget *listWidget;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *pushButton;

    void setupUi(QDialog *colourManagerDialog)
    {
        if (colourManagerDialog->objectName().isEmpty())
            colourManagerDialog->setObjectName(QString::fromUtf8("colourManagerDialog"));
        colourManagerDialog->setWindowModality(Qt::ApplicationModal);
        colourManagerDialog->resize(761, 382);
        colourManagerDialog->setStyleSheet(QString::fromUtf8(""));
        listWidget = new QListWidget(colourManagerDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 741, 291));
        addButton = new QPushButton(colourManagerDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(10, 10, 51, 25));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        addButton->setIcon(icon);
        removeButton = new QPushButton(colourManagerDialog);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(70, 10, 51, 25));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("remove");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        removeButton->setIcon(icon1);
        pushButton = new QPushButton(colourManagerDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(660, 350, 89, 25));

        retranslateUi(colourManagerDialog);

        QMetaObject::connectSlotsByName(colourManagerDialog);
    } // setupUi

    void retranslateUi(QDialog *colourManagerDialog)
    {
        colourManagerDialog->setWindowTitle(QCoreApplication::translate("colourManagerDialog", "Colour palettes", nullptr));
        addButton->setText(QString());
        removeButton->setText(QString());
        pushButton->setText(QCoreApplication::translate("colourManagerDialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class colourManagerDialog: public Ui_colourManagerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOURMANAGERDIALOG_H
