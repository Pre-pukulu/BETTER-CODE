#include <iostream>

using namespace std;
void incrementReference(int& ref);
void swap(int& num1, int& num2);
int main() {
    int number1 = 5;
    int number2 = 40; 
    cout << "number before function is " << number1 << endl;   
    incrementReference(number1);

    cout << "number after function is " << number1 << endl;

    swap(number1, number2);
    cout << number1 << "and number 2 is " << number2 << endl;
    return 0;
}

void incrementReference(int& ref){
    ref++;
}

void swap(int& num1, int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}