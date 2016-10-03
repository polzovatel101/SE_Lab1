//
// Created by Илья Яновой on 17.09.2016.
//

#include <iostream>
using namespace std;
#include "CWindow.h"

	/**
	* Конструктор без параметров
	* @return
	*/
	CWindow::CWindow() {
        int idWindow = 0;
		int positionX1 = 0;
		int positionX2 = 0;
		int positionY1 = 0;
		int positionY2 = 0;
    }

	/**
	* Конструктор с 1 параметром
	* @param idWindow уникальный идентификатор окна
	* @return
	*/
	CWindow::CWindow(int idWindow) {
        this->idWindow = idWindow;
		positionX1 = 0;
		positionX2 = 0;
		positionY1 = 0;
		positionY2 = 0;
    }

	/**
	* Конструктор с 2 параметрами
	* @param idWindow уникальный идентификатор окна
	* @param positionX1 Начальная точка по оси Х
	* @return
	*/
	CWindow::CWindow(const int idWindow, int positionX1) {
        this->idWindow = idWindow;
        this->positionX1 = positionX1;
        positionX2 = 0;
        positionY1 = 0;
        positionY2 = 0;
    }

	/**
	* Конструктор с 3 параметрами
	* @param idWindow уникальный идентификатор окна
	* @param positionX1 Начальная точка по оси Х
	* @param positionX2 Конечная точка по оси Х
	* @return
	*/
	CWindow::CWindow(const int idWindow, int positionX1, int positionX2) {
        this->idWindow = idWindow;
        this->positionX1 = positionX1;
        this->positionX2 = positionX2;
        positionY1 = 0;
        positionY2 = 0;
    }

	/**
	* Конструктор с 4 параметрами
	* @param idWindow уникальный идентификатор окна
	* @param positionX1 Начальная точка по оси Х
	* @param positionX2 Конечная точка по оси Х
	* @param positionY1 Начальная точка по оси Y
	* @return
	*/
	CWindow::CWindow(const int idWindow, int positionX1, int positionX2, int positionY1) {
        this->idWindow = idWindow;
        this->positionX1 = positionX1;
        this->positionX2 = positionX2;
        this->positionY1 = positionY1;
        positionY2 = 0;
    }

	/**
	* Конструктор с 5 параметрами
	* @param idWindow уникальный идентификатор окна
	* @param positionX1 Начальная точка по оси Х
	* @param positionX2 Конечная точка по оси Х
	* @param positionY1 Начальная точка по оси Y
	* @param positionY2 Конечная точка по оси Y
	* @return
	*/
	CWindow::CWindow(const int idWindow, int positionX1, int positionX2, int positionY1, int positionY2) {
        this->idWindow = idWindow;
        this->positionX1 = positionX1;
        this->positionX2 = positionX2;
        this->positionY1 = positionY1;
        this->positionY2 = positionY2;
    }

	/**
	* Деструктор класса CWindow
	*/
	CWindow::~CWindow()
	{
		cout << "\tdestroy it!\n";
	}
