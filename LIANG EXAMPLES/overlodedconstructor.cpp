#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;

public:

    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        gpa = 0.0;
    }

    // Constructor with name parameter
    Student(string n) {
        name = n;
        age = 0;
        gpa = 0.0;
    }

    // Constructor with name and age parameters
    Student(string n, int a) {
        name = n;
        age = a;
        gpa = 0.0;
    }

    // Constructor with name, age, and GPA parameters
    Student(string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
    }

    // Getter functions
    string getName() const { return name; }
    int getAge() const { return age; }
    double getGPA() const { return gpa; }
};

int main() {
    // Create objects using different constructors
    Student s1;
    Student s2("John");
    Student s3("Jane", 20);
    Student s4("Bob", 22, 3.8);

    // Print object details
    cout << "Student 1: " << s1.getName() << ", " << s1.getAge() << ", " << s1.getGPA() << endl;
    cout << "Student 2: " << s2.getName() << ", " << s2.getAge() << ", " << s2.getGPA() << endl;
    cout << "Student 3: " << s3.getName() << ", " << s3.getAge() << ", " << s3.getGPA() << endl;
    cout << "Student 4: " << s4.getName() << ", " << s4.getAge() << ", " << s4.getGPA() << endl;

    return 0;
}