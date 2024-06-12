#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    stringstream words(str);

    string word;

    bool first = true;

    while (words >> word)
    {

        reverse(word.begin(), word.end());

        if(!first)
            cout << " ";

        cout << word;

        // if (!words.str().empty() && !first)
        //     cout << " ";
        
        first = false;

    }

    return 0;
}