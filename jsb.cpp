//
// Created by 周神 on 2018/4/2.
//
//1-剪刀, 2-石头, 3-布
#include "jsb.h"

Choice::Choice() {
    choice = 0;
}

int Choice::getChoice() {
    return choice;
}

void Choice::setChoice(const int &c) {
    choice = c;
}

StartGame::StartGame() : Man(), Computer() {
    sumMan = 0;
    sumComputer = 0;
}

void StartGame::setMan(int i) {
    Man.setChoice(i);
}

void StartGame::setComputer(int i) {
    Computer.setChoice(i);
}

void StartGame::setSumMan(int a) {
    sumMan = a;
}

void StartGame::setSumComputer(int a) {
    sumComputer = a;
}

int StartGame::getSumMan() {
    return sumMan;
}

int StartGame::getSumComputer() {
    return sumComputer;
}

void StartGame::clearSumMan() {
    sumMan = 0;
}

void StartGame::clearSumComputer() {
    sumComputer = 0;
}

int StartGame::whoWins() {
    //0-draw, -1-computer win, 1-person win
    int a = Man.getChoice();
    int b = Computer.getChoice();
    if(a == b)
        return 0;
    else if(a > b){
        if(a - b == 1){
            ++ sumMan;
            return 1;
        }else{
            ++ sumComputer;
            return -1;
        }
    }else{
        if(b - a == 1){
            ++ sumComputer;
            return -1;
        }else{
            ++ sumMan;
            return 1;
        }
    }
}

int StartGame::finalResult() {
    if(sumMan == sumComputer)
        return 0;
    else if(sumMan > sumComputer)
        return 1;
    else
        return -1;
}


