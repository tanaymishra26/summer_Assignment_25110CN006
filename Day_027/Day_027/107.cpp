#include <iostream>
using namespace std;

struct Salary
{
    int empId;
    string name;
    float basicSalary;
    float allowance;
    float netSalary;
};

int main()
{
    int n = 3;
    Salary employees[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for employee " << i + 1 << endl;
        cout << "Employee ID: ";
        cin >> employees[i].empId;
        cout << "Name: ";
        cin >> employees[i].name;
        cout << "Basic Salary: ";
        cin >> employees[i].basicSalary;
        cout << "Allowance: ";
        cin >> employees[i].allowance;
        employees[i].netSalary = employees[i].basicSalary + employees[i].allowance;
    }

    cout << "\n----- Salary Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Employee ID: " << employees[i].empId << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Basic Salary: " << employees[i].basicSalary << endl;
        cout << "Allowance: " << employees[i].allowance << endl;
        cout << "Net Salary: " << employees[i].netSalary << endl;
        cout << endl;
    }

    return 0;
}
