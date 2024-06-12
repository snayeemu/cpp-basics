#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *nayeem = new Person("Nayeem", 23);
    Person *galib = new Person("Galib", 23);

    cout << nayeem->name << " " << galib->name << endl;

    *nayeem = *galib;

    delete nayeem;
    
    cout << galib->name << endl;

    return 0;
}