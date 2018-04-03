//
// Created by 周神 on 2018/4/2.
//

#ifndef QT_JSB_MAINWINDOW_H
#define QT_JSB_MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include "jsb.h"

namespace Ui{
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void checkTimes();

private slots:
    void on_Rock_clicked();
    void on_Paper_clicked();
    void on_Scissors_clicked();
    void on_Restart_clicked();

private:
    Ui::MainWindow *ui;
    int times;
    StartGame a;
    std::random_device rd;
};

#endif //QT_JSB_MAINWINDOW_H
