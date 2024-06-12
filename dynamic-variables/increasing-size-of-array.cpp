
#include <bits/stdc++.h>
using namespace std;



int main()
{

    int *originalArray = new int[3];

    for (int i = 0; i < 3; i++)
        cin >> originalArray[i];
    
    int *duplicateArray = new int[3];
    for(int i = 0; i < 3; i++)
        duplicateArray[i] = originalArray[i];

    delete[] originalArray;
    originalArray = new int[5];
    for(int i= 0; i < 3; i++)
        originalArray[i] = duplicateArray[i];
    
    delete[] duplicateArray;
    for(int i= 0; i < 5; i++)
        cout << originalArray[i] << " ";


    return 0;
}