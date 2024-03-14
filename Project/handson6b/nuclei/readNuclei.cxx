// Cours Data Processing
// Start code - readNuclei.cxx

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// hello
// 'readNuclei' main function
int main()
{
  string filename = "nuclei.txt";
  ifstream myFile(filename);
  if (!myFile.is_open())
  {
    cerr << "Cannot open file " << filename << endl;
    return 1;
  }

  // Add printing a message that myFile was open successfully
  cout << "File was open successfully." << endl;

  // Read two lines with comments
  string commentLine;
  getline(myFile, commentLine);
  getline(myFile, commentLine);

  int counter = 0;
  while (!myFile.eof())
  {
    // Define variables to hold data
    int a;
    int z;
    string name;
    string halfLife;
    double bindingEnergy;

    // Read data of one line
    myFile >> a >> z >> name >> halfLife >> bindingEnergy;

    // Control printing
    cout << "Read: " << a << " " << z << " " << name << " " << halfLife << " " << bindingEnergy << endl;

    ++counter;
  }

  cout << "Read " << counter << " nuclei." << endl;
}
