/*
//Constant OBJECT AND CONSTRUCTOR
it is a object whose data cannot change afterr it is created
we use the constant keyword
a constant object can call only constant menmber function
Syntax:- Const ClassName ObjectName;
//CONSTANT MEMBER FUNCTIONS:-
Syntax:- void Show()const
{//code}
A member function can be made constant by putting constant after the function paranthesis
Example:-
*/
// #include<iostream>
// using namespace std;
//  class Student
//     {
//     public:
//     void show()const 
//     {
//     cout<<"Hello"<<endl;
//     }
//     };
//     int main(){
//     const Student S1;
//     S1.show();
//    }
// Employee class
// #include<iostream>
// using namespace std;
// class Employee{
//     string name;
//     int salary;
//     int id;
//     public:
//     Employee(string n, int s, int i){
//         name=n;
//         salary=s;
//         id=i;
//     }
//     void show() const{
//         cout<<"Name: "<<name<<endl;
//         cout<<"Salary: "<<salary<<endl;
//         cout<<"Id number: "<<id;
//     }
// };
// int main(){
//     const Employee E("Jhalak", 50000000, 432);
//     E.show();
//     return 0;
// }

//Wap in c++ to create a student class taking static data members object count using constructor and destructor 
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    static int objectCount;  

public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
        objectCount++;   
        cout << "Constructor called for " << name<<endl;
        cout<< " Current object count = " << objectCount << endl;
    }

    Student() {
        cout << "Destructor called for " << name <<endl;
        cout<< " Current object count before deletion = " << objectCount << endl;
        objectCount--;  
        cout << "Object count after deletion = " << objectCount << endl;
    }

    void display() {
        cout << "Name: " << name <<endl;
        cout<<" Roll No: " << rollNo << endl;
    }

    static void showCount() {
        cout << "Total active objects = " << objectCount << endl;
    }
};

int Student::objectCount = 0;
int main() {
    Student s1("Ritu", 913);
    Student s2("Jhalak", 914);

    s1.display();
    s2.display();

    Student::showCount();

    {
        Student s3("Ridah", 911);
        s3.display();
        Student::showCount();
    } 

    Student::showCount();

    return 0;
}
