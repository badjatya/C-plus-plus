/* TODO: Find Length od String Using Loop*/

/*METHOD 1:- */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count = 0;

    cout << "Enter String: ";
    getline(cin, str);

    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }

    cout << "Length Of String is: " << count << endl;

    return 0;
}

/* METHOD 2:-  */

// int main()
// {
//     string str;
//     int count = 0;

//     cout << "Enter String: ";
//     getline(cin, str);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         count++;
//     }

//     cout << "Length Of String is: " << count << endl;

//     return 0;
// }