/* Check the number is perfect number or not */

/* TODO: Perfect number is that number whose sum of factorial is twice of that number */

#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;

    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (2 * n == sum)
    {
        cout << "The " << n << " is Perfect Number" << endl;
    }
    else
    {
        cout << "The " << n << " is not a Perfect Number" << endl;
    }

    return 0;
}