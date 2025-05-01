#include <iostream>
using namespace std;

class Base {
public:
    void nonVirtualFunction() {    // Non-virtual function
        cout << "Base class non-virtual function." << endl;
    }

    virtual void virtualFunction() {  // Virtual function
        cout << "Base class virtual function." << endl;
    }
};

class Derived : public Base {
public:
    void nonVirtualFunction() {    // Non-virtual function (overrides base function)
        cout << "Derived class non-virtual function." << endl;
    }

    void virtualFunction() override {  // Virtual function (overrides base function)
        cout << "Derived class virtual function." << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;

    bptr = &d;

    bptr->nonVirtualFunction();   // Calls Base class version, as it's non-virtual
    bptr->virtualFunction();      // Calls Derived class version due to virtual function

    return 0;
}

/*
Explanation:

1. **Non-Virtual Function**: The non-virtual function `nonVirtualFunction()` will always call the function in the base class (even when using a derived class object).
2. **Virtual Function**: The virtual function `virtualFunction()` uses dynamic dispatch, calling the overridden function in the derived class (even when using a base class pointer).

Output:

Base class non-virtual function.  
Derived class virtual function.
*/
