#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "config.h"
#include "consolewindow.h"
#include "PlotManager.h"
#include "MainCanManager.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void resizeEvent(QResizeEvent* event);

private slots:
    void on_actionConfiguraci_n_triggered();

    void on_actionSalir_triggered();

    void on_actionConsola_triggered();

private:
    config* configWindow;
    ConsoleWindow* consoleWindow;
    PlotManager* plotManager;

    MainCanManager* mainCan;
    void setupWindowsPallete();
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
