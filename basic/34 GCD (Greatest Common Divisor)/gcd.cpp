/* TODO: Find out the (GCD) Greatest Common Divisor  */

#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cout << "Enter Two Numbers: ";
    cin >> n >> m;

    while (n != m)
    {
        if (n > m)
        {
            n = n - m;
        }
        else if (m > n)
        {
            m = m - n;
        }
    }

    cout << "The Greatest Common Divisor i.e GCD is: " << n << endl;

    return 0;
}