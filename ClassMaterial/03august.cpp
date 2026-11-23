//WAP to make class backaccount with three private member as balance, accountholdername, accountnumber and three public member functions as deposit(), withdraw() and displaybalance(). Create object of the class and call the member functions.
//try to deposite 5000 from first account and withdraw 2000 from the same account and display the balance after each operation.
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;
    string accountHolderName;
    long long accountNumber;

public:
    BankAccount(double initialBalance, string name, long long accNumber) {
        balance = initialBalance;
        accountHolderName = name;
        accountNumber = accNumber;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    void displayBalance() {
        cout << "Account Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account(1000.0, "John Doe", 123456789);
    account.displayBalance();
    account.deposit(5000.0);
    account.displayBalance();
    account.withdraw(2000.0);
    account.displayBalance();
    return 0;
}
