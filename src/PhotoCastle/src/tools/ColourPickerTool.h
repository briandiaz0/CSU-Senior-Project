#ifndef COLOURPICKERTOOL_H
#define COLOURPICKERTOOL_H

#include "Tool.h"

class ColourPickerToolPrivate;
class MainWindow;

class ColourPickerTool : public Tool
{
    Q_OBJECT
public:
    explicit ColourPickerTool(QObject *parent = nullptr);
    virtual ~ColourPickerTool() override;

    void onMousePress(const QPoint &pos, Qt::MouseButton button) override;
    QCursor getCursor() override;

signals:
    void pickPrimaryColor(const QPoint&);
    void pickSecondaryColor(const QPoint&);

private:
    ColourPickerToolPrivate *d;
};

#endif // COLOURPICKERTOOL_H
