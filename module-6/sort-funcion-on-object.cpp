#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id, totalMarks;
    char name[100];
    char section;
};

bool cmp(Student student1, Student student2)
{
    return student1.totalMarks > student2.totalMarks || (student1.totalMarks == student2.totalMarks && student1.id < student2.id);
}

int main()
{
    int numberOfTestCase;
    cin >> numberOfTestCase;

    Student student[3];

    for (int i = 0; i < numberOfTestCase; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> student[i].id >> student[i].name >> student[i].section >> student[i].totalMarks;
        }

        sort(student, student + 3, cmp);

        cout << student[0].id << " " << student[0].name << " " << student[0].section << " " << student[0].totalMarks << endl;
    }

    return 0;
}