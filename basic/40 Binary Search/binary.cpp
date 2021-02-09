/* TODO: Binary Search: it searches only in Sorted Array  */

#include <iostream>
using namespace std;

int main()
{
    int A[5], key, low = 0, high = 4, mid = 0;

    cout << "Enter 5 Elements of Array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    cout << "Enter Element to Search: ";
    cin >> key;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (A[mid] == key)
        {
            cout << "Element " << A[mid] << " found at: " << mid << endl;
            exit(0);
        }
        else if (A[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Element Not Found!" << endl;
    return 0;
}