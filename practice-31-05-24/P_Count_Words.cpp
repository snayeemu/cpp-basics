#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    stringstream words(str);
    int numberOfWords = 0;
    string word;

    while (words >> word)
    {
        int length = word.length();

        for (int i = 0; i < length; i++)
            if (isalpha((word[i])))
            {
                numberOfWords++; 
                break;
            }
    }

    cout << numberOfWords << endl;

    return 0;
}