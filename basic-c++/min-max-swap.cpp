
#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    cout << a << " " << b << " " << min(a, b) << " " << max(a, b) << endl;
    swap(a, b);
    cout << a << " " << b << " " << endl;

    return 0;
}