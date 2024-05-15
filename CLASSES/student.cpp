//Implementation of the student class

#include "student.h"  //include the header file
#include <iostream>
using namespace std;

//definition of member function initiaize
void student::initialize(){
    FirstName = "John";
    LastName = "doe";
    Age = 0;
    weight = 0.0f;
}

//definition of membwer function CalculateAge
void student::CalculateAge(int yearBorn, int currentYear){
        Age =currentYear - yearBorn;
        cout << "You are  " << Age <<" years old" << endl;
}

