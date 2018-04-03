//
// Created by 周神 on 2018/4/2.
//

#ifndef QT_JSB_JSB_H
#define QT_JSB_JSB_H

#include <QCoreApplication>
#include <random>

//QString word[3] = {"石头", "剪刀", "布"};
//QString result[3] = {"电脑胜", "平局", "人胜"};

class Choice{
private:
    int choice;
public:
    Choice();

    int getChoice();

    void setChoice(const int &c);

//    void printChoice() {
//        int i = choice;
//        if(i == 3)
//            cout << setiosflags(ios::left) << setw(20) << words[i - 1];
//        else
//            cout << setiosflags(ios::left) << setw(20) << words[i - 1];
//    }
};

class StartGame : public Choice{
private:
    Choice Man;
    Choice Computer;
    int sumMan;
    int sumComputer;
public:
    StartGame();

    void setMan(int i);

    void setComputer(int i);

//    void printChoice() {
//        Man.printChoice();
//        Computer.printChoice();
//    }

    void setSumMan(int a);

    void setSumComputer(int a);

    int getSumMan();

    int getSumComputer();

    void clearSumMan();

    void clearSumComputer();

    int whoWins();

    int finalResult();
};

#endif //QT_JSB_JSB_H
