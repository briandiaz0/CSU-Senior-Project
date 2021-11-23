#ifndef TEXTTOOL_H
#define TEXTTOOL_H

#include "Tool.h"

class TextToolPrivate;

class TextTool : public Tool
{
    Q_OBJECT
public:
    TextTool(QObject *parent = nullptr);
    ~TextTool() override;

    void setText(const QString &text, const QFont &font, const QColor&, const bool &antialiasEnabled, const QString &position);
    void onMousePress(const QPoint &pos, Qt::MouseButton button) override;
    void onMouseMove(const QPoint &pos) override;
    void onMouseRelease(const QPoint &pos) override;
    void disconnect() override;

signals:
    void editText(const QString&, const QFont&, const QColor&);
    void editTextFinished();

private:
    void previewText();
    void drawText();
    TextToolPrivate *d;
};

#endif // TEXTTOOL_H
