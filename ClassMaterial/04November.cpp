/*
Function overiding is a predefining of a function with the same fuction name , with the same parameters list in the same return type
also known as run time polymorphism.
Ex:-
class A{
public:
    void show(){
        cout<<"I am a base class"<<endl;
    }
};
class B:public A{
public:
    void show(){
        cout<<"I am a derived class"<<endl;
    }
};
int main(){
    B b1;
    b1.show();
   return 0;
   }

In function overloading, the function name is same but the parameters are different. 
In function overriding, the function name and parameters are same but the class is different
overloading:-easily occurs in same class
overriding:-requires inheritance to occur in different class
*/
//Write a c++ programm to demonstrate function overriding using a base class animal and derived class dog. Define a function sound in both classes to display diff sound
/*
#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"Animal makes sound"<<endl;
    }
};
class Dog:public Animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};
int main(){
    Animal a;
    Dog d;

    a.sound();
    d.sound();
    return 0;
}
*/
//Write a c++ programm to demonstrate function overriding using a base class employee and derived class Manager. Override the function calculate salary to display different salaries for each employee
#include<iostream>
using namespace std;
class Employee{
    public:
    virtual void calculateSalary(){
        cout<<"Employee salary is 500000"<<endl;
    }
};
class Manager:public Employee{
    public:
    void calculateSalary(){
        cout<<"Manager salary is 1000000"<<endl;
    }
};
int main(){
    Employee e;
    Manager m;
    e.calculateSalary();
    m.calculateSalary();
    return 0;
}

