#include <iostream>
#include "student.h"

using namespace std;

using namespace unima;
void Student::fname(string name) const{
    string me = name;
    cout << me << endl;
    
}

unsigned int Student::getage(){
    return mAge;
}

void Student::setage(unsigned int newage)
{
    if (newage > 0){
        mAge = newage;
    }
    else{
        cout << "invalid age"<< endl;
    }
}


/*void Student::initialize()
{
    mFirstName = "";
    mLastName = "";
    mAge = 0;
    mWeight = 0;
}
void Student::CalculateAge(int yearBorn, int currentYear)
{
    mAge = currentYear - yearBorn;
}*/

int main()
{
    Student biologystudent;

    Student mathstudent;

    //biologystudent.initialize();
   // mathstudent.initialize();
    //mathstudent.mWeight = 75;

    //biologystudent.mWeight = 60.0f;
    biologystudent.setage(40);
    mathstudent.setage(60);
    biologystudent.fname("chimole");


    //biologystudent.CalculateAge(2000, 2024);

    cout <<"biologyStudent age is " <<biologystudent.getage() << endl;
    cout <<"mathStudent age is " << mathstudent.getage()<< endl;
    return 0;
} // namespace std
