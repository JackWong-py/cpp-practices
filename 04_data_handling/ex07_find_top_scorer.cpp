/*7. **Find Top Scorer**

   * Using an array of students, find who has the highest grade.*/
#include <iostream>

using namespace std;

struct Student
{
    string name;
    int age;
    double grade;
};
Student add_new_student(int index)
{
    Student student;
    cout << "\n---- Enter student data " << index + 1 << " ----\n";
    cout << "Name: " << endl;
    cin >> ws;
    getline(cin, student.name);
    cout << "Age: " << endl;
    cin >> student.age;
    cout << "Grade: " << endl;
    cin >> student.grade;
    return student;
}
void display_student(const Student& student)
{
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Grade: " << student.grade << endl;
}
int main()
{
    cout << "This program store and display student data. " << endl;

    const int SIZE = 3;
    Student student[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        student[i] = add_new_student(i);
    }

    cout << "\n---Student Data---\n";
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Student #" << i + 1 << endl;
        display_student(student[i]);
    }

    cout << "\n---Highest Grade Student---\n";
    Student highest_grade = student[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (student[i].grade > highest_grade.grade)
            highest_grade = student[i];
    }
    display_student(highest_grade);
    return 0;
}
