/* Display Grade on the basis od avg marks of students  */

/*
    averageMarks = (m1+m2+m3) / 3;

    avg >= 60; Grade A
    avg >= 35 && avg < 60; Grade B;
    avg < 35; Grade C;
*/

#include <iostream>
using namespace std;

int main()
{

    typedef int Marks;
    float avg;
    Marks m1, m2, m3;

    cout << "Enter Marks Obtained in Maths: ";
    cin >> m1;

    cout << "Enter Marks Obtained in Science: ";
    cin >> m2;

    cout << "Enter Marks Obtained in English: ";
    cin >> m3;

    avg = (m1 + m2 + m3) / 3;

    if (avg > 60)
    {
        cout << "Grade A" << endl;
    }
    else if (avg >= 35 && avg < 60)
    {
        cout << "Grade B" << endl;
    }
    else
    {
        cout << "Grade C" << endl;
    }

    return 0;
}