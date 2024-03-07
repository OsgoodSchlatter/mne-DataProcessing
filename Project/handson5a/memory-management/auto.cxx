// Cours Data Processing
// Start code - memory managemnt - auto.cxx
#include "myInt.h"
#include <iostream>

using namespace std;

int main()
{
  int localVar = 8;

  // localVar's scope begins after declaration
  {
    localVar = 88;
    int blockVar = 99;
    // blockVar's scope begins
    cout << blockVar << endl;
  }

  // cout << blockVar << endl;
  // Error: use of undeclared identifier 'blockVar'
  // blockVar's scope ends and deallocated
  // when execution leaves the block
  cout << localVar << endl;
}
