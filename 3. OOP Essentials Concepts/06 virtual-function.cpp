#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* a;    // base class pointer
    Cat c;
    a = &c;

    a->sound();   // calls Cat::sound() due to virtual function

    return 0;
}

/*
Explanation:

1. `sound()` is a virtual function in base class.
2. When using base pointer, derived class method is called at runtime (polymorphism).

Output:

Cat meows.
*/
