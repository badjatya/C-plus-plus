/* Display name based on Number  */

#include <iostream>
using namespace std;

int main()
{

    int num1, num2, choice;

    cout << "Select: \n(1) Add \n(2) Subtract\n(3) Multiply\n(4) Divide";
    cin >> choice;

    cout << "Enter Numbers: ";
    cin >> num1 >> num2;

    switch (choice)
    {
    case 1:
        cout << "Sum: " << num1 + num2 << endl;
        break;
    case 2:

        cout << "Subtraction: " << num1 - num2 << endl;
        break;
    case 3:

        cout << "Multiplication: " << num1 * num2 << endl;
        break;
    case 4:

        cout << "Divide: " << num1 / num2 << endl;
        break;

    default:
        cout << "Enter Valid Number" << endl;
        break;
    }

    return 0;
}