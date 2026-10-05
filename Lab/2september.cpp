// // Design  a class to represent a bank account with proper data hiding and member functions for deposits and withdrawal operation. 

// #include<iostream>
// using namespace std;
// class BankAccount {
//     double amount;
//     public:
//     void setAmount(double amt) {    // Set the initial amount for the account
//         amount = amt;
//     }
//     void deposit(double amt) {  // Deposit amount to the account
//         if (amt > 0) {
//             amount += amt;
//             cout << "Deposited: " << amt << endl;
//         } else {
//             cout << "Invalid deposit amount!" << endl;
//         }
//     }
//     void withdraw(double amt) { // Withdraw amount from the account
//         if (amt > 0 && amt <= amount) {
//             amount -= amt;
//             cout << "Withdrawn: " << amt << endl;
//         } else {
//             cout << "Invalid withdrawal amount!" << endl;
//         }
//     }
//     double getBalance() {   //Final balance after all transactions
//         return amount;
//     }

// };
// int main() {
//     BankAccount account;
//     account.setAmount(1000.0); // Initial amount
//     cout << "Initial Balance: " << account.getBalance() << endl;

//     account.deposit(500.0); //First Deposition
//     cout << "Balance after deposit: " << account.getBalance() << endl;

//     account.withdraw(200.0); // First Withdrawal
//     cout << "Balance after withdrawal: " << account.getBalance() << endl;

//     account.withdraw(1500.0); // Invalid withdrawal
//     cout << "Final Balance: " << account.getBalance() << endl;

//     return 0;
// }

// //Implement a cpp program using friend function to illustrusted shared data and controlled access
// //Write a c++ program to demonstrate how a friend function can access private data of two different classes and compare their values.

// #include <iostream>
// using namespace std;

// // Forward declaration
// class ClassB;

// class ClassA {
// private:
//     int markA;

// public:
//     ClassA(int m) : markA(m) {}

//     // Declare friend function
//     friend void compareValues(ClassA, ClassB);
// };

// class ClassB {
// private:
//     int markB;

// public:
//     ClassB(int m) : markB(m) {}

//     // Declare friend function
//     friend void compareValues(ClassA, ClassB);
// };

// // Friend function definition
// void compareValues(ClassA objA, ClassB objB) {
//     cout << "Mark in ClassA: " << objA.markA << endl;
//     cout << "Mark in ClassB: " << objB.markB << endl;

//     if (objA.markA > objB.markB)
//         cout << "ClassA has the larger value." << endl;
//     else if (objA.markA < objB.markB)
//         cout << "ClassB has the larger value." << endl;
//     else
//         cout << "Both values are equal." << endl;
// }

// int main() {
//     ClassA a(10);
//     ClassB b(20);

//     compareValues(a, b);

//     return 0;
// }

//wap using cpp using features such as auto and range based for loop transverse and display 