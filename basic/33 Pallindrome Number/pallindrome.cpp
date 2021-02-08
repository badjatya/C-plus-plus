/* Check a number is Pallindrome Number Or not */

/* 
TODO: reverse = reverse * 10 + r;
*/

#include <iostream>
using namespace std;

int main()
{

    int n, r, rev = 0, num;
    cout << "Enter Number: ";
    cin >> n;
    num = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;

        rev = (rev * 10) + r;
    }

    if (rev == num)
    {
        cout << num << " is a Pallindrome Number " << endl;
    }
    else
    {
        cout << num << " is a not Pallindrome Number " << endl;
    }

    return 0;
}