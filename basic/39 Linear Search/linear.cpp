/* TODO: Linear Search: it searches sequentially  */

#include <iostream>
using namespace std;

int main()
{
    int A[5], key;

    cout << "Enter 5 Elements of Array: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    cout << "Enter Element to Search: ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (A[i] == key)
        {
            cout << "Element " << A[i] << " is found at: " << i << endl;
            exit(0);
        }
    }

    cout << "Element Not Found!" << endl;
    return 0;
}