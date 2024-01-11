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
    for (int i = 0; i <= x; i++)
    {
        cout << "Your number is: " << i; // Display the input value
        cout << " \n";
        if (i >= 2)
        {
            continue;
        }
        cout << "OK  ";
    }
}
