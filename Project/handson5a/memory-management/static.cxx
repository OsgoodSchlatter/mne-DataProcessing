// Cours Data Processing
// Start code - memory managemnt - static.cxx
#include "myInt.h"
#include <iostream>

using namespace std;

void foo()
{
  static int nofCalls = 0;
  // initialized with the first call
  // and destroyed at the end of the program

  ++nofCalls;
  // increment value with each call
  cout << "Calling " << nofCalls << " times" << endl;
}

int main()
{
  printf("hey\n");
  foo();
  foo();
  printf("hey end\n");
}
