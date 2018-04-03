/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *jianjie;
    QPushButton *Rock;
    QPushButton *Paper;
    QPushButton *Scissors;
    QTableWidget *Result_tab;
    QPushButton *Restart;
    QPushButton *Quit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(611, 369);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        jianjie = new QLabel(centralWidget);
        jianjie->setObjectName(QStringLiteral("jianjie"));
        jianjie->setGeometry(QRect(140, 10, 301, 20));
        jianjie->setAlignment(Qt::AlignCenter);
        jianjie->setMargin(-1);
        Rock = new QPushButton(centralWidget);
        Rock->setObjectName(QStringLiteral("Rock"));
        Rock->setGeometry(QRect(260, 50, 80, 24));
        Paper = new QPushButton(centralWidget);
        Paper->setObjectName(QStringLiteral("Paper"));
        Paper->setGeometry(QRect(420, 50, 80, 24));
        Scissors = new QPushButton(centralWidget);
        Scissors->setObjectName(QStringLiteral("Scissors"));
        Scissors->setGeometry(QRect(100, 50, 80, 24));
        Result_tab = new QTableWidget(centralWidget);
        if (Result_tab->columnCount() < 4)
            Result_tab->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Result_tab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Result_tab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Result_tab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Result_tab->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (Result_tab->rowCount() < 3)
            Result_tab->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Result_tab->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Result_tab->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Result_tab->setVerticalHeaderItem(2, __qtablewidgetitem6);
        Result_tab->setObjectName(QStringLiteral("Result_tab"));
        Result_tab->setGeometry(QRect(90, 120, 431, 111));
        Result_tab->setRowCount(3);
        Result_tab->setColumnCount(4);
        Result_tab->horizontalHeader()->setCascadingSectionResizes(false);
        Restart = new QPushButton(centralWidget);
        Restart->setObjectName(QStringLiteral("Restart"));
        Restart->setGeometry(QRect(150, 250, 113, 32));
        Quit = new QPushButton(centralWidget);
        Quit->setObjectName(QStringLiteral("Quit"));
        Quit->setGeometry(QRect(350, 250, 113, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 611, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        jianjie->setText(QApplication::translate("MainWindow", "\344\270\211\345\233\236\345\220\210\357\274\214\345\211\252\345\210\200\347\237\263\345\244\264\345\270\203", nullptr));
        Rock->setText(QApplication::translate("MainWindow", "\347\237\263\345\244\264", nullptr));
        Paper->setText(QApplication::translate("MainWindow", "\345\270\203", nullptr));
        Scissors->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Result_tab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\345\261\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Result_tab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\347\254\254\344\272\214\345\261\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Result_tab->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\211\345\261\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Result_tab->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\346\234\200\347\273\210\347\273\223\346\236\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Result_tab->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\344\272\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Result_tab->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\347\224\265\350\204\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = Result_tab->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\347\273\223\346\236\234", nullptr));
        Restart->setText(QApplication::translate("MainWindow", " \351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
        Quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
