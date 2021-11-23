#ifndef SPRAYCANSETTINGSWIDGET_H
#define SPRAYCANSETTINGSWIDGET_H

#include <QWidget>

namespace Ui {
class SprayCanSettingsWidget;
}

class SprayCanSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SprayCanSettingsWidget(QWidget *parent = nullptr);
    ~SprayCanSettingsWidget();

    int radius() const;
    int pressure() const;
    int dispersion() const;
    bool rainbow() const;

signals:
    void settingsChanged();

private:
    Ui::SprayCanSettingsWidget *ui;
};

#endif // SPRAYCANSETTINGSWIDGET_H
