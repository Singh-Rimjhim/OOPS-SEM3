//copy construction:-
//when u create a copy of an object using another object of the same class,c++ automatica;;y copies the values of all data members this is known as default copy
//KEY SYNTAX: Class Name (const Class Name &object name){//Copy code}
//Example:-Student S1(90);
    //Student S2(S1); //Copy constructor is called
#include <iostream>
using namespace std;
// class Student {
//     public:
//         int marks;
//         string name;
// };
// int main() {
//     Student S1;
//     S1.marks = 90;
//     S1.name = "John";

//     Student S2(S1); // Copy constructor is called
//     //Another way to write:- Student S2 = S1;
//     cout << "S1 Marks: " << S1.marks << ", Name: " << S1.name << endl;
//     cout << "S2 Marks: " << S2.marks << ", Name: " << S2.name << endl;

//     return 0;
// }


//------------------------------//
// class Student {
//     private:
//         int rollno;
//         string name;
//     public:
//         // Copy constructor
//         Student(int r, string n) {
//             rollno = r;
//             name = n;
//         }
//         Student(const Student &s1) {
//             rollno = s1.rollno;
//             name = s1.name;
//         }
// };
// int main() {
//     Student S1(1, "John");
//     Student S2(S1); // Copy constructor is called

//     return 0;
// }

//------------------------------//
//create a class employee having id and salary using a paramteriatised cinstructor and second object using copy constructor

// class Employee
// {
//     int id;
//     float salary;

// public:
//     // Parameterized constructor
//     Employee(int i, float s)
//     {
//         id = i;
//         salary = s;
//     }

//     // Copy constructor
//     Employee(const Employee &e)
//     {
//         id = e.id;
//         salary = e.salary;
//     }

//     void display()
//     {
//         cout << "Employee ID: " << id << endl;
//         cout << "Employee Salary: " << salary << endl;
//     }
// };

// int main()
// {
//     // First object using parameterized constructor
//     Employee e1(101, 50000);

//     // Second object using copy constructor
//     Employee e2(e1);

//     cout << "First Employee:" << endl;
//     e1.display();

//     cout << "\nSecond Employee (Copied):" << endl;
//     e2.display();

//     return 0;
// }

 //------------------------------//
 //create a class employee having id and salary using a paramteriatised  cinstructor and second object using copy constructor
class Employee
{
    int id;
    float salary;

public:
    Employee(int i, float s)
    {
        id = i;
        salary = s;
    }

    // Copy constructor
    Employee(Employee &e)
    {
        id = e.id;
        salary = e.salary;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1(101, 50000);  

    Employee e2(e1);          

    cout << "First Employee:" << endl;
    e1.display();

    cout << "Second Employee:" << endl;
    e2.display();

    return 0;
}
