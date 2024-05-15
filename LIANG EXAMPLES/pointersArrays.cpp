#include <iostream>
using namespace std;

int main(){
    int numbersArray[5];

    int * pPointer = nullptr;

    pPointer =numbersArray;

    *pPointer =10;  //assign a value to the first element

    *pPointer++;
   *pPointer = 20;

    pPointer = &numbersArray[2];
    *pPointer = 30;

    pPointer = &numbersArray[4];
    *pPointer  =50;

    for (int i = 0; i<5; i++)
    {
        cout<< numbersArray[4] << ", "<<endl;
        //cout << *pPointer << ", p"<<endl;
    }


}