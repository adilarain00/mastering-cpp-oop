#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog d;
    d.speak();   // calls Dog's version of speak()

    return 0;
}

/*
Explanation:

1. `speak()` is defined in both base and derived class.
2. Derived version overrides the base version.

Output:

Dog barks.
*/
