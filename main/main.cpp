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

    Circle circ;
    circ.setRadius(5);
    //Print the area of the object.

    cout << "Total Circle Area: " << circ.getArea() << endl;


    return 0;
}
