/* Find the roots of quadratic equation  */

/* 
Formula 
root1 = (-b + underoot(b*b - 4*a*c)) / 2*a;
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, root1, root2, r;

    cout << "Enter the value of a,b,c: ";
    cin >> a >> b >> c;

    r = sqrt((b * b) - (4 * a * c));

    root1 = (-b + r) / 2 * a;
    root2 = (-b - r) / 2 * a;

    cout << "Root one is: " << root1 << endl;
    cout << "Root two is: " << root2 << endl;

    return 0;
}