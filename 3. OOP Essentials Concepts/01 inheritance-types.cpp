#include <iostream>
using namespace std;

// Single Inheritance
class Animal {
public:
    void speak() {
        cout << "Animal speaks." << endl;
    }
};

// Multilevel Inheritance
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks." << endl;
    }
};

// Multiple Inheritance
class Bird {
public:
    void fly() {
        cout << "Bird flies." << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void hang() {
        cout << "Bat hangs upside down." << endl;
    }
};

// Hierarchical Inheritance
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// Hybrid Inheritance (combination of multilevel, multiple, and hierarchical)
class BatDog : public Bat, public Dog {
public:
    void flyAndBark() {
        fly();
        bark();
    }
};

int main() {
    BatDog bd;
    bd.flyAndBark();    // Hybrid Inheritance example

    return 0;
}

/*
Explanation:

1. **Single Inheritance**: Animal class is the base, and Mammal is the derived class.
2. **Multilevel Inheritance**: Mammal is derived from Animal, and Dog is derived from Mammal.
3. **Multiple Inheritance**: Bat inherits from both Mammal and Bird.
4. **Hierarchical Inheritance**: Dog and Mammal share a common base (Animal).
5. **Hybrid Inheritance**: BatDog combines multiple and multilevel inheritance.

Output:

Bird flies.  
Dog barks.  
*/
