//Data Hiding
//helps in preventing the data in direct access
//used in encaplsulation
//Design a class to represet a bank account with proper data hiding and member functions for deposits and withdrawal operation

#include <iostream>
using namespace std;

class BankAccount {
private:
    
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string holder, double initialBalance) {
        
        accountHolder = holder;
        balance = initialBalance;
    }

    // Deposit 
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw 
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Display account details
    void displayDetails() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

// main function
int main() {
    BankAccount acc("Ritu", 5000.0);

    acc.displayDetails();
    acc.deposit(300);
    acc.withdraw(400);
    acc.displayDetails();

    return 0;
}
