#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called!" << endl;
    }

    ~Demo() {
        cout << "Destructor called!" << endl;  // Runs when object is destroyed
    }
};

int main() {
    Demo d1;  // Object creation

    return 0;
}

/*
Explanation:

1. Constructor runs automatically when object is created.
2. Destructor runs automatically when object goes out of scope.
3. Destructor is used to free memory or clean up resources.

Output:

Constructor called!  
Destructor called!
*/
