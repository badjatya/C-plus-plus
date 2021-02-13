/* TODO: Change string from upper case to lower case */

/* Ascii code for A is 65 and for a is 97 the difference is 32 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter String: ";
    getline(cin, str);

    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        *it = *it + 32;
    }

    cout << "Length Of String is: " << str << endl;

    return 0;
}