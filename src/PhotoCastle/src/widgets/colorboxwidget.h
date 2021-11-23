#ifndef COLORBOXWIDGET_H
#define COLORBOXWIDGET_H

#include <QWidget>

namespace Ui {
class ColorBoxWidget;
}

class ColorBoxWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ColorBoxWidget(QWidget *parent = nullptr);
    ~ColorBoxWidget() override;

    QColor primaryColor() const;
    QColor secondaryColor() const;

    void setPrimaryColor(const QColor &color);
    void setSecondaryColor(const QColor &color);

    bool eventFilter(QObject *obj, QEvent *event) override;

signals:
    void primaryColorChanged(const QColor &color);
    void secondaryColorChanged(const QColor &color);

private slots:
    void on_swapColorButton_clicked();
    void on_prevPage_clicked();
    void on_nextPage_clicked();
    void on_colourManageButton_clicked();

private:
    void showColorDialog(QWidget *colorLabel);
    void setColor(const QColor &color, QWidget *colorLabel);
    QColor getColorFromLabel(QWidget *colorLabel) const;

    Ui::ColorBoxWidget *ui;
};

#endif // COLORBOXWIDGET_H
