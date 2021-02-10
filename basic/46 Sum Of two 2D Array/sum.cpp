/* TODO: Sum of two Matrix */

#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], c[3][3];

    cout << "Enter Array Elements Of Array A: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter Array Elements Of Array B: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Matrix A is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Matrix B is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Sum of Matrix A and B is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}