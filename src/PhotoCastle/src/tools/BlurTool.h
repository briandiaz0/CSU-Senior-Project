#ifndef BLURTOOL_H
#define BLURTOOL_H

#include "Tool.h"

class BlurToolPrivate;

class BlurTool : public Tool
{
public:
    BlurTool(QObject *parent = nullptr);
    ~BlurTool() override;

    QColor primaryColor() const;

    QColor secondaryColor() const;

    void setRadius(int radius);
    void setPressure(int pressure);
    QCursor getCursor() override;
    void setCapStyle(Qt::PenCapStyle capStyle);
    void onMousePress(const QPoint &pos, Qt::MouseButton button) override;
    void onMouseMove(const QPoint &pos) override;

public slots:
    void setPrimaryColor(const QColor &color);
    void setSecondaryColor(const QColor &color);

private:
    BlurToolPrivate *d;
};



#endif // BLURTOOL_H

