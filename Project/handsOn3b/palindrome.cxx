// Cours Data Processing
// Start code - palindrome.cxx

#include <string>
#include <iostream>
#include <cctype>
#include <cctype>

using namespace std;

int main()
{
    string input;

    cout << "Input a string, please:";

    getline(cin, input);

    if (input.empty())
    {
        cout << "Empty string is NOT a palindrome." << endl;
        return 1;
    }

    // Print the string read in character by character
    for (int i = 0; i < input.length(); ++i)
    {
        cout << input[i];
    }
    cout << endl;

    // Check whether the input string is a word palindrome.
    // A word or group of words that is the same when you read it forwards
    // from the beginning or backwards from the end.
    bool isPalindrome = true;

    int missed_space = 0;

    string modifiedInput;
    int count = 0;

    for (int cur = 0; cur < input.length(); cur++)
    {
        if (isspace(input[cur]))
        {
            missed_space++;
            continue;
        }
        modifiedInput[count] = tolower(input[cur]);
        printf(" modfied [%d] = %d\n", count, modifiedInput[count]);
        count++;
    }

    int i = 0;                                 // first characters
    int j = input.length() - 1 - missed_space; // last character

    while (i < j)
    {
        if (modifiedInput[i] != modifiedInput[j])
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
    {
        cout << "is a palindrome." << endl;
    }
    else
    {
        cout << "is NOT a palindrome." << endl;
    }
}
