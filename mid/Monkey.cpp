#include <bits/stdc++.h>
using namespace std;

void trim(char *str, int len)
{
    
    // char strCopy[100000];

 

    int newLength = 0;
    for (int i = 0; i < len; i++)
        if (' ' != str[i])
        {
            str[newLength] = str[i];
            newLength++;
        }

    // strCopy[newLength] = '\0';


    // for (int i = 0; i < newLength; i++)
    //     str[i] = strCopy[i];

    str[newLength] = '\0';
}

int main()
{
    char str[100001];

    while (cin.getline(str, 100001))
    {
        int length = strlen(str);
        sort(str, str + length);
        trim(str, length);

        cout << str << endl;
    }

    return 0;
}