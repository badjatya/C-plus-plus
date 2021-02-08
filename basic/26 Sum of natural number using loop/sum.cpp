/* Sum of first n natural number using loop */

#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;

    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of first " << n << " Natural Number is: " << sum << endl;

    return 0;
}