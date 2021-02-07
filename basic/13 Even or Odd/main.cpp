/* Find out the given number is Even or Odd   */

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the Number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Number is Even: " << num << endl;
    else
        cout << "Number is Odd: " << num << endl;

    return 0;
}