#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfElements;
    cin >> numberOfElements;
    int numbers[numberOfElements];
    int numbersCopy[numberOfElements];
    int palindrome = 1;

    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> numbers[i];
        numbersCopy[i] = numbers[i];
    }

    reverse(numbersCopy, numbersCopy + numberOfElements);

    for (int i = 0; i < numberOfElements; i++)
        if (numbersCopy[i] != numbers[i])
        {
            palindrome = 0;
            break;
        }
    
    cout << (palindrome ? "YES" : "NO");

    return 0;
}