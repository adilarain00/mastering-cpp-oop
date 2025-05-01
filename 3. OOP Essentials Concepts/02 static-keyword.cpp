#include <iostream>
using namespace std;

class Student {
public:
    string name;
    static int count;  // static member

    Student(string n) {
        name = n;
        count++;        // increment static count for each object
    }

    void show() {
        cout << "Name: " << name << endl;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;  // static variable initialization

int main() {
    Student s1("Ali");
    Student s2("Adil");

    s1.show();
    s2.show();
    Student::showCount();  // calling static method

    return 0;
}

/*
Explanation:

1. `count` is shared among all objects (not per object).
2. It's updated every time a new `Student` is created.
3. `showCount()` is a static method that accesses static data.

Output:

Name: Ali  
Name: Adil  
Total Students: 2
*/
