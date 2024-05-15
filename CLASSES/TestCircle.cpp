#include <iostream>
using namespace std;

class circle
{
    public:
        double radius;

        circle()
        {
            radius = 1;
        }
        circle(double newRadius){
            radius = newRadius;
        }

        double getArea()
        {
            return radius*radius*3.14159;
        }
};

int main()
{
    circle circle1(1.0);
    circle circle2(25);
    circle circle3(100);

    cout << "The area of the circle of radius " << circle1.radius << circle1.getArea() << endl;

    return 0;
}