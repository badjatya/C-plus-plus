/* TODO: Using Operator overloading add two complex number a+bi */

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void display();
    Complex operator+(Complex x)
    {
        Complex temp;

        temp.real = real + x.real;
        temp.imaginary = imaginary + x.imaginary;

        return temp;
    }
};

void Complex::display()
{
    cout << real << " + " << imaginary << " i" << endl;
}

int main()
{
    Complex c1(5, 6), c2(4, 5), c3;

    c3 = c1 + c2;
    c3.display();

    return 0;
}