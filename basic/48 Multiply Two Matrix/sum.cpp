/* TODO: Multiply Two Matrix: */

#include <iostream>
using namespace std;

int main()
{
    int r1, r2, c1, c2, sum = 0;

    cout << "Enter Rows of Matrix A: ";
    cin >> r1;

    cout << "Enter Columns of Matrix A: ";
    cin >> c1;

    cout << "Enter Rows of Matrix B: ";
    cin >> r2;

    cout << "Enter Columns of Matrix B: ";
    cin >> c2;

    if (c1 != r2)
    {
        cout << "Matrix Multiplication can not be performed" << endl;
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[c1][r2];

    /*Taking Input Of Matrix A */
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter Element Matrix A " << i + 1 << j + 1 << " : ";
            cin >> A[i][j];
        }
    }
    cout << endl;
    cout << "Matrix A: " << endl;

    /* Printing Matrix A */
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << A[i][j] << "   ";
        }
        cout << endl;
    }

    /*Taking Input Of Matrix B */
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter Element Matrix B " << i + 1 << j + 1 << " : ";
            cin >> B[i][j];
        }
    }

    cout << endl;
    cout << "Matrix B: " << endl;

    /* Printing Matrix B */
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << B[i][j] << "   ";
        }
        cout << endl;
    }

    /* Matrix Multiplication */
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                sum += A[i][k] * B[k][j];
            }

            C[i][j] = sum;
            sum = 0;
        }
    }
    cout << endl;
    cout << "Matrix C: " << endl;

    /* Printing Matrix C */
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << C[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}