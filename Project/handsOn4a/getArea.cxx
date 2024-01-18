// Cours Data Processing
// Start code - getArea.cxx
#include "./getArea.h"
#include <iostream>
using namespace std;

// Function Definition
// Return the area of a circle given its radius
double getArea(double radius)
{
    return radius * radius * PI;
}

double getRectangleArea(double a, double b)
{
    return a * b;
}

// Test for function1()
// You would need to write these even when using a framework
void test_getRectangleArea()
{
    return assert(getRectangleArea(3, 4) == 12);
}
