#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfTestCase;
    cin >> numberOfTestCase;
    int size;
    cin >> size;

    int numbers[size];

    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    int minimum = numbers[0] + numbers[1] + 1;

    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
        {
            int sum = numbers[i] + numbers[j] + (j - i);
            minimum = minimum < sum ? minimum : sum;
        }

    cout << minimum << endl;

    return 0;
}