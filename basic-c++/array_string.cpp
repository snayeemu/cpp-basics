
#include <iostream>
using namespace std;

int main()
{

    char s[100];
    int a;
    cin >> a;
    getchar();
    cin.getline(s, 100);
    cout << a << "\n" << s << endl;

    return 0;
}