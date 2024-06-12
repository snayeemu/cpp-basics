#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id, totalMarks;
    char name[100];
    char section;
};

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

        int topper = student[0].totalMarks;

        for (int i = 0; i < 3; i++)
            if (student[i].totalMarks > topper)
                topper = student[i].totalMarks;

        for (int i = 0; i < 3; i++)
            if (student[i].totalMarks == topper)
            {
                cout << student[i].id << " " << student[i].name << " " << student[i].section << " " << student[i].totalMarks << endl;
                break;
            }
    }

    return 0;
}