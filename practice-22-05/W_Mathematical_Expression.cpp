#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, sum;
    char opr;
    char equalSign;

    cin >> num1 >> opr >> num2 >> equalSign >> sum;

    if (opr == '+')
        if (num1 + num2 == sum)
            cout << "Yes";
        else
            cout << num1 + num2;
    else if (opr == '-')
        if (num1 - num2 == sum)
            cout << "Yes";
        else
            cout << num1 - num2;
    else if (opr == '*')
        if (num1 * num2 == sum)
            cout << "Yes";
        else
            cout << num1 * num2;

    return 0;
}