#include <iostream>
using namespace std;

int main(){
    int count = 5;  //declaring variable
    int* pCount = &count; //declaring pointer and assign it memory of value count

    cout<< "the value of count is " << count << '\n';
    cout<< "the address of count is " << &count << '\n';
    cout<< "the address of count is " << pCount << '\n';
    cout<< "the value of count is " << *pCount << '\n';

    return 0;
}