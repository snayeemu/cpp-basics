#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int classNumber;
    char section;
    int id;
};

int main()
{
    int numberOfStudents;

    cin >> numberOfStudents;

    Student students[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++)
        cin >> students[i].name >> students[i].classNumber >> students[i].section >> students[i].id;

    for (int i = 0; i < numberOfStudents / 2; i++)
    {
        char temp = students[i].section;
        students[i].section = students[numberOfStudents - 1 - i].section;
        students[numberOfStudents - 1 - i].section = temp;
    }

    for (int i = 0; i < numberOfStudents; i++)
        cout << students[i].name << " " << students[i].classNumber << " " << students[i].section << " " << students[i].id << endl;

    return 0;
}