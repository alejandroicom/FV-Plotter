#include "PlotManager.h"
#include <QFont>
#include <QDebug>
#include <QWidget>
PlotManager::PlotManager(QCustomPlot* plot )
{
    this->plot = plot;
    this->graphIndex = 0;

    defaultColorVerctor.push_back(QColor(0,255,0));
    defaultColorVerctor.push_back(QColor(255,0,0));
    defaultColorVerctor.push_back(QColor(255,255,0));
    defaultColorVerctor.push_back(QColor(0,255,255));
    defaultColorVerctor.push_back(QColor(255,0,255));
    defaultColorVerctor.push_back(QColor(0,0,255));


}

void PlotManager::addGraph(QString data1Name)
{
    plot->addGraph();

    QPen pen;

    if (graphIndex > defaultColorVerctor.size())
    {
       pen.setColor(QColor(255,0,255));
    }
    else
    {
        pen.setColor(defaultColorVerctor[graphIndex]);
    }

    pen.setWidthF(1);
    plot->graph(graphIndex)->setPen(pen);
    plot->graph(graphIndex)->setLineStyle(QCPGraph::lsLine);
    plot->graph(graphIndex)->setAdaptiveSampling(true);
    plot->graph(graphIndex)->setName(data1Name);
    plot->graph(graphIndex)->rescaleValueAxis(true);
    plot->graph(graphIndex)->setAntialiasedFill(false);

    graphIndex++;
}

void PlotManager::setupAxis(QCPAxis* axis, QString legend)
{
    axis->setVisible(true);
    axis->setRange(0, 10);
    axis->setTickStep(0.5);
    axis->setTickLabels (true);
    axis->setLabel(legend);
    axis->setLabelColor(Qt::white);
    axis->setBasePen(QPen(Qt::white, 1));
    axis->setTickPen(QPen(Qt::white, 1));
    axis->setSubTickPen(QPen(Qt::white, 1));
    axis->setTickLabelColor(Qt::white);
    axis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    axis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    axis->grid()->setSubGridVisible(true);
    axis->grid()->setZeroLinePen(Qt::NoPen);
    axis->setSelectedTickLabelColor(Qt::red);
}

void PlotManager::customMenuRequested(QPoint pos)
{
    QMenu *menu=new QMenu(plot);
    menu->addAction(new QAction("Detener", this));
    menu->addAction(new QAction("Limpiar", this));
    menu->addAction(new QAction("Auto Ajuste", this));
    menu->addAction(new QAction("Config", this));
    menu->addAction(new QAction("Consola", this));
    menu->popup(plot->mapToGlobal(pos));

}

void PlotManager::setupPlot(void)
{
    plot->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(plot, SIGNAL(customContextMenuRequested(QPoint)),this, SLOT(customMenuRequested(QPoint)));


    plot->legend->setVisible(false);
    QFont legendFont = QFont ("Lato", 9, QFont::Normal);
    //legendFont.setPointSize(9); // and make a bit smaller for legend
    plot->legend->setFont(legendFont);
    plot->legend->setBrush(QBrush(QColor(255,255,255,230)));
    plot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom  | QCP::iSelectAxes);

    connect(plot,SIGNAL(selectionChangedByUser()),this,SLOT(selectAxis()));

    //AXIS
    /*************X AXIS********************/
    setupAxis(plot->xAxis);
    /*************Y AXIS********************/
    setupAxis(plot->yAxis);
    /*************Y AXIS  2********************/
    setupAxis(plot->yAxis2);


   /*plot->xAxis2->setBasePen(QPen(Qt::white, 1));
    plot->xAxis2->setTickPen(QPen(Qt::white, 1));
    plot->xAxis2->setSubTickPen(QPen(Qt::white, 1));
    plot->xAxis2->setTickLabelColor(Qt::white);
    plot->xAxis2->setLabelColor(Qt::white);*/
    //GRAPH

    addGraph("Data 1");
    addGraph("Data 2");
    addGraph("Data 3");
    addGraph("Data 4");


    addGraph("Line 1");
    addGraph("Line 2");


    plot->setBackground(QColor(Qt::black));
    plot->axisRect()->setBackground(QColor(40,40,40));
    plot->replot();
}

void PlotManager::resize (QSize size)
{
    QRect nextGeometry;
    nextGeometry.setHeight(size.height()-40);
    nextGeometry.setWidth(size.width());
    nextGeometry.setY(110);
    nextGeometry.setX(0);
    plot->setGeometry(nextGeometry);
}

