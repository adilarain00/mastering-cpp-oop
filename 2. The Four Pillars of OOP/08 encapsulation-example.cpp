#include <iostream>
using namespace std;

class BankAccount {
private:
    string owner;     // private data member
    double balance;   // private data member

public:
    // Constructor
    BankAccount(string name, double amount) {
        owner = name;
        balance = amount;
    }

    // Public method to deposit
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    // Public method to withdraw
    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
        }
    }

    // Public method to show balance
    void showBalance() {
        cout << owner << "'s Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("Adil", 1000);

    acc.deposit(500);     // increase balance
    acc.withdraw(200);    // reduce balance
    acc.showBalance();    // display final balance

    return 0;
}

/*
Explanation:

- Private members `owner` and `balance` are only accessible through public methods.
- This protects data from being modified directly — key concept of encapsulation.
- All interaction happens through controlled methods (deposit, withdraw, showBalance).

Output:

Adil's Balance: $1300
*/
