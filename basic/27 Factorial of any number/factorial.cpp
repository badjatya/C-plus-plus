/* Factorial of any number */

#include <iostream>
using namespace std;

int main()
{
    int fact = 1, n;

    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}