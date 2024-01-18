// Cours Data Processing
// Start code - values.cxx

#include <iostream>
#include <vector>

using namespace std;

// Use g++ -std=c++11 <filename> when compiling if encountering this error
// "non-aggregate type 'vector<double>' cannot be initialized with an initializer list
//     vector<double>"

int main()
{
    vector<double> myValues = {-7.19868, -3.03736, 7.06005, 0.99885, 5.91401,
                               -0.73840, -5.52073, 8.35327, -9.30214, -4.44040,
                               -0.62139, 6.36694, -0.51389, -5.46185, -2.14391,
                               4.82466, 1.92449, -4.30279, 1.67377, -4.03894};

    // Control printing
    cout << myValues[0] << endl;

    // find max and min
    double min, max;
    for (double cur = 0; cur < myValues.size(); cur++)
    {
        if (myValues[cur] > max)
        {
            max = myValues[cur];
        }
        if (myValues[cur] < min)
        {
            min = myValues[cur];
        }
    }
    printf("min = %f,max =%f\n", min, max);
}
