#ifndef IMAGEPROPERTIESDIALOG_H
#define IMAGEPROPERTIESDIALOG_H

#include <QDialog>

class ImagePropertiesPrivate;

namespace Ui {
class imagePropertiesDialog;
}

class imagePropertiesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit imagePropertiesDialog(QWidget *parent = nullptr);
    ~imagePropertiesDialog();

    void setImageName(QString);
    void setFolder(QString);
    void setSize(QSize);
    void setColorCount(QImage);

    void setFileSize(qint64);
    void setDate(QString);

    void setMemorySize(qint64);
    void setTotalSize(qint64);

    void setFileType(QString);
private:
    Ui::imagePropertiesDialog *ui;
};

#endif // IMAGEPROPERTIESDIALOG_H
