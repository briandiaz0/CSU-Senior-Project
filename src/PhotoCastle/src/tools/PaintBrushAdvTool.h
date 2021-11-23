#ifndef PAINTBRUSHADVTOOL_H
#define PAINTBRUSHADVTOOL_H

#include "Tool.h"

class PaintBrushAdvToolPrivate;

class PaintBrushAdvTool : public Tool
{
public:
    PaintBrushAdvTool(QObject *parent = nullptr);
    ~PaintBrushAdvTool() override;

    void setWidth(int width);
    int width() const;

    QColor primaryColor() const;

    QColor secondaryColor() const;

    void setBrushPixmap(QPixmap pixmap);
    void setCapStyle(Qt::PenCapStyle capStyle);
    void setPressure(int pressure);
    void setFade(bool fade);
    void setStep(int step);

    QCursor getCursor() override;
    void onMousePress(const QPoint &pos, Qt::MouseButton button) override;
    void onMouseMove(const QPoint &pos) override;
    void onMouseRelease(const QPoint &pos) override;

public slots:
    void setPrimaryColor(const QColor &color);
    void setSecondaryColor(const QColor &color);

private:
    PaintBrushAdvToolPrivate *d;
};

#endif // PAINTBRUSHADVTOOL_H

