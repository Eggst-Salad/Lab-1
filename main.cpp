#include <iostream>
#include <math.h>

using namespace std;
// Base class
class Shape {

public:
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};

class Triangle: public Shape {
public:
    int getArea()
    {
        return (width * height)/2; //test quote
    }
};

class Circle: public Shape {
public:
    int getArea() {
        return ();
    }
};

int main(void)
{


    //hello world lol
    int height, width;

    cout << "Please enter the height and width of the triangle: ";
    cin >> height >> width;
    Triangle Tri;
    Tri.setHeight(height);
    Tri.setWidth(width);

    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;
 return 0;

}

