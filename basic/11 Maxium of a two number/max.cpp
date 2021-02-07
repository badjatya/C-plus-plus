/* Find out the max number from two numbers   */

#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    cout << "Enter the First Number: ";
    cin >> number1;

    cout << "Enter the Second Number: ";
    cin >> number2;

    if (number1 > number2)
        cout << "First Number " << number1 << " is greater than Second Number " << number2 << endl;
    else
        cout << "Second Number " << number2 << " is greater than First Number " << number1 << endl;

    return 0;
}