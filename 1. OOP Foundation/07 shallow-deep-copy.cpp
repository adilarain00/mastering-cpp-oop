#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;

public:
    // Constructor
    Person(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);  // Allocate and copy string
    }

    // Deep Copy Constructor
    Person(const Person& p) {
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);  // Deep copy
    }

    void display() {
        cout << "Name: " << name << endl;
    }

    ~Person() {
        delete[] name;  // Free memory
    }
};

int main() {
    Person p1("Adil");     // Original object
    Person p2 = p1;        // Deep copy

    p1.display();
    p2.display();

    return 0;
}

/*
Explanation:

1. `name` is a dynamic char array.
2. Default copy would share the same memory (shallow copy).
3. Custom copy constructor creates a separate memory (deep copy).
4. Destructor frees memory to prevent leaks.

Output:

Name: Adil  
Name: Adil
*/
