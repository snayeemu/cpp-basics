#include <bits/stdc++.h>
using namespace std;

int main()
{
    char aLetter;
    cin >> aLetter;

    if (int(aLetter) >= int('a') && int(aLetter) <= int('z'))
        cout << "ALPHA\nIS SMALL";
    else if (int(aLetter) >= int('A') && int(aLetter) <= int('z'))
        cout << "ALPHA\nIS CAPITAL";
    else
         cout << "IS DIGIT";

    

    return 0;
}