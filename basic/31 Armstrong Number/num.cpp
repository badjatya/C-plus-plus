/* Check Number is armstrong or not */

/* TODO: Algo is for last digit:
                                    r = n%10;
        Algo is for removing last digit:
                                            n = n/10;
*/

#include <iostream>
using namespace std;

int main()
{

    int n, r, sum = 0, num;
    cout << "Enter Number: ";
    cin >> n;
    num = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + (r * r * r);
    }

    if (sum == num)
    {
        cout << "Number " << num << " is Armstrong Number";
    }
    else
    {
        cout << "Number " << num << " is not Armstrong Number";
    }

    return 0;
}