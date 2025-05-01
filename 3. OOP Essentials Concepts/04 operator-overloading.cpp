#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Display function to print complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;  // Calls overloaded + operator

    c1.display();
    c2.display();
    c3.display();  // Display result of addition

    return 0;
}

/*
Explanation:

1. **Operator Overloading**: We overloaded the `+` operator to add two `Complex` numbers.
2. The `+` operator is now able to combine the `real` and `imag` parts of two complex numbers.

Output:

3 + 4i  
1 + 2i  
4 + 6i
*/
