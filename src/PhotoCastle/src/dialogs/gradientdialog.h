#ifndef GRADIENTDIALOG_H
#define GRADIENTDIALOG_H

#include <QDialog>
#include <brushtypecombobox.h>

enum Direction {N,NE,E,SE,S,SW,W,NW};

namespace Ui {
class GradientDialog;
}

class GradientDialog : public QDialog, QComboBoxEventsInterface
{
    Q_OBJECT

public:
    explicit GradientDialog(QWidget *parent = nullptr);
    ~GradientDialog();

    Direction direction(){return m_direction;}
    QColor startColor();
    QColor stopColor();

    //QComboBoxEventsInterface methods
    virtual void mousePressEvent(QComboBox* obj, QMouseEvent *e);
private slots:
    void applyDirection();
    void on_buttonBox_accepted();
    void on_startOpacity_valueChanged(int value);
    void on_stopOpacity_valueChanged(int value);
    void on_monochromatic_toggled(bool checked);
    void setComboColor(QComboBox *obj, QColor c);
    QColor startColorName();
    QColor stopColorName();
    void setDirection(int direction);
    void writeSettings(QWidget* window);
    void readSettings(QWidget* window);
    void on_directionN_clicked(bool checked);
    void on_directionNE_clicked(bool checked);
    void on_directionE_clicked(bool checked);
    void on_directionSE_clicked(bool checked);
    void on_directionS_clicked(bool checked);
    void on_directionSW_clicked(bool checked);
    void on_directionW_clicked(bool checked);
    void on_directionNW_clicked(bool checked);

private:
    Ui::GradientDialog *ui;
    Direction m_direction;
};

#endif // GRADIENTDIALOG_H
