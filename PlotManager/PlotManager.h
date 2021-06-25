#ifndef PLOTMANAGER_H
#define PLOTMANAGER_H

#include <QObject>
#include "qcustomplot.h"
#include <vector>
#include <QColor>


class PlotManager : public QObject
{
    Q_OBJECT
public:
    explicit PlotManager(QCustomPlot* plot);
    void setupPlot (void);
     void resize (QSize size);
private:
    void addGraph(QString data1Name);
    void setupAxis(QCPAxis *axis, QString legend = " ");
    QCustomPlot* plot;
    unsigned int graphIndex;
    std::vector<QColor> defaultColorVerctor;
signals:

public slots:
    void customMenuRequested(QPoint pos);
};

#endif // PLOTMANAGER_H
