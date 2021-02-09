/* TODO: Find Max element of array */

#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 67, 100, 45, 67, 34, 2, 3, 78, 56, 7, 9};
    int max = 0;

    for (int i = 0; i <= 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Max element of array is: " << max << endl;

    return 0;
}