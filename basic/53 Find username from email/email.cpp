/* TODO: Find Username from Email */

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str, username;

    cout << "Enter Email Id: ";
    cin >> str;

    string::iterator it;
    for (int i = 0; str[i] != '@'; i++)
    {
        username = username + str[i];
    }

    cout << "Email id: " << str << endl;
    cout << "Username: " << username << endl;

    return 0;
}