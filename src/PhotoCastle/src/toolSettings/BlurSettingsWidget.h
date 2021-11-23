#ifndef BLURSETTINGSWIDGET_H
#define BLURSETTINGSWIDGET_H

#include <QWidget>

namespace Ui {
class BlurSettingsWidget;
}

class BlurSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BlurSettingsWidget(QWidget *parent = nullptr);
    ~BlurSettingsWidget();

    int radius() const;
    int pressure() const;

signals:
    void settingsChanged();

private:
    Ui::BlurSettingsWidget *ui;
};

#endif // BLURSETTINGSWIDGET_H
