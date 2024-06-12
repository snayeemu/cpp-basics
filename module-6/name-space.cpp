#include <bits/stdc++.h>
using namespace std;

namespace Persons
{
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

    Person *nayeem = new Person("Nayeem", 23);
    Person *galib = new Person("Galib", 23);
}

using namespace Persons;

int main()
{

    cout << nayeem->name << endl;

    return 0;
}