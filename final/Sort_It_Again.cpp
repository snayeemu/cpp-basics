#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int classNumber;
    char section;
    int id;
    int mathMarks;
    int englishMarks;
};

bool cmp(Student &a, Student &b)
{
    return a.englishMarks > b.englishMarks || (a.englishMarks == b.englishMarks && a.mathMarks > b.mathMarks) || (a.mathMarks == b.mathMarks && a.englishMarks == b.englishMarks && a.id < b.id);
}

int main()
{
    int numberOfStudents;

    cin >> numberOfStudents;

    Student students[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++)
        cin >> students[i].name >> students[i].classNumber >> students[i].section >> students[i].id >> students[i].mathMarks >> students[i].englishMarks;

    sort(students, students + numberOfStudents, cmp);

    for (int i = 0; i < numberOfStudents; i++)
        cout << students[i].name << " " << students[i].classNumber << " " << students[i].section << " " << students[i].id << " " << students[i].mathMarks << " " << students[i].englishMarks << endl;

    return 0;
}