/* Maximum of three number */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is Max" << endl;
        }
        else
        {
            cout << c << " is Max" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is Max" << endl;
        }
        else
        {
            cout << c << " is Max" << endl;
        }
    }

    return 0;
}