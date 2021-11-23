/********************************************************************************
** Form generated from reading UI file 'prefsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFSDIALOG_H
#define UI_PREFSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrefsDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QLineEdit *openFolderLineEdit;
    QPushButton *openFolderButton;
    QLineEdit *saveFolderLineEdit;
    QLabel *label_3;
    QPushButton *saveFolderButton;
    QCheckBox *previousOpenedEnabled;
    QCheckBox *previousOpenedSaveEnabled;
    QWidget *tab_2;
    QCheckBox *saveFormatEnabled;
    QComboBox *comboBoxSaveFormat;
    QWidget *tab_3;
    QRadioButton *compDialogEnabled;
    QRadioButton *compEnabledDefault;
    QSlider *compressionSlider;
    QLabel *label_4;
    QLabel *compressionValue;
    QWidget *tab_4;
    QCheckBox *checkBox;
    QLabel *label_7;
    QComboBox *toolPaletteLocation;
    QLabel *label_8;
    QComboBox *zoomDirection;
    QWidget *tab_5;
    QLabel *label_5;
    QComboBox *unitsCBox;
    QCheckBox *memorizeParams;
    QWidget *tab_6;
    QLabel *label_6;
    QSlider *historySlider;
    QLabel *history_value;
    QWidget *tab_7;
    QCheckBox *checkBoxMaximize;
    QComboBox *comboBoxLanguage;
    QLabel *label;
    QPushButton *restartButton;

    void setupUi(QDialog *PrefsDialog)
    {
        if (PrefsDialog->objectName().isEmpty())
            PrefsDialog->setObjectName(QString::fromUtf8("PrefsDialog"));
        PrefsDialog->setWindowModality(Qt::ApplicationModal);
        PrefsDialog->resize(925, 490);
        buttonBox = new QDialogButtonBox(PrefsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(570, 450, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget = new QTabWidget(PrefsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 901, 421));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 321, 17));
        openFolderLineEdit = new QLineEdit(tab);
        openFolderLineEdit->setObjectName(QString::fromUtf8("openFolderLineEdit"));
        openFolderLineEdit->setGeometry(QRect(20, 40, 321, 27));
        openFolderButton = new QPushButton(tab);
        openFolderButton->setObjectName(QString::fromUtf8("openFolderButton"));
        openFolderButton->setGeometry(QRect(350, 40, 41, 27));
        saveFolderLineEdit = new QLineEdit(tab);
        saveFolderLineEdit->setObjectName(QString::fromUtf8("saveFolderLineEdit"));
        saveFolderLineEdit->setGeometry(QRect(20, 120, 321, 27));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 321, 17));
        saveFolderButton = new QPushButton(tab);
        saveFolderButton->setObjectName(QString::fromUtf8("saveFolderButton"));
        saveFolderButton->setGeometry(QRect(350, 120, 41, 27));
        previousOpenedEnabled = new QCheckBox(tab);
        previousOpenedEnabled->setObjectName(QString::fromUtf8("previousOpenedEnabled"));
        previousOpenedEnabled->setGeometry(QRect(20, 70, 371, 22));
        previousOpenedSaveEnabled = new QCheckBox(tab);
        previousOpenedSaveEnabled->setObjectName(QString::fromUtf8("previousOpenedSaveEnabled"));
        previousOpenedSaveEnabled->setGeometry(QRect(20, 150, 371, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        saveFormatEnabled = new QCheckBox(tab_2);
        saveFormatEnabled->setObjectName(QString::fromUtf8("saveFormatEnabled"));
        saveFormatEnabled->setGeometry(QRect(20, 20, 231, 22));
        comboBoxSaveFormat = new QComboBox(tab_2);
        comboBoxSaveFormat->setObjectName(QString::fromUtf8("comboBoxSaveFormat"));
        comboBoxSaveFormat->setGeometry(QRect(20, 40, 191, 27));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        compDialogEnabled = new QRadioButton(tab_3);
        compDialogEnabled->setObjectName(QString::fromUtf8("compDialogEnabled"));
        compDialogEnabled->setGeometry(QRect(20, 20, 261, 22));
        compDialogEnabled->setCheckable(true);
        compDialogEnabled->setChecked(false);
        compEnabledDefault = new QRadioButton(tab_3);
        compEnabledDefault->setObjectName(QString::fromUtf8("compEnabledDefault"));
        compEnabledDefault->setGeometry(QRect(20, 60, 271, 22));
        compressionSlider = new QSlider(tab_3);
        compressionSlider->setObjectName(QString::fromUtf8("compressionSlider"));
        compressionSlider->setGeometry(QRect(30, 130, 471, 29));
        compressionSlider->setFocusPolicy(Qt::NoFocus);
        compressionSlider->setMaximum(100);
        compressionSlider->setSingleStep(10);
        compressionSlider->setPageStep(10);
        compressionSlider->setValue(0);
        compressionSlider->setTracking(true);
        compressionSlider->setOrientation(Qt::Horizontal);
        compressionSlider->setTickPosition(QSlider::TicksBelow);
        compressionSlider->setTickInterval(10);
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 110, 101, 17));
        compressionValue = new QLabel(tab_3);
        compressionValue->setObjectName(QString::fromUtf8("compressionValue"));
        compressionValue->setGeometry(QRect(130, 110, 67, 17));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        checkBox = new QCheckBox(tab_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 20, 231, 22));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 70, 321, 17));
        toolPaletteLocation = new QComboBox(tab_4);
        toolPaletteLocation->setObjectName(QString::fromUtf8("toolPaletteLocation"));
        toolPaletteLocation->setGeometry(QRect(20, 90, 191, 25));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 140, 111, 17));
        zoomDirection = new QComboBox(tab_4);
        zoomDirection->setObjectName(QString::fromUtf8("zoomDirection"));
        zoomDirection->setGeometry(QRect(20, 160, 191, 25));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 20, 191, 17));
        unitsCBox = new QComboBox(tab_5);
        unitsCBox->addItem(QString());
        unitsCBox->addItem(QString());
        unitsCBox->addItem(QString());
        unitsCBox->setObjectName(QString::fromUtf8("unitsCBox"));
        unitsCBox->setGeometry(QRect(20, 40, 151, 27));
        memorizeParams = new QCheckBox(tab_5);
        memorizeParams->setObjectName(QString::fromUtf8("memorizeParams"));
        memorizeParams->setGeometry(QRect(20, 80, 271, 23));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 20, 141, 17));
        historySlider = new QSlider(tab_6);
        historySlider->setObjectName(QString::fromUtf8("historySlider"));
        historySlider->setGeometry(QRect(30, 40, 471, 29));
        historySlider->setFocusPolicy(Qt::NoFocus);
        historySlider->setValue(0);
        historySlider->setOrientation(Qt::Horizontal);
        historySlider->setTickPosition(QSlider::TicksBelow);
        historySlider->setTickInterval(10);
        history_value = new QLabel(tab_6);
        history_value->setObjectName(QString::fromUtf8("history_value"));
        history_value->setGeometry(QRect(170, 20, 67, 17));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        checkBoxMaximize = new QCheckBox(tab_7);
        checkBoxMaximize->setObjectName(QString::fromUtf8("checkBoxMaximize"));
        checkBoxMaximize->setGeometry(QRect(20, 90, 311, 22));
        comboBoxLanguage = new QComboBox(tab_7);
        comboBoxLanguage->setObjectName(QString::fromUtf8("comboBoxLanguage"));
        comboBoxLanguage->setGeometry(QRect(20, 50, 161, 27));
        label = new QLabel(tab_7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 161, 17));
        restartButton = new QPushButton(tab_7);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        restartButton->setGeometry(QRect(200, 50, 341, 25));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy);
        restartButton->setFlat(false);
        tabWidget->addTab(tab_7, QString());

        retranslateUi(PrefsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PrefsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PrefsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PrefsDialog);
    } // setupUi

    void retranslateUi(QDialog *PrefsDialog)
    {
        PrefsDialog->setWindowTitle(QCoreApplication::translate("PrefsDialog", "Preferences", nullptr));
        label_2->setText(QCoreApplication::translate("PrefsDialog", "Opening folder", nullptr));
        openFolderButton->setText(QCoreApplication::translate("PrefsDialog", "...", nullptr));
        label_3->setText(QCoreApplication::translate("PrefsDialog", "Saving folder", nullptr));
        saveFolderButton->setText(QCoreApplication::translate("PrefsDialog", "...", nullptr));
        previousOpenedEnabled->setText(QCoreApplication::translate("PrefsDialog", "Remember previous opened folder", nullptr));
        previousOpenedSaveEnabled->setText(QCoreApplication::translate("PrefsDialog", "Remember previous save folder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PrefsDialog", "&Folders", nullptr));
        saveFormatEnabled->setText(QCoreApplication::translate("PrefsDialog", "Default file format", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PrefsDialog", "S&aving", nullptr));
        compDialogEnabled->setText(QCoreApplication::translate("PrefsDialog", "Always show dialog", nullptr));
        compEnabledDefault->setText(QCoreApplication::translate("PrefsDialog", "Set default compression", nullptr));
        label_4->setText(QCoreApplication::translate("PrefsDialog", "Compression", nullptr));
        compressionValue->setText(QCoreApplication::translate("PrefsDialog", "90", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("PrefsDialog", "&Compression", nullptr));
        checkBox->setText(QCoreApplication::translate("PrefsDialog", "Multi-Window Mode", nullptr));
        label_7->setText(QCoreApplication::translate("PrefsDialog", "Default Toolpalette Location", nullptr));
        label_8->setText(QCoreApplication::translate("PrefsDialog", "Zoom direction", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("PrefsDialog", "&Layout", nullptr));
        label_5->setText(QCoreApplication::translate("PrefsDialog", "Default Units", nullptr));
        unitsCBox->setItemText(0, QCoreApplication::translate("PrefsDialog", "Pixels", nullptr));
        unitsCBox->setItemText(1, QCoreApplication::translate("PrefsDialog", "CM", nullptr));
        unitsCBox->setItemText(2, QCoreApplication::translate("PrefsDialog", "Inches", nullptr));

        memorizeParams->setText(QCoreApplication::translate("PrefsDialog", "Memorize parameters", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("PrefsDialog", "&Default Values", nullptr));
        label_6->setText(QCoreApplication::translate("PrefsDialog", "Image History Size", nullptr));
        history_value->setText(QCoreApplication::translate("PrefsDialog", "24", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("PrefsDialog", "&History", nullptr));
        checkBoxMaximize->setText(QCoreApplication::translate("PrefsDialog", "Maximize on Startup", nullptr));
        label->setText(QCoreApplication::translate("PrefsDialog", "Language", nullptr));
        restartButton->setText(QCoreApplication::translate("PrefsDialog", "Restart to apply", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("PrefsDialog", "&Startup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrefsDialog: public Ui_PrefsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFSDIALOG_H
