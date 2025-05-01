#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Constructor
    Student(string name, int rollNo, float marks) {
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }

    // Accessor method
    void setMarks(float m) {
        marks = m;
    }

    float getMarks() {
        return marks;
    }

    void showStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Student() {
        cout << "Destructor called for Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1("Adil", 101, 88.5);
    s1.showStudent();

    s1.setMarks(91.2);     // Update marks
    cout << "Updated Marks: " << s1.getMarks() << endl;

    return 0;
}

/*
Explanation:

- Demonstrates class with encapsulation and `this` pointer.
- Uses constructor, getter/setter, and destructor.
- Real-world example for managing student data.

Output:

Name: Adil  
Roll No: 101  
Marks: 88.5  
Updated Marks: 91.2  
Destructor called for Roll No: 101
*/
