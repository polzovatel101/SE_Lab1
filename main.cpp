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

    //view1.viewInfo();

    CViewWindowInfo view2(window2);

    //view2.viewInfo();

    CViewWindowInfo view3(window3);

    //view3.viewInfo();

    CViewWindowInfo view4(window4);

    //view4.viewInfo();

    CViewWindowInfo view5(window5);

    //view5.viewInfo();
	delete window1;
	//system("PAUSE");
    return 0;
}