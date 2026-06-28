#include <iostream>
using namespace std;

struct Marksheet
{
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;
    int total;
    float percentage;
};

int main()
{
    int n = 3;
    Marksheet students[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Roll Number: ";
        cin >> students[i].rollNo;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Marks in Subject 1: ";
        cin >> students[i].marks1;
        cout << "Marks in Subject 2: ";
        cin >> students[i].marks2;
        cout << "Marks in Subject 3: ";
        cin >> students[i].marks3;
        students[i].total = students[i].marks1 + students[i].marks2 + students[i].marks3;
        students[i].percentage = (float)students[i].total / 3;
    }

    cout << "\n----- Marksheets -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Roll Number: " << students[i].rollNo << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Total Marks: " << students[i].total << endl;
        cout << "Percentage: " << students[i].percentage << endl;
        cout << endl;
    }

    return 0;
}
