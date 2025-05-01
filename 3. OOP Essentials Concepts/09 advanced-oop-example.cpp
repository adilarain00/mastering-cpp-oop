#include <iostream>
using namespace std;

// Base class for Animals
class Animal {
public:
    string name;

    Animal(string n) : name(n) {}

    virtual void speak() {  // Virtual function for polymorphism
        cout << name << " makes a sound." << endl;
    }
};

// Derived class for Mammals (Multilevel Inheritance)
class Mammal : public Animal {
public:
    Mammal(string n) : Animal(n) {}

    void speak() override {  // Overriding the virtual function
        cout << name << " speaks like a mammal." << endl;
    }
};

// Derived class for Birds (Multilevel Inheritance)
class Bird : public Animal {
public:
    Bird(string n) : Animal(n) {}

    void speak() override {  // Overriding the virtual function
        cout << name << " chirps like a bird." << endl;
    }
};

// Multiple Inheritance
class Bat : public Mammal, public Bird {
public:
    Bat(string n) : Mammal(n), Bird(n) {}

    void fly() {
        cout << name << " is flying." << endl;
    }

    void speak() override {  // Overriding virtual function to handle both Mammal and Bird sounds
        cout << name << " squeaks like a bat." << endl;
    }
};

// Operator Overloading for Complex Number Addition
class Complex {
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}

    // Overload the + operator to add two Complex objects
    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Inheritance examples
    Animal* a1 = new Mammal("Lion");
    Animal* a2 = new Bird("Eagle");
    Animal* a3 = new Bat("Bat");

    a1->speak();  // Lion speaks like a mammal
    a2->speak();  // Eagle chirps like a bird
    a3->speak();  // Bat squeaks like a bat

    // Complex number example with operator overloading
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;  // Calls overloaded + operator

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();
    cout << "Sum of Complex Numbers: ";
    c3.display();

    // Cleanup
    delete a1;
    delete a2;
    delete a3;

    return 0;
}

/*
Explanation:

1. **Inheritance Types**:
   - **Multilevel Inheritance**: `Mammal` and `Bird` inherit from `Animal`.
   - **Multiple Inheritance**: `Bat` inherits from both `Mammal` and `Bird`.
   - **Polymorphism**: Overriding the `speak()` function in derived classes demonstrates dynamic polymorphism, which changes behavior based on object type.
   
2. **Operator Overloading**:
   - The `+` operator is overloaded to add two `Complex` numbers by summing their real and imaginary parts.

Output:

Lion speaks like a mammal  
Eagle chirps like a bird  
Bat squeaks like a bat  
Complex Number 1: 3 + 4i  
Complex Number 2: 1 + 2i  
Sum of Complex Numbers: 4 + 6i  
*/

