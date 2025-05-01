#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class inherits from base
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // inherited function
    d.bark();  // own function

    return 0;
}

/*
Explanation:

- `Dog` inherits from `Animal`, reusing its `eat()` method.
- Also has its own method `bark()`.
- Demonstrates simple inheritance (is-a relationship).

Output:

Animal is eating.  
Dog is barking.
*/
