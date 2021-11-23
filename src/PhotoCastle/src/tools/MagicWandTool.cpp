// MagicWandTool - Select areas on the image.

#include "MagicWandTool.h"
#include "../widgets/PaintWidget.h"

class MagicWandToolPrivate
{
public:
    MagicWandToolPrivate()
    {
        tolerance = 0;
        color = false;
    }
    int tolerance;
    bool color;
};


MagicWandTool::MagicWandTool(QObject *parent)
    : Tool(parent)
    , d(new MagicWandToolPrivate){}

MagicWandTool::~MagicWandTool()
{
    delete d;
}

void MagicWandTool::onMousePress(const QPoint &pos, Qt::MouseButton button)
{
    switch(button)
    {
        case Qt::LeftButton:
            emit selectPrimaryColor(pos, d->tolerance, d->color);
            break;
        case Qt::RightButton:
            break;
        default:
            break;
    }
}

void MagicWandTool::setSelection(const QPolygon& poly)
{
    emit selectionChanged(poly);
    emit painted(m_paintDevice);
}

void MagicWandTool::setTolerance(int tolerance)
{
    d->tolerance = tolerance;
}

void MagicWandTool::setColor(bool color)
{
    d->color = color;
}
