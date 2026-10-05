//Constructor
//Types of constructor:- 1. default constructor 2. parameterized constructor 3. copy constructor
//A constructor is a special member function of a class that is automatically called when an object of that class is created.
//It is used to initialize the object's data members and allocate resources if needed. 
//The constructor has the same name as the class and does not have a return type, not even void.
//It is defined publicly
//example of constructor in C++:
// #include<iostream>
// using namespace std;
// class Student {
//     int roll;
//     public:
//             void setRollno(int r) {
//                 roll = r;
//             }
//                 void displayRoll() {
//                     cout << "Roll Number: " << roll << endl;
//                 }
//             };
//                 int main() {
//                     Student s1;
//                     s1.setRollno(101);
//                     s1.displayRoll();
//                     return 0;
//                 }

                // // Construcor
                // #include <iostream>
                // using namespace std;
                // class Student {
                //     int roll;
                //     public:
                //         // Parameterized constructor
                //         Student(int r) {
                //             roll = r;
                //             cout << "Roll Number: " << roll << endl;
                //         }
                // };
                // int main() {
                //     Student s1(101);
                //     return 0;
                // }

// Write a c++ student class program using constructor which accept students name and roll number

// #include <iostream>
// using namespace std;
// class Student {
//     string name;    
//     int rollNumber;
//     public:
//         // Parameterized constructor
//         Student(string n, int r) {
//             name = n;
//             rollNumber = r;
//         }

//         void displayDetails() {
//             cout << "Student Name: " << name << endl;
//             cout << "Roll Number: " << rollNumber << endl;
//         }
// };
//     int main() {
//         Student s1("Ritu", 101);
//         s1.displayDetails();
//         return 0;
//     }

// // bank account class using constructor to represet a bank account with proper data hiding and member functions for deposits and withdrawal operation
//     #include<iostream>
//     using namespace std;
//     class BankAccount {
//         string accountHolder;
//         double balance;
//         public:
//             // Parameterized constructor
//             BankAccount(string holder, double initialBalance) {
//                 accountHolder = holder;
//                 balance = initialBalance;
//             }

//             void deposit(double amount) {
//                 if (amount > 0) {
//                     balance += amount;
//                     cout << "Deposited: " << amount << endl;
//                 } else {
//                     cout << "Invalid deposit amount!" << endl;
//                 }
//             }

//             void withdraw(double amount) {
//                 if (amount > 0 && amount <= balance) {
//                     balance -= amount;
//                     cout << "Withdrawn: " << amount << endl;
//                 } else {
//                     cout << "Insufficient balance or invalid amount!" << endl;
//                 }
//             }

//             void displayDetails() {
//                 cout << "Account Holder: " << accountHolder << endl;
//                 cout << "Balance: " << balance << endl;
//             }
//     };
//     int main() {
//         BankAccount acc("Ritu", 5000.0);
//         acc.displayDetails();
//         acc.deposit(300);
//         acc.withdraw(400);
//         acc.displayDetails();
//         return 0;
//     }

