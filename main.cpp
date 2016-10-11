#include <iostream>
#include "CWindow.h"
#include "CViewWindowInfo.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "\tHello, user!" << endl << endl;

    CWindow* window1 = new CWindow(2146);
    CWindow* window2 = new CWindow(2147, 40);
    CWindow* window3 = new CWindow(2148, 57, 757);
    CWindow* window4 = new CWindow(2149, 68, 668, 50);
    CWindow* window5 = new CWindow(2150, 35, 935, 47, 447);

    CViewWindowInfo view1(window1);
    CViewWindowInfo view2(window2);
    CViewWindowInfo view3(window3);
    CViewWindowInfo view4(window4);
    CViewWindowInfo view5(window5);

	delete window1, window2, window3, window4, window5;

    return 0;
}