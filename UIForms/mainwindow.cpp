#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    configWindow = new config();
    consoleWindow = new ConsoleWindow();
    plotManager = new PlotManager(ui->mainPlot);
    plotManager->setupPlot();

    setupWindowsPallete();




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupWindowsPallete()
{

    qApp->setStyle(QStyleFactory::create("fusion"));
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(53,53,53));
    palette.setColor(QPalette::WindowText, Qt::white);
    palette.setColor(QPalette::Base, QColor(15,15,15));
    palette.setColor(QPalette::AlternateBase, QColor(53,53,53));
    palette.setColor(QPalette::ToolTipBase, Qt::white);
    palette.setColor(QPalette::ToolTipText, Qt::white);
    palette.setColor(QPalette::Text, Qt::white);
    palette.setColor(QPalette::Button, QColor(53,53,53));
    palette.setColor(QPalette::ButtonText, Qt::white);
    palette.setColor(QPalette::BrightText, Qt::red);
    palette.setColor(QPalette::Highlight, QColor(142,45,197).lighter());
    palette.setColor(QPalette::HighlightedText, Qt::black);
    qApp->setPalette(palette);
    qApp->setFont (QFont ("Lato", 9, QFont::Normal));
    this->showMaximized();
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    QMainWindow::resizeEvent(event);


    QRect nextGeometry = QRect(ui->logoFix->geometry());

    nextGeometry.setX(this->size().width()-200);
    nextGeometry.setY(0);
    nextGeometry.setWidth(191);
    nextGeometry.setHeight(81);
    ui->logoFix->setGeometry(nextGeometry);
    plotManager->resize(this->size());


}

void MainWindow::on_actionConfiguraci_n_triggered()
{
    configWindow->show();
}




void MainWindow::on_actionSalir_triggered()
{
    QCoreApplication::quit();
}

void MainWindow::on_actionConsola_triggered()
{
    consoleWindow->show();
}
