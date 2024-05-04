#include <iostream>
using namespace std;

int main()
{
    int num2 = 6;
    int num = 27;
    // Storing address of num in num_pointer
    int* num_pointer = &num;
    int* num2_pointer = &num2;

    // Print size of int
    cout << "Size of int: " << sizeof(int) << endl;

    // Print the address stored at num_pointer
    cout << "address Before Increment: " << num_pointer << endl;
    // Increment pointer
    num_pointer++;

    cout << "After Increment: " << num_pointer << endl;

    // Print the address stored at num_pointer
    cout << "Before Decrement: " << num_pointer << endl;
     cout << "variable in pointer after operation "<< *num_pointer<<endl;
    // Decrement pointer
    num_pointer--;

    cout << "After Decrement: " << num_pointer << endl;

    //subtraction between two pointers
    int  subtactionValue= num_pointer - num2_pointer;
    cout << "different between pointers " << subtactionValue<< endl;

    //subtractin and addition of constant to a pointer
    int * p =num_pointer - 6;
    int * k = p + 8;
    cout << "address after subtracting 6 " << p<<endl;
    cout << "address after adding 8 " << k <<endl;
   

    return 0;
}