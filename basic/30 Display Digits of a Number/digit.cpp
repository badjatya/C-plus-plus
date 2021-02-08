/* Display Digits of a Number */

/* TODO: Algo is for last digit:
                                    r = n%10;
        Algo is for removing last digit:
                                            n = n/10;
*/

#include <iostream>
using namespace std;

int main()
{

    int n, r;
    cout << "Enter Number: ";
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r << endl;
    }

    return 0;
}