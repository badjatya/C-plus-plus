/* TODO: Find Min element of array */

#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 67, 100, 45, 67, 34, 2, 3, 78, 56, 7, 9};
    int min = a[0];

    for (int i = 0; i <= 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "Min element of array is: " << min << endl;

    return 0;
}