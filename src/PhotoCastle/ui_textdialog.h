/********************************************************************************
** Form generated from reading UI file 'textdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTDIALOG_H
#define UI_TEXTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QFontComboBox *fontComboBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *fontSizeSpinner;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_4;
    QFrame *frame;
    QLabel *textPreview;
    QCheckBox *checkBoxBold;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxStrike;
    QCheckBox *checkBoxUnderline;
    QLabel *label_5;
    QLabel *textColour;
    QCheckBox *checkBoxAntialias;
    QLabel *emptyWarning;
    QPushButton *alignleftButton;
    QPushButton *aligncenterButton;
    QPushButton *alignRightButton;
    QDialogButtonBox *buttonBoxtextDialog;

    void setupUi(QDialog *textDialog)
    {
        if (textDialog->objectName().isEmpty())
            textDialog->setObjectName(QString::fromUtf8("textDialog"));
        textDialog->setWindowModality(Qt::ApplicationModal);
        textDialog->resize(769, 433);
        tabWidget = new QTabWidget(textDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 10, 751, 371));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        fontComboBox = new QFontComboBox(tab);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setGeometry(QRect(70, 30, 233, 27));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(70, 10, 67, 17));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 10, 67, 17));
        fontSizeSpinner = new QSpinBox(tab);
        fontSizeSpinner->setObjectName(QString::fromUtf8("fontSizeSpinner"));
        fontSizeSpinner->setGeometry(QRect(310, 30, 81, 27));
        fontSizeSpinner->setMinimum(1);
        fontSizeSpinner->setValue(12);
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 67, 17));
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 100, 481, 221));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(500, 80, 67, 17));
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(500, 100, 231, 221));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textPreview = new QLabel(frame);
        textPreview->setObjectName(QString::fromUtf8("textPreview"));
        textPreview->setGeometry(QRect(6, -1, 221, 221));
        textPreview->setAlignment(Qt::AlignCenter);
        checkBoxBold = new QCheckBox(tab);
        checkBoxBold->setObjectName(QString::fromUtf8("checkBoxBold"));
        checkBoxBold->setGeometry(QRect(500, 10, 97, 22));
        checkBoxItalic = new QCheckBox(tab);
        checkBoxItalic->setObjectName(QString::fromUtf8("checkBoxItalic"));
        checkBoxItalic->setGeometry(QRect(500, 30, 97, 22));
        checkBoxStrike = new QCheckBox(tab);
        checkBoxStrike->setObjectName(QString::fromUtf8("checkBoxStrike"));
        checkBoxStrike->setGeometry(QRect(500, 50, 97, 22));
        checkBoxUnderline = new QCheckBox(tab);
        checkBoxUnderline->setObjectName(QString::fromUtf8("checkBoxUnderline"));
        checkBoxUnderline->setGeometry(QRect(620, 10, 97, 22));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 67, 17));
        textColour = new QLabel(tab);
        textColour->setObjectName(QString::fromUtf8("textColour"));
        textColour->setGeometry(QRect(10, 30, 50, 27));
        textColour->setAutoFillBackground(false);
        textColour->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(120,120,120)"));
        textColour->setFrameShape(QFrame::NoFrame);
        checkBoxAntialias = new QCheckBox(tab);
        checkBoxAntialias->setObjectName(QString::fromUtf8("checkBoxAntialias"));
        checkBoxAntialias->setGeometry(QRect(620, 30, 96, 22));
        emptyWarning = new QLabel(tab);
        emptyWarning->setObjectName(QString::fromUtf8("emptyWarning"));
        emptyWarning->setGeometry(QRect(10, 320, 201, 17));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setKerning(true);
        emptyWarning->setFont(font);
        alignleftButton = new QPushButton(tab);
        alignleftButton->setObjectName(QString::fromUtf8("alignleftButton"));
        alignleftButton->setGeometry(QRect(400, 30, 24, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/assets/icons/aligntext_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignleftButton->setIcon(icon);
        alignleftButton->setCheckable(true);
        alignleftButton->setFlat(true);
        aligncenterButton = new QPushButton(tab);
        aligncenterButton->setObjectName(QString::fromUtf8("aligncenterButton"));
        aligncenterButton->setGeometry(QRect(430, 30, 24, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/assets/icons/aligntext_center.png"), QSize(), QIcon::Normal, QIcon::Off);
        aligncenterButton->setIcon(icon1);
        aligncenterButton->setCheckable(true);
        aligncenterButton->setFlat(true);
        alignRightButton = new QPushButton(tab);
        alignRightButton->setObjectName(QString::fromUtf8("alignRightButton"));
        alignRightButton->setGeometry(QRect(460, 30, 24, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/assets/icons/aligntext_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignRightButton->setIcon(icon2);
        alignRightButton->setCheckable(true);
        alignRightButton->setFlat(true);
        tabWidget->addTab(tab, QString());
        buttonBoxtextDialog = new QDialogButtonBox(textDialog);
        buttonBoxtextDialog->setObjectName(QString::fromUtf8("buttonBoxtextDialog"));
        buttonBoxtextDialog->setGeometry(QRect(580, 390, 176, 27));
        buttonBoxtextDialog->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(textDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(textDialog);
    } // setupUi

    void retranslateUi(QDialog *textDialog)
    {
        textDialog->setWindowTitle(QCoreApplication::translate("textDialog", "Text", nullptr));
        label->setText(QCoreApplication::translate("textDialog", "Font", nullptr));
        label_2->setText(QCoreApplication::translate("textDialog", "Size", nullptr));
        label_3->setText(QCoreApplication::translate("textDialog", "Text Input", nullptr));
        label_4->setText(QCoreApplication::translate("textDialog", "Preview", nullptr));
        textPreview->setText(QCoreApplication::translate("textDialog", "AbYz", nullptr));
        checkBoxBold->setText(QCoreApplication::translate("textDialog", "Bold", nullptr));
        checkBoxItalic->setText(QCoreApplication::translate("textDialog", "Italic", nullptr));
        checkBoxStrike->setText(QCoreApplication::translate("textDialog", "Strike out", nullptr));
        checkBoxUnderline->setText(QCoreApplication::translate("textDialog", "Underline", nullptr));
        label_5->setText(QCoreApplication::translate("textDialog", "Colour", nullptr));
        textColour->setText(QString());
        checkBoxAntialias->setText(QCoreApplication::translate("textDialog", "Antialias", nullptr));
        emptyWarning->setText(QCoreApplication::translate("textDialog", "Enter some text to continue", nullptr));
        alignleftButton->setText(QString());
        aligncenterButton->setText(QString());
        alignRightButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("textDialog", "&Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class textDialog: public Ui_textDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTDIALOG_H
