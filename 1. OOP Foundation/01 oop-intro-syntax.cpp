#include <iostream>
using namespace std;

// Class definition
class Student {
public:
    string name;     // student's name
    int age;         // student's age
};

int main() {
    Student s1;             // Create object of Student class

    s1.name = "Adil";       // Assign value to name
    s1.age = 21;            // Assign value to age

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;

    return 0;
}

/*
Explanation:

1. A class named `Student` is defined with two public members: `name` and `age`.
2. In `main()`, an object `s1` of the class is created.
3. Values are assigned to its members using the dot operator.
4. Finally, the values are printed using `cout`.

Output:

Name: Adil  
Age: 21
*/
