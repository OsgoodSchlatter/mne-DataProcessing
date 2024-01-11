#include <iostream>

#include <stdio.h>

using namespace std;

int addition(int entier1, int entier2)
{
    return (entier1 + entier2);
}
int main()
{
    int x;
    cout << "Type a number: "; // Type a number and press enter
    cin >> x;
    int count = 0; // Get user input from the keyboard
    while (x >= 0)
    {
        cout << "Your number is: " << x; // Display the input value
        x--;
        cout << " \n";
        count++;
        if (count == 5)
        {
            break;
        }
    }
}
