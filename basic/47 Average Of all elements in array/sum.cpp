/* Average of all elements of array   */

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, avg;

    cout << "Enter Size of Array: ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter Element: ";
        cin >> array[i];
        sum = sum + array[i];
    }

    avg = sum / n;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}