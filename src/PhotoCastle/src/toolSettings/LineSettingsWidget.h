#ifndef LINESETTINGSWIDGET_H
#define LINESETTINGSWIDGET_H

#include <QWidget>

namespace Ui {
class LineSettingsWidget;
}

class LineSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LineSettingsWidget(QWidget *parent = nullptr);
    ~LineSettingsWidget();

    int width();
    int opacity();
    bool antialias();
    int style();
    int arrowStyle();

signals:
    void settingsChanged();

private slots:
    void on_arrowCheckBox_clicked(bool checked);
    void on_arrowCheckBox2_clicked(bool checked);

private:
    Ui::LineSettingsWidget *ui;
};

#endif // LINESETTINGSWIDGET_H
