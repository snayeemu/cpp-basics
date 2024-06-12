#include <bits/stdc++.h>
using namespace std;

void printWordsReverse(stringstream &words)
{
    string word;
    if (!(words >> word))
        return;
    printWordsReverse(words);
    cout << word << endl;
}

int main()
{
    string str;
    getline(cin, str);

    stringstream words(str);

    printWordsReverse(words);
    return 0;
}