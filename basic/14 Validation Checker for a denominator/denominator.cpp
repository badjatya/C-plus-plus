/* Take two user inputs and check id denominator is valid or not if valid then find the dividend */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the First Number: ";
    cin >> a;

    cout << "Enter the Second Number: ";
    cin >> b;

    if (b == 0)
        cout << "Invalid Denominator " << endl;
    else
    {
        c = a / b;
        cout << "Valid Denominator " << endl;
        cout << "Output is: " << c << endl;
    }
    return 0;
}