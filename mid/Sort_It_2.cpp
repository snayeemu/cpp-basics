#include <bits/stdc++.h>
using namespace std;

int *sort_it(int size)
{
    int *numbers = new int[size];
    for (int i = 0; i < size; i++)
        cin >> numbers[i];

    std::sort(numbers, numbers + size, greater<>());
    return numbers; 
}

int main()
{
    int size;
    cin >> size;
    int *numbers = sort_it(size);

    for(int i = 0; i < size; i++)
        cout << numbers[i] << " ";

    return 0;
}