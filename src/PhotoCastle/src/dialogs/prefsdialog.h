#ifndef PREFSDIALOG_H
#define PREFSDIALOG_H

#include <QDialog>

namespace Ui {
class PrefsDialog;
}

class PrefsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PrefsDialog(QWidget *parent = nullptr);
    ~PrefsDialog();

private slots:
    void on_buttonBox_accepted();
    void on_openFolderButton_clicked();
    void on_saveFolderButton_clicked();
    void on_compressionSlider_sliderMoved(int position);
    void on_historySlider_sliderMoved(int position);
    void on_restartButton_clicked();
    void set_user_language();
    void on_comboBoxLanguage_currentIndexChanged();
    void on_buttonBox_rejected();
    void on_compressionSlider_valueChanged(int value);
    void on_historySlider_valueChanged(int value);
    void addFlagIcons(int languages);

signals:
    void safeQuitApp();

private:
    Ui::PrefsDialog *ui;
    QString flagPath;
};

#endif // PREFSDIALOG_H
