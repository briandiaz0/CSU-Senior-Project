#ifndef MAGICWANDSETTINGSWIDGET_H
#define MAGICWANDSETTINGSWIDGET_H

#include <QWidget>

namespace Ui {
class MagicWandSettingsWidget;
}

class MagicWandSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MagicWandSettingsWidget(QWidget *parent = nullptr);
    ~MagicWandSettingsWidget();

    int tolerance() const;
    bool color() const;

signals:
    void settingsChanged();

private:
    Ui::MagicWandSettingsWidget *ui;
};

#endif // MAGICWANDSETTINGSWIDGET_H
