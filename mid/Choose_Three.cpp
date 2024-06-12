#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfTestCase;
    cin >> numberOfTestCase;
    int size, sum;

    for (int t = 0; t < numberOfTestCase; t++)
    {
        cin >> size >> sum;
        int numbers[size];
        int notPossible = 1;
        for (int i = 0; i < size; i++)
            cin >> numbers[i];

        for (int i = 0; i < size; i++)
        {

            for (int j = i + 1; j < size; j++)
            {

                for (int k = j + 1; k < size; k++)
                    if (numbers[i] + numbers[j] + numbers[k] == sum)
                    {
                        cout << "YES" << endl;
                        notPossible = 0;
                        break;
                    }
                if (!notPossible)
                    break;
            }
            if (!notPossible)
                break;
        }
        cout << (notPossible ? "NO\n" : "");
    }
    return 0;
}