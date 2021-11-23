// ColourPickerTool - Select colours from the image for the ColourBoxWidget.

#include "ColourPickerTool.h"
#include "../photocastlewindow.h"
#include "../widgets/PaintWidget.h"

class ColourPickerToolPrivate
{
public:
    QPoint lastPos;
    Qt::MouseButton mouseButton;
    QCursor cursor = QCursor(QPixmap (QString(":/cursors/assets/cursors/color-picker.png")));
};

ColourPickerTool::ColourPickerTool(QObject *parent)
    : Tool(parent)
    , d(new ColourPickerToolPrivate){}

ColourPickerTool::~ColourPickerTool()
{
    delete d;
}

void ColourPickerTool::onMousePress(const QPoint &pos, Qt::MouseButton button)
{
    // Offset for colour picker icon
    QPoint newPos(pos.x()-3,pos.y()+2);
    d->lastPos = newPos;

    switch(button)
    {
        case Qt::LeftButton:
            emit pickPrimaryColor(d->lastPos);
            break;
        case Qt::RightButton:
            emit pickSecondaryColor(d->lastPos);
            break;
        default:
            break;
    }
}

QCursor ColourPickerTool::getCursor()
{
    return d->cursor;
}
