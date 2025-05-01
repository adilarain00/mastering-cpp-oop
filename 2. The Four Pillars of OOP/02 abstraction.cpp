#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void sound() = 0;   // pure virtual function (no body)
};

// Derived class must implement the abstract method
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();  // calling implemented function

    return 0;
}

/*
Explanation:

- `Animal` is an abstract class because it has a pure virtual function.
- Any class that inherits from it must override the `sound()` function.
- This hides internal details and only shows relevant behavior to the user.

Output:

Dog barks
*/
