#include <iostream>
using namespace std;

int main(){
    int number =0;
    int* dynamicArray = nullptr;

    cout << "How many numbers would you like to type? ";
    cin >> number;
    
    dynamicArray = new int[number];

    if (dynamicArray == nullptr){
        cout << "error: memory could not be allocated";
    }
    else {
        for (int i =0; i < number; i++){
            cout << "Enter number: ";
            cin >> dynamicArray[i];
        }
        cout << "You have entered: ";
        for (int j = 0; j < number; j++){
            cout << dynamicArray[j]<< ", ";
        }
        delete[] dynamicArray;
    }
    return 0;
}