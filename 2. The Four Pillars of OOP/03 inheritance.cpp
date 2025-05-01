#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle starting..." << endl;
    }
};

// Derived class inherits from Vehicle
class Car : public Vehicle {
public:
    void honk() {
        cout << "Car honking!" << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();  // inherited function
    myCar.honk();   // own function

    return 0;
}

/*
Explanation:

- `Car` inherits from `Vehicle` using public inheritance.
- Inherited `start()` method from base class.
- Demonstrates the concept of reusability through inheritance.

Output:

Vehicle starting...  
Car honking!
*/
