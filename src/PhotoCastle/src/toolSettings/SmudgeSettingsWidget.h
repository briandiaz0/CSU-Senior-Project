#ifndef SMUDGESETTINGSWIDGET_H
#define SMUDGESETTINGSWIDGET_H

#include <QWidget>

namespace Ui {
class SmudgeSettingsWidget;
}

class SmudgeSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SmudgeSettingsWidget(QWidget *parent = nullptr);
    ~SmudgeSettingsWidget();

    int radius() const;
    int pressure() const;

signals:
    void settingsChanged();

private:
    Ui::SmudgeSettingsWidget *ui;
};

#endif // SMUDGESETTINGSWIDGET_H
