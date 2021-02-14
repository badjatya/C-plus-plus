/* TODO: Create a class rectangle and find area and perimeter of rectangle */

/* 
        Area= length*breadth;
        perimeter = 2 (length+breadth);
    */

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }

    void setLength(int l)
    {
        length = l > 0 ? l : 0;
    }

    void setBreadth(int b)
    {
        breadth = b > 0 ? b : 0;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1(10, 5);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Perimeter of r1: " << r1.perimeter() << endl;

    Rectangle r2(r1);
    cout << "Area of r1: " << r2.area() << endl;
    cout << "Perimeter of r1: " << r2.perimeter() << endl;

    return 0;
}
