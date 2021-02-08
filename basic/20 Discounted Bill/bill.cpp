/* Calculate Discounted bill  */
/*
amt >= 5000; 20% discount
amt >= 2000 && amt < 5000; 10% discount
amt < 2000 ; 5% discount
*/

#include <iostream>
using namespace std;

int main()
{

    float amt, discount;

    cout << "Enter the Bill Amount: ";
    cin >> amt;

    if (amt >= 5000)
    {
        discount = (amt * 20) / 100;

        cout << "The Original Bill Amount is: " << amt << endl;
        cout << "The 20% Discounted Bill Amount is: " << discount << endl;
    }
    else if (amt >= 2000 && amt < 5000)
    {
        discount = (amt * 10) / 100;

        cout << "The Original Bill Amount is: " << amt << endl;
        cout << "The 10% Discounted Bill Amount is: " << discount << endl;
    }
    else
    {
        discount = (amt * 5) / 100;

        cout << "The Original Bill Amount is: " << amt << endl;
        cout << "The 5% Discounted Bill Amount is: " << discount << endl;
    }

    return 0;
}