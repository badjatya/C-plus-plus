/* Find The Nature of quadratic equation */

/*
Formula: a(x*x) + b(x) + c = 0; 

d = sqrt((b*b) - 4 * a * c)

d = 0 ; Roots are equal
d>0 ; roots are real an unequal
d<0 ; roots are imaginary

rootOne = (-b + d ) / (2 * a);
rootTwo = (-b - d ) / (2 * a);

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a, b, c, d, rootOne, rootTwo;

    cout << "Enter Coefficient of x Square: ";
    cin >> a;

    cout << "Enter Coefficient of x: ";
    cin >> b;

    cout << "Enter Coefficient of real Number: ";
    cin >> c;

    d = sqrt((b * b) - 4 * a * c);

    if (d == 0)
    {
        int root = (-b + d) / (2 * a);

        cout << "Roots are Real and Equal: " << root << endl;
    }
    else if (d > 0)
    {
        rootOne = (-b + d) / (2 * a);
        rootTwo = (-b - d) / (2 * a);

        cout << "Roots are Real and Unequal: " << rootOne << " And " << rootTwo << endl;
    }
    else if (d < 0)
    {
        cout << "Roots are Imaginary" << endl;
    }

    return 0;
}