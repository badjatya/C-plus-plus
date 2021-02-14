/* TODO: Friend Function Operator overloading complex number */

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
    friend Complex operator+(Complex c1, Complex c2);
};

void Complex::display()
{
    cout << real << " + " << imaginary << " i" << endl;
}

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;

    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;

    return temp;
}

int main()
{

    Complex c1(1, 2), c2(3, 4), c3;

    c3 = c1 + c2;

    c3.display();

    return 0;
}