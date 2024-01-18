// Cours Data Processing
// Start code - values.cxx

#include <iostream>
#include <vector>
#include <list>

using namespace std;

// Use g++ -std=c++11 <filename> when compiling if encountering this error
// "non-aggregate type 'vector<double>' cannot be initialized with an initializer list
//     vector<double>"

int main()
{
    list<double> myValues = {-7.19868, -3.03736, 7.06005, 0.99885, 5.91401,
                             -0.73840, -5.52073, 8.35327, -9.30214, -4.44040,
                             -0.62139, 6.36694, -0.51389, -5.46185, -2.14391,
                             4.82466, 1.92449, -4.30279, 1.67377, -4.03894};

    // Control printing
    for (auto i : myValues)
    {
        cout << i << ' ';
    }
    cout << "\n";
    // find max and min
    double min,
        max;

    while (1)
    {
        if (myValues.size() == 0)
        {
            break;
        }

        if (myValues.front() > max)
        {
            max = myValues.front();
            myValues.pop_front();
            if (myValues.size() == 0)
            {
                break;
            }
        }
        if (myValues.front() < min)
        {
            min = myValues.front();
            myValues.pop_front();
            if (myValues.size() == 0)
            {
                break;
            }
        }
        myValues.pop_front();
    }
    printf("min = %f,max =%f\n", min, max);
}
