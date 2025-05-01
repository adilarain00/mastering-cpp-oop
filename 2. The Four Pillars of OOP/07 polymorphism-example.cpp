#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

// Another derived class
class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Shape* s1;           // base class pointer
    Rectangle r;
    Triangle t;

    s1 = &r;
    s1->draw();          // calls Rectangle::draw()

    s1 = &t;
    s1->draw();          // calls Triangle::draw()

    return 0;
}

/*
Explanation:

- Base class pointer `s1` points to different derived objects.
- At runtime, correct overridden `draw()` function is called.
- Demonstrates runtime polymorphism using virtual functions.

Output:

Drawing Rectangle  
Drawing Triangle
*/
