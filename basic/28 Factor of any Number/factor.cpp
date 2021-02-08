/* Factor Of any Number */

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Factor: " << i << endl;
        }
    }

    return 0;
}