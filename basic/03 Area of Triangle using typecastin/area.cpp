/* Find Area of Triangle using  */

#include <iostream>
using namespace std;

int main()
{
    float h, b, area;

    cout << "Enter Breadth of Triangle: ";
    cin >> b;

    cout << "Enter Height of Triangle: ";
    cin >> h;

    area = (float)0.5 * h * b;

    cout << "Area of Triangle is: " << area;
}