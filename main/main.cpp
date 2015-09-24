#include <iostream>

using namespace std;

// Base Class
class Shape
{
public:
    //pure virtual function providing interface framework.
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    void setRadius(int r)
    {
        radius = r;
    }
protected:
    int width;
    int height;
    int radius;
};

class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};

class Rectangle: public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

class Circle: public Shape
{
public:
    int getArea()
    {
        return (3.14 * (radius*radius));
    }
};


int main(void)
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);
    //Print the area of the object.

    cout << "Total Triangle Area: " << Tri.getArea() << endl;

    Rectangle Rec;
    Rec.setWidth(5);
    Rec.setHeight(10);
    //Print the area of the object.

    cout << "Total Rectangle Area: " << Rec.getArea() << endl;


    Circle circ;
    circ.setRadius(5);

    cout << "Total Circle Area: " << circ.getArea() << endl;


    return 0;
}
