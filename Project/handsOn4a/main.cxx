#include <iostream>
using namespace std;
#include "./getArea.h"

int main()
{
    double radius1 = 1.1;

    // call function getArea()
    double area1 = getArea(radius1);
    cout << "area 1 is " << area1 << endl;

    // call function getArea()
    double area2 = getArea(2.2);
    cout << "area 2 is " << area2 << endl;

    // call function getArea()
    cout << "area 3 is " << getArea(3.3) << endl;
    test_getRectangleArea();
}