/* Is user is working in working hour or not  */

#include <iostream>
using namespace std;

int main()
{
    int hourWorked;

    cout << "Enter Your Hour: ";
    cin >> hourWorked;

    if (hourWorked >= 9 && hourWorked < 18)
        cout << "Your hour is: " << hourWorked << " and Its Working Hour" << endl;
    else
        cout << "Your hour is: " << hourWorked << " and Its not Working Hour" << endl;
    return 0;
}