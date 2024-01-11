#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Type a number: "; // Type a number and press enter
    cin >> x;
    do
    {
        /* code */
        cout << "Your number is: " << x; // Display the input value
        x--;
        cout << " \n";
    } while (x >= 0);
}