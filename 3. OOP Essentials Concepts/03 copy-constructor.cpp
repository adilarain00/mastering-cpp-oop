#include <iostream>
using namespace std;

class Book {
public:
    string title;

    Book(string t) {
        title = t;
    }

    // Copy constructor
    Book(const Book& b) {
        title = b.title;
    }

    void show() {
        cout << "Book Title: " << title << endl;
    }
};

int main() {
    Book b1("C++ Mastery");
    Book b2 = b1;     // copy constructor is called

    b1.show();
    b2.show();

    return 0;
}

/*
Explanation:

1. Copy constructor copies data from one object to another.
2. Used when object is initialized using another object.

Output:

Book Title: C++ Mastery  
Book Title: C++ Mastery
*/
