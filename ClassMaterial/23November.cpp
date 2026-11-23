//uniary operator overloading---
//syntax using member fxn --
//return_type operator ++()
//
////fxn body
//


//(* this)
//zero parameter =prefix form
// a dummy int parameter marks the prefix form 
// prefix should return by refernce (&)
//postfix must return the odd value by copy
//common unary set --> +,-,,!,~,++,--


// using a member fxn change the sign of data member 
//write a c++ program to overload the preincrement operator (++) ,using a member fxn to increase the value of an object by 1. 
/*
#include<iostream> 
using namespace std;
class Number{
    int x;
    public:
    Number(int a){
        x=a;
    }
    void operator - (){
        x=-x;
    }
    void display(){
        cout << "value " << x << endl;
    }
};

int main(){
    Number n(10);
    cout << "Before overloading " << endl;
    n.display();
    -n;

    cout << "After overloading :"<<endl;
    n.display();

    return 0;
}
*/

/*
Binary Operation overloading:-
It takes 2 operands can be overloaded using member function or friend function, eg. +, -, *, / etc.

Syntax: Binary Operator using member function
        return_type Operator + (Class Name obj){
            //Function body
        }

QUESTION: WAP to overload the binary + operator using a member function to add two complex numbers.
*/

#include<iostream>
using namespace std;
class complex{
int real, imag;
public:
    complex(int r=0, int i=0){
        real = r;
        imag = i;
    }
    complex operator + (complex c){

    }
};
