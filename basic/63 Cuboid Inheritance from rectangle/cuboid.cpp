/* TODO: Create a derived class Cuboid from Base Class Rectangle */

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int length = 0, int breadth = 0)
    {
        this->length = length;
        this->breadth = breadth;
    }

    void setLength(int l);
    void setBreadth(int b);

    int getLength();
    int getBreadth();

    int area();
    int perimeter();
};

void Rectangle::setLength(int l)
{
    this->length = l;
}

void Rectangle::setBreadth(int b)
{
    this->breadth = b;
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int length = 0, int breadth = 0, int height = 0)
    {
        setLength(length);
        setBreadth(breadth);
        this->height = height;
    }

    void setHeight(int height);
    int getHeight();

    int volume();
};

void Cuboid::setHeight(int height)
{
    this->height = height;
}

int Cuboid::getHeight()
{
    return height;
}

int Cuboid::volume()
{
    return getLength() * getBreadth() * height;
}

int main()
{
    Cuboid c(5, 4, 3);
    cout << "Volume Of Cuboid: " << c.volume() << endl;
    cout << "Area Of Cuboid: " << c.area() << endl;

    return 0;
}