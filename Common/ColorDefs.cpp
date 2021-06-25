#include "ColorDefs.h"

void setTextColor(QWidget* widget,QString color)
{
    QString style = widget->metaObject()->className();
    style += "{ color : "+color+"; }";
    widget->setStyleSheet(style);
}