#include <iostream>
using namespace std;

class Demo {
public:
    int pubVar;            // Accessible everywhere

private:
    int privVar;           // Accessible only within the class

protected:
    int protVar;           // Accessible in derived classes

public:
    void setValues() {
        pubVar = 10;
        privVar = 20;
        protVar = 30;
    }

    void display() {
        cout << "Public: " << pubVar << endl;
        cout << "Private: " << privVar << endl;
        cout << "Protected: " << protVar << endl;
    }
};

int main() {
    Demo obj;
    obj.setValues();       // Set values through public method
    obj.display();         // Display all values

    return 0;
}

/*
Explanation:

1. `pubVar` is accessible from anywhere.
2. `privVar` is private, so it's only accessed inside class methods.
3. `protVar` is protected, accessible within class and derived classes.
4. `setValues()` and `display()` are public methods to set and show all values.

Output:

Public: 10  
Private: 20  
Protected: 30
*/
