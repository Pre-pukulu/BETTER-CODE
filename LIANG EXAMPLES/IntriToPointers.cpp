#include <iostream>
using namespace std;

int main() {

    //declaring a point and initialize it
    int * pPointer = nullptr;

    int integervar = 5;

    //assign point address of integer
    pPointer = &integervar;

    cout << "integervar: " << integervar << endl;

    cout << "address of integer: " << &integervar << endl;

    cout << "pPointer: " << pPointer << endl;

    cout << "Ddress of pPointer: " << &pPointer << endl;

    return 0;
}