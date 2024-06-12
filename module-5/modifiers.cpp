#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Hello", str2 = "ABC";
    cout << (str1 += str2) << endl;
    str1.pop_back();
    cout << str1 << endl;
    str2 = str2 + str1;
    cout << str2 << endl; 
    

    return 0;
}