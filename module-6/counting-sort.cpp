#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int frequency[26] = {0};

    for (char ch : str)
        frequency[ch - 'a']++;

    for (int i = 'a'; i <= 'z'; i++)
        for (int j = 0; j < frequency[i - 'a']; j++)
            cout << char(i);

    return 0;
}