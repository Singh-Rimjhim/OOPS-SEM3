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
//
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