//
// Created by 周神 on 2018/4/2.
//
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "jsb.h"
#include <QDebug>

QString word[3] = {"剪刀", "石头", "布"};
QString result[3] = {"电脑胜", "平局", "人胜"};

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    setWindowTitle("剪刀石头布");
    ui->Result_tab->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->Restart->setVisible(false);
    ui->Quit->setVisible(false);
    times = 0;

//    connect(ui->Rock, &QPushButton::clicked, this, &MainWindow::on_Rock_clicked, Qt::UniqueConnection);
//    connect(ui->Paper, &QPushButton::clicked, this, &MainWindow::on_Paper_clicked, Qt::UniqueConnection);
//    connect(ui->Scissors, &QPushButton::clicked, this, &MainWindow::on_Scissors_clicked, Qt::UniqueConnection);

    connect(ui->Quit, &QPushButton::clicked, this, &QMainWindow::close);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::checkTimes() {
    if(times == 3){
        ui->Scissors->setEnabled(false);
        ui->Rock->setEnabled(false);
        ui->Paper->setEnabled(false);
        ui->Result_tab->setItem(0, 3, new QTableWidgetItem(QString::number(a.getSumMan())));
        ui->Result_tab->setItem(1, 3, new QTableWidgetItem(QString::number(a.getSumComputer())));
        int res = a.finalResult();
        ui->Result_tab->setItem(2, 3, new QTableWidgetItem(result[res + 1]));
        ui->Restart->setVisible(true);
        ui->Quit->setVisible(true);
    }
}

void MainWindow::on_Rock_clicked() {
    //qDebug() << times << "rock";
    a.setMan(2);
    ui->Result_tab->setItem(0,times, new QTableWidgetItem(word[1]));
    int computerChoice = rd() % 3 + 1;
    a.setComputer(computerChoice);
    ui->Result_tab->setItem(1,times, new QTableWidgetItem(word[computerChoice - 1]));
    int res = a.whoWins();
    ui->Result_tab->setItem(2,times, new QTableWidgetItem(result[res + 1]));
    ++ times;
    MainWindow::checkTimes();
}

void MainWindow::on_Paper_clicked() {
    //qDebug() << times << "paper";
    a.setMan(3);
    ui->Result_tab->setItem(0,times, new QTableWidgetItem(word[2]));
    int computerChoice = rd() % 3 + 1;
    a.setComputer(computerChoice);
    ui->Result_tab->setItem(1,times, new QTableWidgetItem(word[computerChoice - 1]));
    int res = a.whoWins();
    ui->Result_tab->setItem(2,times, new QTableWidgetItem(result[res + 1]));
    ++ times;
    MainWindow::checkTimes();
}

void MainWindow::on_Scissors_clicked() {
    //qDebug() << times << "scissors";
    a.setMan(1);
    ui->Result_tab->setItem(0,times, new QTableWidgetItem(word[0]));
    int computerChoice = rd() % 3 + 1;
    a.setComputer(computerChoice);
    ui->Result_tab->setItem(1,times, new QTableWidgetItem(word[computerChoice - 1]));
    int res = a.whoWins();
    ui->Result_tab->setItem(2,times, new QTableWidgetItem(result[res + 1]));
    ++ times;
    MainWindow::checkTimes();
}

void MainWindow::on_Restart_clicked() {
    times = 0;
    ui->Result_tab->clearContents();
    a.clearSumMan();
    a.clearSumComputer();
    ui->Scissors->setEnabled(true);
    ui->Rock->setEnabled(true);
    ui->Paper->setEnabled(true);
    ui->Restart->setVisible(false);
    ui->Quit->setVisible(false);
}

