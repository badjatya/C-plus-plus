/* Calculate Net salary    */

/* 
Formula 
netSalary = basicSalary + (basicSalary * percentageOfAllowance) - (basicSalary * percentageOfDeduction);
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float netSalary, basicSalary, percentageOfAllowance, percentageOfDeduction;

    cout << "Enter the Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter the Percentage Of Allowance: ";
    cin >> percentageOfAllowance;

    cout << "Enter the Percentage Of Deduction: ";
    cin >> percentageOfDeduction;

    netSalary = basicSalary + (basicSalary * percentageOfAllowance) - (basicSalary * percentageOfDeduction);

    cout << "The Net Salary is: " << netSalary << endl;

    return 0;
}