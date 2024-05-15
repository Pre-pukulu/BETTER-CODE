#pragma once     // telling compiler that add this file once only
#include <string> //header for strings

// needed for the strings
using namespace std;

    class student
    {
        //member variables
        public:
        string FirstName;
        string LastName;
        unsigned int Age;
        float weight;

        // member functions
        void initialize();
        void CalculateAge(int yearBorn, int currentYear);
    };
