#include <iostream>
using namespace std;

class Crectangle {
    int x,y;

    public:
    void set_Values(int a, int b);
    int Area () {
        return (x*y);
    }
};
void Crectangle::set_Values (int a, int b){
    x = a;
    y = b;
}

int main(){
    Crectangle rect;
    rect.set_Values (3,4);
    cout << "area: " << rect.Area();
    return 0; 
}