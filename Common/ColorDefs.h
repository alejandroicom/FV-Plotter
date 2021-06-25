#ifndef _COLOR_DEFS_H_
#define _COLOR_DEFS_H_

#include <QWidget>
#include <QString>

#define TEXT_COLOR_GREEN    "rgb(0,125,0)"
#define TEXT_COLOR_RED      "rgb(220,60,60)"
#define TEXT_COLOR_ORANGE   "rgb(255,165,0)"
#define TEXT_COLOR_BLUE     "rgb(0,100,180)"
#define TEXT_COLOR_BLACK    "rgb(0,0,0)"

void setTextColor(QWidget* widget,QString color);
#endif
