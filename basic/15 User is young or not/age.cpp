/* Check the user is young or not  */

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 12 && age < 50)
        cout << "Your Age is: " << age << " and user is Young" << endl;
    else
        cout << "Your Age is: " << age << " and user is Not Young" << endl;
    return 0;
}