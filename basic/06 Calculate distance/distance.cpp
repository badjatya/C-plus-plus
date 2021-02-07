/* Calculate the distance travelled by a particle  */

/* 
Formula 
distance = ((v*v) - (u*u)) / (2*a);
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float v, u, a, distance;

    cout << "Enter the value of Initial velocity: ";
    cin >> u;

    cout << "Enter the value of Final velocity: ";
    cin >> v;

    cout << "Enter the value of Acceleration: ";
    cin >> a;

    distance = ((v * v) - (u * u)) / (2 * a);

    cout << "The Distance travelled by a particle is: " << distance << endl;

    return 0;
}