// overloading class constructors
#include <iostream>
using namespace std;

class CRectangle
{
    int width, height, length;

public:
    CRectangle();         // constructor
    CRectangle(int, int); // overloading constructor
    CRectangle(int, int, int);
    int area(void) { return (width * height); }
    int area2 (void) { return (width*height*length);}
};

// constructor definition
CRectangle::CRectangle()
{
    width = 5;
    height = 5;
}

// overloading constructor definition
CRectangle::CRectangle(int a, int b)
{
    width = a;
    height = b;
}

CRectangle::CRectangle(int a, int b, int c)
{
    width = a;
    height = b;
    length = c;
}
int main()
{
    CRectangle tri(4, 4, 6);
    CRectangle rect(3, 4);
    CRectangle rectb;
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    cout << "rectb area: " << tri.area2() << endl;
    return 0;
}