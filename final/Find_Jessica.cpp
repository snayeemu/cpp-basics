#include <bits/stdc++.h>
using namespace std;

int main()
{
    string names;
    getline(cin, names);

    stringstream words(names);
    bool found = false;
    string name;

    while (words >> name)
        if (name == "Jessica")
        {
            found = true;
            break;
        }

    cout << (found ? "YES" : "NO") << endl;

    return 0;
}