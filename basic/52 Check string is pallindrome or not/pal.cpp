/* TODO: Check a string having pallindrome or not */

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str, rev;

    cout << "Enter Word ";
    cin >> str;

    string::reverse_iterator it;

    for (it = str.rbegin(); it != str.rend(); it++)
    {
        rev = rev + *it;
    }

    if (rev == str)
        cout << "Pallindrome" << endl;
    else
        cout << "Not Pallindome" << endl;

    return 0;
}