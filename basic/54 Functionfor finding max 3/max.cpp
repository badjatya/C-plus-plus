/* TODO: Function for finding maximum of three numbers */

#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
    int a, b, c;
    cout << "Enter Three Numbers: ";
    cin >> a >> b >> c;
    int maxNum = max(a, b, c);
    cout << "Max is: " << maxNum << endl;
    return 0;
}