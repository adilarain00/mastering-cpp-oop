#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    Car() {
        brand = "Toyota";    // default value set in constructor
    }

    void show() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car car1;       // Constructor is called automatically
    car1.show();    // Display brand

    return 0;
}

/*
Explanation:

1. The class `Car` has a constructor that sets the brand to "Toyota".
2. When an object `car1` is created, the constructor runs automatically.
3. No parameters are passed — it's a default constructor.

Output:

Brand: Toyota
*/
