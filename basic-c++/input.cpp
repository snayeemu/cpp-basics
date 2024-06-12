#include <iostream>
using namespace std;

int main()
{
    // int anInteger;
    // cin>>anInteger;
    // cout<<"Integer is: "<<anInteger;
    char c;
    cout << "Enter an character: ";
    cin >> c;
    cout << "ASCII value of the character is: " << int(c) << endl;
    int a = 10;
    long long int longLongInt = (long long int)(a); //not naccessary
    cout << "This is a long long int: " << longLongInt << endl;
}