/* Calculate the Simple intrest   */

/* 
Formula 
distance = ((v*v) - (u*u)) / (2*a);
*/

#include <iostream>
using namespace std;

int main()
{
    float p, r, t, simpleIntrest;

    cout << "Enter the Principal: ";
    cin >> p;

    cout << "Enter the Rate: ";
    cin >> r;

    cout << "Enter the Time: ";
    cin >> t;

    simpleIntrest = (p * r * t) / 100;

    cout << "The Simple Intrest is: " << simpleIntrest << endl;

    return 0;
}