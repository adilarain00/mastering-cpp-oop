#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    // Constructor using 'this' pointer
    Student(string name) {
        this->name = name;   // 'this' refers to current object
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1("Adil");  // Pass value to constructor
    s1.display();        // Show student name

    return 0;
}

/*
Explanation:

1. The `this` pointer is used to refer to the current object's variable.
2. Helps avoid confusion between constructor parameter and class member.
3. `this->name` means the class member, while `name` is the parameter.

Output:

Name: Adil
*/
