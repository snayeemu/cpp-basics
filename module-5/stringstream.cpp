#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    stringstream words;
    words << str;
    string word;
    while(words >> word)
        cout << word << endl;

    

    return 0;
}