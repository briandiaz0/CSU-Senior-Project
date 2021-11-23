#ifndef OUTERFRAMEDIALOG_H
#define OUTERFRAMEDIALOG_H

#include <QDialog>
#include <QComboBox>
#include <QMouseEvent>

#include <brushtypecombobox.h>

namespace Ui {
class OuterFrameDialog;
}

class OuterFrameDialog : public QDialog, QComboBoxEventsInterface
{
    Q_OBJECT

public:
    explicit OuterFrameDialog(QWidget *parent = nullptr);
    ~OuterFrameDialog();

    void mousePressEvent(QComboBox* obj, QMouseEvent *e);
    QColor color() const;
    int width() const;
private:
    Ui::OuterFrameDialog *ui;
};

#endif // OUTERFRAMEDIALOG_H
