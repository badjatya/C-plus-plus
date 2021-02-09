/* TODO: Count number of negative and positive numbers in Array */

#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 67, -100, 45, -67, 34, 2, 3, -78, 56, -7, 9};
    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i <= 10; i++)
    {
        if (a[i] < 0)
        {
            negativeCount++;
        }
        else
        {
            positiveCount++;
        }
    }
    cout << "Total Positive elements of array is: " << positiveCount << endl;
    cout << "Total Negative elements of array is: " << negativeCount << endl;

    return 0;
}
