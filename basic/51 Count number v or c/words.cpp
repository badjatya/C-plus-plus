/* TODO: Count Number of vowels, words and consonants */

#include <iostream>
#include <string>

using namespace std;

int main()
{

    int vowels = 0, consonants = 0, words = 1;
    string str;

    cout << "Enter String: ";
    getline(cin, str);

    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u' || *it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U')
        {
            vowels++;
        }
        else if (*it == ' ')
        {
            words++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "Vowels Are: " << vowels << endl;
    cout << "Consonants Are: " << consonants << endl;
    cout << "Words Are: " << words << endl;

    return 0;
}