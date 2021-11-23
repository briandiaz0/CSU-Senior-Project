/********************************************************************************
** Form generated from reading UI file 'imagepositionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEPOSITIONWIDGET_H
#define UI_IMAGEPOSITIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImagePositionWidget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QWidget *ImagePositionWidget)
    {
        if (ImagePositionWidget->objectName().isEmpty())
            ImagePositionWidget->setObjectName(QString::fromUtf8("ImagePositionWidget"));
        ImagePositionWidget->resize(114, 114);
        pushButton = new QPushButton(ImagePositionWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 32, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/assets/icons/toolbar2/grayscale.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(28, 28));
        pushButton->setCheckable(true);
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(ImagePositionWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 0, 32, 32));
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(28, 28));
        pushButton_2->setCheckable(true);
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(ImagePositionWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 0, 32, 32));
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(28, 28));
        pushButton_3->setCheckable(true);
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(ImagePositionWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 40, 32, 32));
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(28, 28));
        pushButton_4->setCheckable(true);
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(ImagePositionWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 40, 32, 32));
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(28, 28));
        pushButton_5->setCheckable(true);
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(ImagePositionWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(80, 40, 32, 32));
        pushButton_6->setIcon(icon);
        pushButton_6->setIconSize(QSize(28, 28));
        pushButton_6->setCheckable(true);
        pushButton_6->setFlat(true);
        pushButton_7 = new QPushButton(ImagePositionWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 80, 32, 32));
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(28, 28));
        pushButton_7->setCheckable(true);
        pushButton_7->setFlat(true);
        pushButton_8 = new QPushButton(ImagePositionWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(40, 80, 32, 32));
        pushButton_8->setIcon(icon);
        pushButton_8->setIconSize(QSize(28, 28));
        pushButton_8->setCheckable(true);
        pushButton_8->setFlat(true);
        pushButton_9 = new QPushButton(ImagePositionWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(80, 80, 32, 32));
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(28, 28));
        pushButton_9->setCheckable(true);
        pushButton_9->setFlat(true);

        retranslateUi(ImagePositionWidget);

        QMetaObject::connectSlotsByName(ImagePositionWidget);
    } // setupUi

    void retranslateUi(QWidget *ImagePositionWidget)
    {
        ImagePositionWidget->setWindowTitle(QCoreApplication::translate("ImagePositionWidget", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImagePositionWidget: public Ui_ImagePositionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEPOSITIONWIDGET_H
