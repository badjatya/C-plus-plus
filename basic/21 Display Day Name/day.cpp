/* Calculate Day name based on day Number  */

#include <iostream>
using namespace std;

int main()
{

    int day;
    cout << "Enter Day Number: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thusday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;

    default:
        cout << "Enter Valid Number" << endl;
        break;
    }

    return 0;
}