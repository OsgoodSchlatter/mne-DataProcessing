#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int result = a + b + c;
    {
        a = 0;
        b = 1;
        c = 2;
        int result = a + b + c;
    }
    cout << result << endl;
}