// Cours Data Processing
// Start code - values.cxx

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Use g++ -std=c++11 <filename> when compiling if encountering this error
// "non-aggregate type 'vector<double>' cannot be initialized with an initializer list
//     vector<double>"

int main()
{
    string line;
    ifstream file("mailingList.txt");
    string mail_short;
    string mail_long;
    if (file.is_open())
    {
        getline(file, line);
        mail_short = line;
        mail_long = line;

        while (getline(file, line))
        {
            if (mail_long.length() < line.length())
            {
                mail_long = line;
            }
            if (mail_short.length() > line.length())
            {
                mail_short = line;
            }
        }
        cout << mail_short << "\n";
        cout << mail_long << "\n";

        file.close();
    }
    return 0;
}