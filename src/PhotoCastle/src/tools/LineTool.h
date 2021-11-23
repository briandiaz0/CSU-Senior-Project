#ifndef LINETOOL_H
#define LINETOOL_H

#include "Tool.h"

class LineToolPrivate;

class LineTool : public Tool
{
    Q_OBJECT
public:
    LineTool(QObject *parent = nullptr);
    ~LineTool() override;

    void onMousePress(const QPoint &pos, Qt::MouseButton button) override;
    void onMouseMove(const QPoint &pos) override;
    void onMouseRelease(const QPoint &pos) override;
    QCursor getCursor() override;

public slots:
    void setPrimaryColor(const QColor &color);
    void setSecondaryColor(const QColor &color);
    void setWidth(int width);
    void setAntialias(bool antialias);
    void setOpacity(int opacity);
    void setStyle(int style);
    void setArrowStyle(int arrowStyle);
    void drawArrow(QPainter& painter, QPoint from, QPoint to, QPoint& pOutMedian);

private:
    LineToolPrivate *d;
};

#endif // LINETOOL_H

