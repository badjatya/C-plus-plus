/* Find out the given Roll number is Valid or not   */

#include <iostream>
using namespace std;

int main()
{
    int rollNum;

    cout << "Enter the Number: ";
    cin >> rollNum;

    if (rollNum < 1)
        cout << "Roll Number is Invalid: " << rollNum << endl;
    else
        cout << "Roll Number is Valid: " << rollNum << endl;

    return 0;
}