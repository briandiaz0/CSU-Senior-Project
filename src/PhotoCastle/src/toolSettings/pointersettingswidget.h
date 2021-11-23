#ifndef POINTERSETTINGSWIDGET_H
#define POINTERSETTINGSWIDGET_H

#include <QWidget>

namespace Ui {
class PointerSettingsWidget;
}

class PointerSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PointerSettingsWidget(QWidget *parent = nullptr);
    ~PointerSettingsWidget();

    bool stroke() const;
    bool fill() const;

signals:
    void settingsChanged();

private slots:
    void on_square_sel_clicked(bool checked);
    void on_circle_sel_clicked(bool checked);

private:
    Ui::PointerSettingsWidget *ui;
};

#endif // POINTERSETTINGSWIDGET_H
