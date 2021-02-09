/* TODO: Printing a pattern using nested for loops  */

/*
Pattern to be Printed: / .,ml .,kml
* 
* * 
* * * 
* * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

/* ------------------------------TODO: OR -------------------------------- */

/*
for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if(i >= j)
            cout << "* ";
        }
        cout << endl;
    }

*/
