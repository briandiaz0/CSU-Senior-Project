#ifndef PAINTBRUSHADVSETTINGSWIDGET_H
#define PAINTBRUSHADVSETTINGSWIDGET_H

#include <QWidget>

namespace Ui {
class PaintBrushAdvSettingsWidget;
}

class PaintBrushAdvSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PaintBrushAdvSettingsWidget(QWidget *parent = nullptr);
    ~PaintBrushAdvSettingsWidget();

    QPixmap brushPixmap();
    int brushWidth() const;
    int pressure() const;
    bool fade() const;
    int step() const;

signals:
    void settingsChanged();

private:
    Ui::PaintBrushAdvSettingsWidget *ui;
};

#endif // PAINTBRUSHADVSETTINGSWIDGET_H
