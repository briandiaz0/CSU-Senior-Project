#ifndef STAMPSETTINGSWIDGET_H
#define STAMPSETTINGSWIDGET_H

#include <QWidget>

namespace Ui {
class StampSettingsWidget;
}

class StampSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StampSettingsWidget(QWidget *parent = nullptr);
    ~StampSettingsWidget();

    int radius() const;
    int pressure() const;
    int step() const;
    bool fixed() const;
    bool diffuse() const;
    bool precise() const;

signals:
    void settingsChanged();

private slots:
    void onFixedChanged();

private:
    Ui::StampSettingsWidget *ui;
};

#endif // STAMPSETTINGSWIDGET_H
