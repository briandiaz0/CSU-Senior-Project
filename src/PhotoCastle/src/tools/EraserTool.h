#ifndef ERASERTOOL_H
#define ERASERTOOL_H

#include "Tool.h"

class EraserToolPrivate;

class EraserTool : public Tool
{
public:
    EraserTool(QObject *parent = nullptr);
    ~EraserTool() override;

    void setWidth(int width);
    int width() const;
    void onMousePress(const QPoint &pos, Qt::MouseButton button) override;
    void onMouseMove(const QPoint &pos) override;
    QCursor getCursor() override;

public slots:
    void setSecondaryColor(const QColor &color);

private:
    EraserToolPrivate *d;
};

#endif // ERASERTOOL_H
