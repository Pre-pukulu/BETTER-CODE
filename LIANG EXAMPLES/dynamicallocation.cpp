#include <iostream>
using namespace std;

int main()
{

    int* number = new int;
    string* word = new string;

    cout << "Enter any number: ";
    cin >> *number;

    cout << "Enter any word: " ;
    cin >> *word;

    cout << "the integer is " << *number << endl;
    cout << "the word is: " << *word << endl;

    delete number;
    delete word;

    return 0;
}