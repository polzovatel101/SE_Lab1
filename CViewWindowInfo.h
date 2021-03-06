//
// Created by Илья Яновой on 17.09.2016.
//
#include "CWindow.h"
#ifndef YANOVOY01_CVIEWWINDOWINFO_H
#define YANOVOY01_CVIEWWINDOWINFO_H



class CViewWindowInfo {
public:
    /**
     * Конструктор без параметров
     * @return
     */
    CViewWindowInfo();

    /**
     * Конструктор с 1 параметром
     * @param window экземпляр класса CWindow
     * @return
     */
    CViewWindowInfo(CWindow *window);

public:
    void viewInfo();
};


#endif //YANOVOY01_CVIEWWINDOWINFO_H
