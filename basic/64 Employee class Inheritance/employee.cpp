/* TODO: Employee class taking input id and name create two base class full time and part time */

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeId;
    string employeeName;

public:
    Employee(int employeeId = 0, string employeeName = "")
    {
        this->employeeId = employeeId;
        this->employeeName = employeeName;
    }
    void setEmployeeName(string name);
    void setEmployeeId(int id);

    string getEmployeeName();
    int getEmployeeId();
};

void Employee::setEmployeeName(string name)
{
    this->employeeName = name;
}
void Employee::setEmployeeId(int id)
{
    this->employeeId = id;
}

string Employee::getEmployeeName()
{
    return employeeName;
}
int Employee::getEmployeeId()
{
    return employeeId;
}

class fullTimeEmployee : public Employee
{
private:
    int salary;

public:
    fullTimeEmployee(int employeeId, string employeeName, int salary) : Employee(employeeId, employeeName)
    {
        this->salary = salary;
    }

    void setSalary(int wage);
    int getSalary();
};

void fullTimeEmployee::setSalary(int salary)
{
    this->salary = salary;
}
int fullTimeEmployee::getSalary()
{
    return salary;
}

class partTimeEmployee : public Employee
{
private:
    int wage;

public:
    partTimeEmployee(int employeeId, string employeeName, int wage) : Employee(employeeId, employeeName)
    {
        this->wage = wage;
    }

    void setWage(int wage);
    int getWage();
};

void partTimeEmployee::setWage(int wage)
{
    this->wage = wage;
}
int partTimeEmployee::getWage()
{
    return wage;
}

int main()
{
    fullTimeEmployee f(101, "Archit", 10000);
    partTimeEmployee p(201, "Roh", 500);

    cout << "Employee Name: " << f.getEmployeeName() << endl;
    cout << "Employee Id: " << f.getEmployeeId() << endl;
    cout << "Employee Salary: " << f.getSalary() << endl;

    cout << endl;

    cout << "Employee Name: " << p.getEmployeeName() << endl;
    cout << "Employee Id: " << p.getEmployeeId() << endl;
    cout << "Employee Wage: " << p.getWage() << endl;

    return 0;
}