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
    cin >> x;                  // Get user input from the keyboard
    while (x >= 0)
    {
        cout << "Your number is: " << x; // Display the input value
        x--;
        cout << " \n";
    }
    int var1 = 2;
    int var2 = 3;
    addition(var1, var2);
    int mon_entier = 67;
    float mon_flottant = 0.8;
    char *caractere = "hello";
    printf("ton text %d, %f, %s", mon_entier, mon_flottant, caractere);
}
