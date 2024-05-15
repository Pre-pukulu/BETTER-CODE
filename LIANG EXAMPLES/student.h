#pragma once

#include <string>
#include "school.cpp"

using namespace std;
namespace unima
{
    class Student
    {
    private:
        string mFirstName;
        string mLastName;
        unsigned int mAge;
        school mschool;
    
    public:
        //void fname(string name) const;

        void initialize();
        void CalculateAge(int yearBorn, int currentYear);
        void setschool(school newschool);
        school getschool() const;

        

        //accessor methods
        void setage(unsigned int newage); //setter
        unsigned int getage(); //getter
    };
}
