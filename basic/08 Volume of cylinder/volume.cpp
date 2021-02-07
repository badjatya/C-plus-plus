/* Calculate Volume of Cylinder   */

/* 
Formula 
v = 3.14 * (r*r) * h;
*/

#include <iostream>
using namespace std;

int main()
{
    float h, r, volume;

    cout << "Enter the Radius of Cylinder: ";
    cin >> r;

    cout << "Enter the Height of Cylinder: ";
    cin >> h;

    volume = 3.14 * (r * r) * h;

    cout << "The Volume of Cylinder is: " << volume << endl;

    return 0;
}