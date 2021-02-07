/* Calculate Distance Between two points in an cartesian plane   */

/* 
Formula 
distance = sqrt(((x2 - x1)*(x2 - x1)) - ((y2 - y1)*(y2 - y1)));
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, x2, y1, y2, distance;

    cout << "Enter the Value of x1: ";
    cin >> x1;

    cout << "Enter the Value of x2: ";
    cin >> x2;

    cout << "Enter the Value of y1: ";
    cin >> y1;

    cout << "Enter the Value of y2: ";
    cin >> y2;

    distance = sqrt(((x2 - x1) * (x2 - x1)) - ((y2 - y1) * (y2 - y1)));

    cout << "The Distance is: " << distance << endl;

    return 0;
}