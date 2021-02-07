/* Find Area of Circle using  */

#include <iostream>
using namespace std;

int main()
{
    float r, area;

    cout << "Enter Radius of Circle: ";
    cin >> r;

    area = (float)3.14 * r * r;

    cout << "Area of Circle is: " << area;
}