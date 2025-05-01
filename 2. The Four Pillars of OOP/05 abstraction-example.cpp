#include <iostream>
using namespace std;

// Abstract class (interface-like behavior)
class Shape {
public:
    virtual void area() = 0;  // pure virtual function
};

// Concrete class implementing abstraction
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Circle c(5);
    c.area();  // abstraction in action

    return 0;
}

/*
Explanation:

- Abstract class `Shape` forces derived classes to define `area()`.
- `Circle` implements that function.
- This hides internal complexity and focuses on essential details only.

Output:

Circle Area: 78.5
*/
