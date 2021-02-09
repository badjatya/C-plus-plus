/* TODO: Sum of all elements of array */

#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 67, 100, 45, 67, 34, 2, 3, 78, 56, 7, 9};
    int sum = 0;

    for (auto x : a)
    {
        sum += x;
    }
    cout << "Sum of All Elements of Array is: " << sum << endl;

    return 0;
}