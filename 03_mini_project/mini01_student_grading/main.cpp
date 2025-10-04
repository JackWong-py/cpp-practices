/*# 🎯 Mini Project

**Student Grading Program**

🔹 Requirements:

* Ask user for number of students.
* For each student, input name and marks.
* Calculate grade:

  * `90–100 → A`
  * `75–89 → B`
  * `50–74 → C`
  * `< 50 → F`
* Print report like:

  ```
  John - 85 - Grade B
  Alice - 92 - Grade A
  ...
  ```
* Bonus: Find and print the **highest** and **lowest** score.*/
#include <iostream>

using namespace std;

int main()
{
    int total_student;
    cout << "This is a student grading program. " << endl;
    cout << "Enter the total number of student: " << endl;
    cin >> total_student;

    string report = ""; //This is a big string to hold all the report.

    for (int i = 0; i < total_student; i++)
    {
        string student_name, grade;
        int score;
        cout << "Enter student " << i+1 << " name: " << endl;
        cin >> student_name;
        cout << "Enter student " << i+1 << " score: " << endl;
        cin >> score;
        while (score < 0 || score > 100)
        {
            cout << "Invalid score. Please enter score within 0 - 100. " << endl;
            cin >> score;
        }

        if (score >= 90 && score <= 100)
            grade = "A";
        else if (score >= 75 && score <= 89)
            grade = "B";
        else if (score >= 50 && score <= 74)
            grade = "C";
        else
            grade = "F";

        report += student_name + " - " + to_string(score) + " - " + "Grade " + grade + "\n";
    }
    cout << "------ Student Report ------\n";
    cout << report;
    return 0;
}
