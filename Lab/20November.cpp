//constructor overloading types--default , parametrized and ?

//eg of constructor overloading--

// #include<iostream>
// using namespace std;
// class box{
//     int l,w,h;
//     public:
//     box(){
//       l(1),w(1),h(1) {
//       }  
//     }

//     box(int side);
//     l(side) ,w(side),h(side){}

//     boc
// }
// int main(){

// }

//write a c++ program to calculate simple interest using fxn overloading . create a overloaded fxn to calculate interest using different combinations
//of parameteres . 
//write a c++ program using fxn overriding with inheritance . create a base class employe and derived class manager . override the display fxn to display
//their respective details
//write a c++ program to overload the plus operator to add 2 complext number using a member fxn .
//write a c++ program to demonstrate constructor overloading by creating 3 constructor default , parametrized with 1 parameter  and prarametrized with 2 parameter

// #include <iostream>
// using namespace std;

// class Interest {
// public:
//     // 3 parameters
//     float calculate(float p, float r, float t) {
//         return (p * r * t) / 100;
//     }

//     // 2 parameters (assuming time = 1 year)
//     float calculate(float p, float r) {
//         return (p * r) / 100;
//     }

//     // 1 parameter (assuming rate = 5% and time = 1 year)
//     float calculate(float p) {
//         return (p * 5) / 100;
//     }
// };

// int main() {
//     Interest obj;

//     cout << "Simple Interest (3 parameters): "
//          << obj.calculate(10000, 8, 2) << endl;

//     cout << "Simple Interest (2 parameters): "
//          << obj.calculate(10000, 8) << endl;

//     cout << "Simple Interest (1 parameter): "
//          << obj.calculate(10000) << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Employee {
// public:
//     string name;
//     int id;
//     float salary;

//     void display() {
//         cout << "Employee Details" << endl;
//         cout << "Name: " << name << endl;
//         cout << "ID: " << id << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// class Manager : public Employee {
// public:
//     string department;

//     void display() {
//         cout << "Manager Details" << endl;
//         cout << "Name: " << name << endl;
//         cout << "ID: " << id << endl;
//         cout << "Salary: " << salary << endl;
//         cout << "Department: " << department << endl;
//     }
// };

// int main() {
//     Employee e;
//     e.name = "Rahul";
//     e.id = 101;
//     e.salary = 30000;

//     Manager m;
//     m.name = "Aman";
//     m.id = 102;
//     m.salary = 50000;
//     m.department = "IT";

//     e.display();
//     cout << endl;
//     m.display();

//     return 0;
// }


#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "Enter second complex number:" << endl;
    c2.input();

    c3 = c1 + c2;

    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}