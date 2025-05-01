#include <iostream>
using namespace std;

// Class definition
class Book {
public:
    string title;    // title of the book
    string author;   // author of the book
};

int main() {
    Book book1, book2;       // Create two objects of class Book

    book1.title = "C++ Basics";
    book1.author = "Adil Amjad";

    book2.title = "DSA with C++";
    book2.author = "John Doe";

    // Display data of book1
    cout << "Book 1 Title: " << book1.title << endl;
    cout << "Book 1 Author: " << book1.author << endl;

    // Display data of book2
    cout << "Book 2 Title: " << book2.title << endl;
    cout << "Book 2 Author: " << book2.author << endl;

    return 0;
}

/*
Explanation:

1. Class `Book` has two public members: `title` and `author`.
2. Two objects `book1` and `book2` are created.
3. Each object holds separate values for title and author.
4. The information is displayed using `cout`.

Output:

Book 1 Title: C++ Basics  
Book 1 Author: Adil Amjad  
Book 2 Title: DSA with C++  
Book 2 Author: John Doe
*/
