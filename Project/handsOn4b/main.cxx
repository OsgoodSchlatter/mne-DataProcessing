// Cours Data Processing
// Start code - readNuclei.cxx

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 'readNuclei' main function
int main()
{
    char *filename = "./data.txt";
    fstream f;
    f.open(filename, ios::in);
    if (f.is_open())
    {
        printf("FILE OK\n");
    }
    else
    {
        printf("opening file %s failed\n", filename);
        exit(-1);
    }
    string str, name, be;
    string names[40];
    double bindingEnergies[40];
    int i = 0;
    while (!f.eof())
    {
        getline(f, str);
        if (i >= 2)
        {
            names[i] = str.substr(0, 6);
            bindingEnergies[i] = stod(str.substr(6, 19));
        }
        i++;
    }
    f.close();
}