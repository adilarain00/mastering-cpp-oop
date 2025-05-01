#include <iostream>
using namespace std;

class Account {
private:
    int balance;    // private data member

public:
    void setBalance(int b) {
        balance = b;    // sets the balance
    }

    int getBalance() {
        return balance; // returns the balance
    }
};

int main() {
    Account acc;
    acc.setBalance(5000);                  // Set value using setter
    cout << "Balance: " << acc.getBalance();  // Get value using getter

    return 0;
}

/*
Explanation:

1. The `balance` variable is private (hidden from outside).
2. Public methods `setBalance()` and `getBalance()` provide controlled access.
3. This is encapsulation — hiding data and accessing via methods.

Output:

Balance: 5000
*/
