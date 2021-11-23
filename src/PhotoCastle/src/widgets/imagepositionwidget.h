#ifndef IMAGEPOSITIONWIDGET_H
#define IMAGEPOSITIONWIDGET_H

#include <QWidget>

namespace Ui {
class ImagePositionWidget;
}

enum ImagePosition {
    LeftTop,
    CenterTop,
    RightTop,
    LeftCenter,
    CenterCenter,
    RightCenter,
    LeftBottom,
    CenterBottom,
    RightBottom
};

class ImagePositionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImagePositionWidget(QWidget *parent = nullptr);
    ~ImagePositionWidget();

    ImagePosition imagePosition(){ return position; }

private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

private:
    Ui::ImagePositionWidget *ui;
    ImagePosition position;
    QString iconSepia;
    QString iconGray;

    void resetAllButtons();
};

#endif // IMAGEPOSITIONWIDGET_H
