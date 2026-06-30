#include <iostream>
using namespace std;

struct Student
{
    string name;
    string grade;
    int marks;
};

int main()
{
    int n = 3;
    Student students[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Marks: ";
        cin >> students[i].marks;

        if (students[i].marks >= 90)
        {
            students[i].grade = "A";
        }
        else if (students[i].marks >= 75)
        {
            students[i].grade = "B";
        }
        else if (students[i].marks >= 60)
        {
            students[i].grade = "C";
        }
        else
        {
            students[i].grade = "D";
        }
    }

    cout << "\n----- Student Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << endl;
    }

    return 0;
}
