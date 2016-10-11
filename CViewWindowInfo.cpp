//
// Created by Илья Яновой on 17.09.2016.
//
#include <iostream>
#include "CViewWindowInfo.h"

using namespace std;

/**
* Конструктор без параметров
* @return
*/
CViewWindowInfo::CViewWindowInfo() {
    std::cout << "Нет входящих данных! " << endl;
}

/**
* Конструктор с 1 параметром
* @param window экземпляр класса CWindow
* @return
*/
CViewWindowInfo::CViewWindowInfo(CWindow *window) {
    setlocale(LC_ALL, "Russian");
    cout << "\tID window: " << window->idWindow << endl;
    cout << "\tStart point on X: " << window->positionX1 << endl;
    cout << "\tEnded point on X: " << window->positionX2 << endl;
    cout << "\tStart point on Y: " << window->positionY1 << endl;
    cout << "\tEnded point on Y: " << window->positionY2 << endl << endl;
}

