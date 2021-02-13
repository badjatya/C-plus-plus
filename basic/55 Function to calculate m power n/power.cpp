/* TODO: Function to calculate m power n */

#include <iostream>
using namespace std;

int power(int m, int n)
{
    int power = m;
    for (int i = 1; i < n; i++)
    {
        power = power * m;
    }
    return power;
}

int main()
{

    int m, n;

    cout << "Enter value of m and its power n: ";
    cin >> m >> n;

    cout << m << " Power " << n << " is: " << power(m, n) << endl;

    return 0;
}