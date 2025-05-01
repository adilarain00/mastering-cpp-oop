#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s;            // base class pointer
    Circle c;
    s = &c;

    s->draw();           // runtime polymorphism (virtual function)

    return 0;
}

/*
Explanation:

- Base class pointer `s` points to derived class object `c`.
- `draw()` is overridden in `Circle`.
- Because of `virtual`, the derived version runs at runtime — this is polymorphism.

Output:

Drawing Circle
*/
