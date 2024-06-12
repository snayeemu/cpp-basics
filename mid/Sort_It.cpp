#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int numbers[size];

    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    sort(numbers, numbers + size);

    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    cout << endl;
    
    sort(numbers, numbers + size, greater<>());

    for (int i = 0; i < size; i++)
        cout << numbers[i] << " " ;

    return 0;
}