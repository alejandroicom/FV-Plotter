/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalir;
    QAction *actionConfiguraci_n;
    QAction *actionConsola;
    QWidget *centralWidget;
    QCheckBox *data2Enable;
    QCheckBox *data1Enable;
    QGroupBox *data4NameDisplay;
    QLineEdit *data4Display;
    QCustomPlot *mainPlot;
    QGroupBox *data3NameDisplay;
    QLineEdit *data3Display;
    QGroupBox *data1NameDisplay;
    QLineEdit *data1Display;
    QGroupBox *data2NameDisplay;
    QLineEdit *data2Display;
    QCheckBox *data4Enable;
    QCheckBox *data3Enable;
    QLabel *logoFix;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuHerramientas;
    QMenu *menuAyuda;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1132, 363);
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionConfiguraci_n = new QAction(MainWindow);
        actionConfiguraci_n->setObjectName(QStringLiteral("actionConfiguraci_n"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/icon/Gear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfiguraci_n->setIcon(icon);
        actionConsola = new QAction(MainWindow);
        actionConsola->setObjectName(QStringLiteral("actionConsola"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        data2Enable = new QCheckBox(centralWidget);
        data2Enable->setObjectName(QStringLiteral("data2Enable"));
        data2Enable->setGeometry(QRect(230, 80, 70, 17));
        data2Enable->setChecked(true);
        data1Enable = new QCheckBox(centralWidget);
        data1Enable->setObjectName(QStringLiteral("data1Enable"));
        data1Enable->setGeometry(QRect(10, 80, 70, 17));
        data1Enable->setChecked(true);
        data4NameDisplay = new QGroupBox(centralWidget);
        data4NameDisplay->setObjectName(QStringLiteral("data4NameDisplay"));
        data4NameDisplay->setGeometry(QRect(670, 10, 201, 71));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        data4NameDisplay->setFont(font);
        data4NameDisplay->setFlat(false);
        data4Display = new QLineEdit(data4NameDisplay);
        data4Display->setObjectName(QStringLiteral("data4Display"));
        data4Display->setGeometry(QRect(0, 20, 201, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Lalo"));
        font1.setPointSize(26);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        data4Display->setFont(font1);
        data4Display->setStyleSheet(QLatin1String("font: 26pt \"Lalo\";\n"
"border-color: rgb(85, 255, 0);"));
        data4Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        data4Display->setReadOnly(true);
        mainPlot = new QCustomPlot(centralWidget);
        mainPlot->setObjectName(QStringLiteral("mainPlot"));
        mainPlot->setGeometry(QRect(10, 110, 1111, 211));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainPlot->sizePolicy().hasHeightForWidth());
        mainPlot->setSizePolicy(sizePolicy);
        data3NameDisplay = new QGroupBox(centralWidget);
        data3NameDisplay->setObjectName(QStringLiteral("data3NameDisplay"));
        data3NameDisplay->setGeometry(QRect(450, 10, 201, 71));
        data3NameDisplay->setFont(font);
        data3NameDisplay->setFlat(false);
        data3Display = new QLineEdit(data3NameDisplay);
        data3Display->setObjectName(QStringLiteral("data3Display"));
        data3Display->setGeometry(QRect(0, 20, 201, 51));
        data3Display->setFont(font1);
        data3Display->setStyleSheet(QLatin1String("font: 26pt \"Lalo\";\n"
"border-color: rgb(85, 255, 0);"));
        data3Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        data3Display->setReadOnly(true);
        data1NameDisplay = new QGroupBox(centralWidget);
        data1NameDisplay->setObjectName(QStringLiteral("data1NameDisplay"));
        data1NameDisplay->setGeometry(QRect(10, 10, 201, 71));
        data1NameDisplay->setFont(font);
        data1Display = new QLineEdit(data1NameDisplay);
        data1Display->setObjectName(QStringLiteral("data1Display"));
        data1Display->setGeometry(QRect(0, 20, 201, 51));
        data1Display->setFont(font1);
        data1Display->setStyleSheet(QLatin1String("font: 26pt \"Lalo\";\n"
"border-color: rgb(85, 255, 0);"));
        data1Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        data1Display->setReadOnly(true);
        data2NameDisplay = new QGroupBox(centralWidget);
        data2NameDisplay->setObjectName(QStringLiteral("data2NameDisplay"));
        data2NameDisplay->setGeometry(QRect(230, 10, 201, 71));
        data2NameDisplay->setFont(font);
        data2Display = new QLineEdit(data2NameDisplay);
        data2Display->setObjectName(QStringLiteral("data2Display"));
        data2Display->setGeometry(QRect(0, 20, 201, 51));
        data2Display->setFont(font1);
        data2Display->setStyleSheet(QLatin1String("font: 26pt \"Lalo\";\n"
"border-color: rgb(85, 255, 0);"));
        data2Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        data2Display->setReadOnly(true);
        data4Enable = new QCheckBox(centralWidget);
        data4Enable->setObjectName(QStringLiteral("data4Enable"));
        data4Enable->setGeometry(QRect(670, 80, 70, 17));
        data4Enable->setChecked(true);
        data3Enable = new QCheckBox(centralWidget);
        data3Enable->setObjectName(QStringLiteral("data3Enable"));
        data3Enable->setGeometry(QRect(450, 80, 70, 17));
        data3Enable->setChecked(true);
        logoFix = new QLabel(centralWidget);
        logoFix->setObjectName(QStringLiteral("logoFix"));
        logoFix->setGeometry(QRect(930, 0, 191, 81));
        logoFix->setPixmap(QPixmap(QString::fromUtf8(":/Resources/img/logoFix_w.png")));
        logoFix->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1132, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuHerramientas = new QMenu(menuBar);
        menuHerramientas->setObjectName(QStringLiteral("menuHerramientas"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuHerramientas->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionSalir);
        menuHerramientas->addAction(actionConfiguraci_n);
        menuHerramientas->addAction(actionConsola);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FV-Ploter", 0));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", 0));
        actionConfiguraci_n->setText(QApplication::translate("MainWindow", "Configuraci\303\263n", 0));
        actionConsola->setText(QApplication::translate("MainWindow", "Consola", 0));
        data2Enable->setText(QApplication::translate("MainWindow", "Visible", 0));
        data1Enable->setText(QApplication::translate("MainWindow", "Visible", 0));
        data4NameDisplay->setTitle(QApplication::translate("MainWindow", "Dato 4", 0));
        data4Display->setText(QApplication::translate("MainWindow", "0.0", 0));
        data3NameDisplay->setTitle(QApplication::translate("MainWindow", "Dato 3", 0));
        data3Display->setText(QApplication::translate("MainWindow", "0.0", 0));
        data1NameDisplay->setTitle(QApplication::translate("MainWindow", "Dato 1", 0));
        data1Display->setText(QApplication::translate("MainWindow", "0.0", 0));
        data2NameDisplay->setTitle(QApplication::translate("MainWindow", "Dato 2", 0));
        data2Display->setText(QApplication::translate("MainWindow", "0.0", 0));
        data4Enable->setText(QApplication::translate("MainWindow", "Visible", 0));
        data3Enable->setText(QApplication::translate("MainWindow", "Visible", 0));
        logoFix->setText(QString());
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", 0));
        menuHerramientas->setTitle(QApplication::translate("MainWindow", "Herramientas", 0));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Ayuda", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
