#ifndef COMPRESSIONDIALOG_H
#define COMPRESSIONDIALOG_H

#include <QDialog>

namespace Ui {
class CompressionDialog;
}

class CompressionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CompressionDialog(QWidget *parent = nullptr);
    ~CompressionDialog();

    int quality() const;
    bool enableSaveImage;
private slots:
    void on_horizontalSlider_sliderMoved(int position);
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::CompressionDialog *ui;
};

#endif // COMPRESSIONDIALOG_H
