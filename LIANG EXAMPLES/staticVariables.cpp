#include <iostream>

using namespace std;

void regular();
void stativariable();

int main(){
    regular();
    regular();
    regular();

    cout << " " << endl;
    stativariable();
    stativariable();
    stativariable();
    
    return 0;
}

void regular()
{
    int var = 10;
    var = var + 10;

    cout << "Regular local: " << var<< endl;
}
void stativariable()
{
    static int var = 10;
    var = var + 10;

    cout << "Static local: " << var<< endl;
}
