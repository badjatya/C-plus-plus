/* TODO: Function for Linear Search */

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "Element " << key << " found at position: " << i << endl;
            return 0;
        }
    }
    cout << "Element not Found" << endl;
    return 0;
}

int main()
{
    int size, key;

    cout << "Enter Size of an Array: ";
    cin >> size;
    int A[size];

    cout << "Enter " << size << " Elements of Array";
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }

    cout << "Enter Element you Want to search: ";
    cin >> key;

    linearSearch(A, size, key);

    return 0;
}