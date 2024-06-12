#include <bits/stdc++.h>
using namespace std;

int main() {
    int numberOfTestCases;
    cin >> numberOfTestCases;
    while (numberOfTestCases--) {
        string inputString, stringToReplace;
        cin >> inputString >> stringToReplace;

        int pos = 0;
        while ((pos = inputString.find(stringToReplace, pos)) != -1) {
            inputString.replace(pos, stringToReplace.length(), "#");
            pos += 1; 
        }

        cout << inputString << endl;
    }
    return 0;
}