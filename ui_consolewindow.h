/********************************************************************************
** Form generated from reading UI file 'consolewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLEWINDOW_H
#define UI_CONSOLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConsoleWindow
{
public:
    QPushButton *pushButton;
    QPlainTextEdit *console;

    void setupUi(QDialog *ConsoleWindow)
    {
        if (ConsoleWindow->objectName().isEmpty())
            ConsoleWindow->setObjectName(QStringLiteral("ConsoleWindow"));
        ConsoleWindow->resize(400, 304);
#ifndef QT_NO_TOOLTIP
        ConsoleWindow->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ConsoleWindow->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
        ConsoleWindow->setModal(false);
        pushButton = new QPushButton(ConsoleWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 270, 75, 23));
        console = new QPlainTextEdit(ConsoleWindow);
        console->setObjectName(QStringLiteral("console"));
        console->setGeometry(QRect(10, 10, 381, 251));

        retranslateUi(ConsoleWindow);

        QMetaObject::connectSlotsByName(ConsoleWindow);
    } // setupUi

    void retranslateUi(QDialog *ConsoleWindow)
    {
        ConsoleWindow->setWindowTitle(QApplication::translate("ConsoleWindow", "Console", 0));
        pushButton->setText(QApplication::translate("ConsoleWindow", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class ConsoleWindow: public Ui_ConsoleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLEWINDOW_H
