// PaintBucketTool - Flood fill areas.

#include "PaintBucketTool.h"
#include "../photocastlewindow.h"
#include "../widgets/PaintWidget.h"

PaintBucketTool::PaintBucketTool(QObject *parent)
    : Tool(parent){}

void PaintBucketTool::onMousePress(const QPoint &pos, Qt::MouseButton button)
{
    QPoint newPos(pos.x()-1,pos.y()+1);
    switch(button)
    {
        case Qt::LeftButton:
            emit floodFillPrimaryColor(newPos);
            break;
        case Qt::RightButton:
            emit floodFillSecondaryColor(newPos);
            break;
        default:
            break;
    }
}

QCursor PaintBucketTool::getCursor()
{
    return QCursor(QPixmap (QString(":/cursors/assets/cursors/bucket.png")));
}
