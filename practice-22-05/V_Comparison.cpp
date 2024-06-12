#include <bits/stdc++.h>
using namespace std;

int main()
{
    int char1, char2;
    char comparator;

    cin >> char1 >> comparator >> char2;

    if (comparator == '>')
        if (char1 > char2)
            cout << "Right";
        else
            cout << "Wrong";
    else if (comparator == '<')
        if (char1 < char2)
            cout << "Right";
        else
            cout << "Wrong";
    else if (comparator == '=')
        if (char1 == char2)
            cout << "Right";
        else
            cout << "Wrong";

    return 0;
}