/* Check if a Number is Prime number */

/* TODO: Prime number is that number who is having only two factors */

#include <iostream>
using namespace std;

int main()
{

    int n, count = 0;

    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "The " << n << " is Prime Number" << endl;
    }
    else
    {
        cout << "The " << n << " is not a Prime Number" << endl;
    }

    return 0;
}