/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutDialog
{
public:
    QPushButton *closeButton;
    QLabel *appName;
    QLabel *appVersion;
    QLabel *appDescription;
    QLabel *appUrl;
    QLabel *appLogo;
    QPushButton *creditsButton;
    QTabWidget *creditsWidget;
    QWidget *d_tab;
    QTextEdit *devTextArea;
    QWidget *g_tab;
    QTextEdit *graphicsTextArea;
    QWidget *t_tab;
    QTextEdit *translateTextArea;
    QWidget *c_tab;
    QTextEdit *contribTextArea;

    void setupUi(QDialog *aboutDialog)
    {
        if (aboutDialog->objectName().isEmpty())
            aboutDialog->setObjectName(QString::fromUtf8("aboutDialog"));
        aboutDialog->setWindowModality(Qt::ApplicationModal);
        aboutDialog->setEnabled(true);
        aboutDialog->resize(491, 409);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        aboutDialog->setFont(font);
        closeButton = new QPushButton(aboutDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(370, 370, 99, 27));
        appName = new QLabel(aboutDialog);
        appName->setObjectName(QString::fromUtf8("appName"));
        appName->setGeometry(QRect(0, 210, 491, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(appName->sizePolicy().hasHeightForWidth());
        appName->setSizePolicy(sizePolicy);
        appName->setTextFormat(Qt::RichText);
        appName->setAlignment(Qt::AlignCenter);
        appVersion = new QLabel(aboutDialog);
        appVersion->setObjectName(QString::fromUtf8("appVersion"));
        appVersion->setGeometry(QRect(0, 250, 491, 20));
        appVersion->setAlignment(Qt::AlignCenter);
        appDescription = new QLabel(aboutDialog);
        appDescription->setObjectName(QString::fromUtf8("appDescription"));
        appDescription->setGeometry(QRect(0, 280, 491, 20));
        appDescription->setAlignment(Qt::AlignCenter);
        appUrl = new QLabel(aboutDialog);
        appUrl->setObjectName(QString::fromUtf8("appUrl"));
        appUrl->setGeometry(QRect(0, 300, 491, 20));
        appUrl->setTextFormat(Qt::RichText);
        appUrl->setAlignment(Qt::AlignCenter);
        appUrl->setOpenExternalLinks(true);
        appLogo = new QLabel(aboutDialog);
        appLogo->setObjectName(QString::fromUtf8("appLogo"));
        appLogo->setGeometry(QRect(170, 30, 150, 150));
        sizePolicy.setHeightForWidth(appLogo->sizePolicy().hasHeightForWidth());
        appLogo->setSizePolicy(sizePolicy);
        appLogo->setMaximumSize(QSize(200, 200));
        appLogo->setPixmap(QPixmap(QString::fromUtf8(":/pixmaps/assets/pixmaps/logo.png")));
        appLogo->setScaledContents(true);
        appLogo->setAlignment(Qt::AlignCenter);
        creditsButton = new QPushButton(aboutDialog);
        creditsButton->setObjectName(QString::fromUtf8("creditsButton"));
        creditsButton->setGeometry(QRect(20, 370, 99, 27));
        creditsWidget = new QTabWidget(aboutDialog);
        creditsWidget->setObjectName(QString::fromUtf8("creditsWidget"));
        creditsWidget->setGeometry(QRect(20, 200, 451, 161));
        d_tab = new QWidget();
        d_tab->setObjectName(QString::fromUtf8("d_tab"));
        devTextArea = new QTextEdit(d_tab);
        devTextArea->setObjectName(QString::fromUtf8("devTextArea"));
        devTextArea->setEnabled(true);
        devTextArea->setGeometry(QRect(0, 0, 451, 131));
        sizePolicy.setHeightForWidth(devTextArea->sizePolicy().hasHeightForWidth());
        devTextArea->setSizePolicy(sizePolicy);
        devTextArea->setFrameShape(QFrame::NoFrame);
        devTextArea->setReadOnly(true);
        creditsWidget->addTab(d_tab, QString());
        g_tab = new QWidget();
        g_tab->setObjectName(QString::fromUtf8("g_tab"));
        graphicsTextArea = new QTextEdit(g_tab);
        graphicsTextArea->setObjectName(QString::fromUtf8("graphicsTextArea"));
        graphicsTextArea->setGeometry(QRect(0, 0, 451, 131));
        graphicsTextArea->setFrameShape(QFrame::NoFrame);
        graphicsTextArea->setReadOnly(true);
        creditsWidget->addTab(g_tab, QString());
        t_tab = new QWidget();
        t_tab->setObjectName(QString::fromUtf8("t_tab"));
        translateTextArea = new QTextEdit(t_tab);
        translateTextArea->setObjectName(QString::fromUtf8("translateTextArea"));
        translateTextArea->setGeometry(QRect(0, 0, 451, 131));
        translateTextArea->setFrameShape(QFrame::NoFrame);
        translateTextArea->setReadOnly(true);
        creditsWidget->addTab(t_tab, QString());
        c_tab = new QWidget();
        c_tab->setObjectName(QString::fromUtf8("c_tab"));
        contribTextArea = new QTextEdit(c_tab);
        contribTextArea->setObjectName(QString::fromUtf8("contribTextArea"));
        contribTextArea->setGeometry(QRect(0, 0, 451, 131));
        contribTextArea->setFrameShape(QFrame::NoFrame);
        contribTextArea->setReadOnly(true);
        creditsWidget->addTab(c_tab, QString());

        retranslateUi(aboutDialog);

        creditsWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(aboutDialog);
    } // setupUi

    void retranslateUi(QDialog *aboutDialog)
    {
        aboutDialog->setWindowTitle(QCoreApplication::translate("aboutDialog", "About", nullptr));
        closeButton->setText(QCoreApplication::translate("aboutDialog", "&Close", nullptr));
        appName->setText(QCoreApplication::translate("aboutDialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">TextLabel</span></p></body></html>", nullptr));
        appVersion->setText(QCoreApplication::translate("aboutDialog", "TextLabel", nullptr));
        appDescription->setText(QCoreApplication::translate("aboutDialog", "TextLabel", nullptr));
        appUrl->setText(QCoreApplication::translate("aboutDialog", "TextLabel", nullptr));
        appLogo->setText(QString());
        creditsButton->setText(QCoreApplication::translate("aboutDialog", "C&redits", nullptr));
        creditsWidget->setTabText(creditsWidget->indexOf(d_tab), QCoreApplication::translate("aboutDialog", "Developers", nullptr));
        creditsWidget->setTabText(creditsWidget->indexOf(g_tab), QCoreApplication::translate("aboutDialog", "Graphics", nullptr));
        creditsWidget->setTabText(creditsWidget->indexOf(t_tab), QCoreApplication::translate("aboutDialog", "Translators", nullptr));
        creditsWidget->setTabText(creditsWidget->indexOf(c_tab), QCoreApplication::translate("aboutDialog", "Contributors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutDialog: public Ui_aboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
