/********************************************************************************
** Form generated from reading UI file 'pointersettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTERSETTINGSWIDGET_H
#define UI_POINTERSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PointerSettingsWidget
{
public:
    QToolButton *square_sel;
    QCheckBox *checkBoxStroke;
    QCheckBox *checkBoxFill;
    QToolButton *circle_sel;

    void setupUi(QWidget *PointerSettingsWidget)
    {
        if (PointerSettingsWidget->objectName().isEmpty())
            PointerSettingsWidget->setObjectName(QString::fromUtf8("PointerSettingsWidget"));
        PointerSettingsWidget->resize(134, 300);
        square_sel = new QToolButton(PointerSettingsWidget);
        square_sel->setObjectName(QString::fromUtf8("square_sel"));
        square_sel->setGeometry(QRect(10, 10, 32, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/assets/icons/selections/square_sel.png"), QSize(), QIcon::Normal, QIcon::Off);
        square_sel->setIcon(icon);
        square_sel->setIconSize(QSize(24, 24));
        square_sel->setCheckable(true);
        square_sel->setChecked(true);
        checkBoxStroke = new QCheckBox(PointerSettingsWidget);
        checkBoxStroke->setObjectName(QString::fromUtf8("checkBoxStroke"));
        checkBoxStroke->setGeometry(QRect(10, 80, 97, 22));
        checkBoxFill = new QCheckBox(PointerSettingsWidget);
        checkBoxFill->setObjectName(QString::fromUtf8("checkBoxFill"));
        checkBoxFill->setGeometry(QRect(10, 110, 97, 22));
        circle_sel = new QToolButton(PointerSettingsWidget);
        circle_sel->setObjectName(QString::fromUtf8("circle_sel"));
        circle_sel->setGeometry(QRect(50, 10, 32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/assets/icons/selections/circle_sel.png"), QSize(), QIcon::Normal, QIcon::Off);
        circle_sel->setIcon(icon1);
        circle_sel->setCheckable(true);

        retranslateUi(PointerSettingsWidget);

        QMetaObject::connectSlotsByName(PointerSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *PointerSettingsWidget)
    {
        PointerSettingsWidget->setWindowTitle(QCoreApplication::translate("PointerSettingsWidget", "Form", nullptr));
        square_sel->setText(QCoreApplication::translate("PointerSettingsWidget", "...", nullptr));
        checkBoxStroke->setText(QCoreApplication::translate("PointerSettingsWidget", "Stroke", nullptr));
        checkBoxFill->setText(QCoreApplication::translate("PointerSettingsWidget", "Fill", nullptr));
        circle_sel->setText(QCoreApplication::translate("PointerSettingsWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PointerSettingsWidget: public Ui_PointerSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTERSETTINGSWIDGET_H
