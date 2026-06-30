#include <iostream>
using namespace std;

struct Employee
{
    string name;
    string designation;
    float salary;
};

int main()
{
    int n = 3;
    Employee employees[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for employee " << i + 1 << endl;
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Designation: ";
        cin >> employees[i].designation;
        cout << "Salary: ";
        cin >> employees[i].salary;
    }

    cout << "\n----- Employee Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << employees[i].name << endl;
        cout << "Designation: " << employees[i].designation << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << endl;
    }

    return 0;
}
