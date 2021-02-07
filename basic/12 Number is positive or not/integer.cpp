/* Find out the given number is positive or negative   */

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the Number: ";
    cin >> num;

    if (num >= 0)
        cout << "Number is Positive: " << num << endl;
    else
        cout << "Number is Negative: " << num << endl;

    return 0;
}