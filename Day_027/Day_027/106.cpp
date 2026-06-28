#include <iostream>
using namespace std;

struct Employee
{
    int empId;
    string name;
    string department;
};

int main()
{
    int n = 3;
    Employee employees[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for employee " << i + 1 << endl;
        cout << "Employee ID: ";
        cin >> employees[i].empId;
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Department: ";
        cin >> employees[i].department;
    }

    cout << "\n----- Employee Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Employee ID: " << employees[i].empId << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Department: " << employees[i].department << endl;
        cout << endl;
    }

    return 0;
}
