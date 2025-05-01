#include <iostream>
using namespace std;

// Base class for Book and Animal
class Item {
public:
    string title;
    static int count;  // static member to keep track of total items

    Item(string t) {
        title = t;
        count++;  // increment count whenever an object is created
    }

    // Static method to show count of items
    static void showCount() {
        cout << "Total Items: " << count << endl;
    }

    virtual void display() {  // Virtual function for polymorphism
        cout << "Item Title: " << title << endl;
    }
};

int Item::count = 0;  // Initializing static variable

// Derived class for Book
class Book : public Item {
public:
    Book(string t) : Item(t) {}

    // Copy constructor
    Book(const Book& b) : Item(b) {
        title = b.title;
    }

    void display() override {  // Overriding display function
        cout << "Book Title: " << title << endl;
    }
};

// Derived class for Animal
class Animal : public Item {
public:
    Animal(string t) : Item(t) {}

    void display() override {  // Overriding display function
        cout << "Animal Title: " << title << endl;
    }
};

int main() {
    // Creating Book and Animal objects
    Book b1("C++ Programming");
    Book b2 = b1;  // Copy constructor is called here

    Animal a1("Lion");

    // Displaying items
    b1.display();  // Book Title: C++ Programming
    b2.display();  // Book Title: C++ Programming (from copied object)
    a1.display();  // Animal Title: Lion

    // Static method to show total item count
    Item::showCount();  // Total Items: 3

    return 0;
}

/*
Explanation:

1. **Static Keyword**: The static member `count` keeps track of the total number of items (Books and Animals).
2. **Copy Constructor**: When creating `b2` from `b1`, the copy constructor copies the title from `b1` to `b2`.
3. **Function Overriding**: Both `Book` and `Animal` override the `display()` function to show their specific titles.
4. **Virtual Function**: Using a virtual function (`display()`), we can have polymorphic behavior for both `Book` and `Animal` objects.

Output:

Book Title: C++ Programming  
Book Title: C++ Programming  
Animal Title: Lion  
Total Items: 3
*/
