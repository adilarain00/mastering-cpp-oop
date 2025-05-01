#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
private:
    char* name;
    int balance;
    int accountNumber;

public:
    // Constructor
    BankAccount(const char* name, int balance, int accountNumber) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);     // deep copy name
        this->balance = balance;
        this->accountNumber = accountNumber;
    }

    // Copy Constructor (Deep Copy)
    BankAccount(const BankAccount& acc) {
        name = new char[strlen(acc.name) + 1];
        strcpy(name, acc.name);
        balance = acc.balance;
        accountNumber = acc.accountNumber;
    }

    // Encapsulation - Getters
    int getBalance() {
        return balance;
    }

    // Public method
    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount > balance)
            cout << "Insufficient balance!" << endl;
        else
            balance -= amount;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    // Destructor
    ~BankAccount() {
        delete[] name;
        cout << "Destructor called for " << accountNumber << endl;
    }
};

int main() {
    BankAccount acc1("Adil", 10000, 12345);   // Constructor
    acc1.deposit(2000);                       // Deposit money
    acc1.withdraw(3000);                      // Withdraw money
    acc1.showDetails();                       // Show account info

    BankAccount acc2 = acc1;                  // Deep Copy
    acc2.deposit(1000);                       // Separate copy
    acc2.showDetails();                       // Show copied account

    return 0;
}

/*
Explanation:

- Uses constructor, deep copy, `this` pointer, and destructor.
- Private members with public methods (encapsulation).
- Demonstrates copy constructor, memory handling, and clean design.

Output:

Name: Adil  
Account Number: 12345  
Balance: 9000  
Name: Adil  
Account Number: 12345  
Balance: 10000  
Destructor called for 12345  
Destructor called for 12345
*/
