/* TODO: copy constructor heap memory */

#include <iostream>
using namespace std;

class heap
{
private:
    int a;
    int *p;

public:
    heap(int x = 0)
    {
        a = x;
        p = new int[a];
        cout << "Enter " << a << " Elements: ";
        for (int i = 0; i < a; i++)
        {
            cin >> p[i];
        }
    }

    heap(heap &h)
    {
        a = h.a;
        p = new int[a];
        for (int i = 0; i < a; i++)
        {
            p[i] = h.p[i];
        }
    }

    void show()
    {
        for (int i = 0; i < a; i++)
        {
            cout << p[i] << endl;
        }
    }
};

int main()
{
    heap h1(5);
    h1.show();
    cout << "copy constructor turn" << endl;

    heap h2(h1);
    h2.show();

    return 0;
}