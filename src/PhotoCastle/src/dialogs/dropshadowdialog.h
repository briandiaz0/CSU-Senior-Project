#ifndef DROPSHADOWDIALOG_H
#define DROPSHADOWDIALOG_H

#include <QDialog>
#include <QComboBox>
#include <QMouseEvent>

#include <brushtypecombobox.h>

namespace Ui {
class dropshadowDialog;
}

class dropshadowDialog : public QDialog, QComboBoxEventsInterface
{
    Q_OBJECT

public:
    explicit dropshadowDialog(QWidget *parent = nullptr);
    ~dropshadowDialog();

    void mousePressEvent(QComboBox* obj, QMouseEvent *e);
    QColor color() const;
    int radius() const;
    int padding() const;
    int offsetx() const;
    int offsety() const;

    void on_buttonBox_accepted();

private slots:
    void on_defaultsButton_clicked();

private:
    Ui::dropshadowDialog *ui;

    QColor colorName();
    void setComboColor(QComboBox *obj, QColor c);
    void writeSettings(QWidget* window);
    void readSettings(QWidget* window);
};

#endif // DROPSHADOWDIALOG_H
