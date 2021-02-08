/* Find Multiplication Table of any number  */

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number: ";
    cin >> n;

    if (n > 0)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << n << " * " << i << " = " << n * i << endl;
        }
    }
    else
    {
        cout << "Enter Valid Number!" << endl;
    }

    return 0;
}