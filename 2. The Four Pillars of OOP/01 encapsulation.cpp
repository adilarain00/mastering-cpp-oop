#include <iostream>
using namespace std;

// Class to demonstrate encapsulation
class Person {
private:
    string name;     // private data member
    int age;

public:
    void setName(string n) {
        name = n;    // setter function to set name
    }

    void setAge(int a) {
        age = a;     // setter function to set age
    }

    string getName() {
        return name; // getter function to get name
    }

    int getAge() {
        return age;  // getter function to get age
    }
};

int main() {
    Person p;

    p.setName("Adil");   // setting name using setter
    p.setAge(21);        // setting age using setter

    cout << "Name: " << p.getName() << endl;  // getting name using getter
    cout << "Age: " << p.getAge() << endl;    // getting age using getter

    return 0;
}

/*
Explanation:

- `name` and `age` are private members, so they cannot be accessed directly.
- Public getter and setter methods are used to control access to private data.
- This is called encapsulation (binding data with methods).

Output:

Name: Adil  
Age: 21
*/
