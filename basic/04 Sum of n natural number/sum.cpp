/* Sum of First n Natural number  */

/* Formula sum = n (n+1)/2 */

#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "Enter the value of n: ";
    cin >> n;

    sum = (float)n * ((n + 1) / 2);

    cout << "Sum of first" << n << " Natural number is: " << sum;
}