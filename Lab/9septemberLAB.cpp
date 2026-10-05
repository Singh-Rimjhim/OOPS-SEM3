//write a c++ program , create a class multiply and use a parametrized constructor to multiply a two number .
//write a program and create a class rectangle and use a paramtrized constructor to calculate the area of rectangle 

// #include<iostream>
// using namespace std;
// class multiply{
// int a;
// int b;
// public:
// multiply(int x,int y){
//     a=x;
//     b=y;
//     cout<<"Multiply of two numbers "<<a<<" and "<<b<< " :- "<<a*b<<endl;
// }
// };
// class rectangle{
//     int m;
//     int n;
//     public:
//     rectangle(int s,int t){
//         m=s;
//         n=t;
//         cout<<"Area of rectangle of length "<<m<<" and breadth "<<n<<" :- "<<m*n<<endl;
//     }
// };
// int main(){
//     multiply(3,5);
//     rectangle(9,3);
// }

//Develop a programm to demonstrate different types of constructors behaviour in object life cycle management

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Default 
    Rectangle() {
        length = 0;
        breadth = 0;
        cout << "Default Constructor called!!" << endl;
    }

    //Parameterized 
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Parameterized Constructor called!!" << endl;
    }

    // Copy 
    Rectangle(const Rectangle &r) {
        length = r.length;
        breadth = r.breadth;
        cout << "Copy Constructor called!!" << endl;
    }

    
    int area() {
        return length*breadth;
    }
};

int main() {
    // Object with Default
    Rectangle rect1;
    cout << "Area of rectangle1 = " << rect1.area() << endl;

    // Object with Parameterized 
    Rectangle rect2(10, 5);
    cout << "Area of rectangle2 = " << rect2.area() << endl;

    // Object with Copy
    Rectangle rect3(rect2);
    cout << "Area of rectangle3 = " << rect3.area() << endl;

    return 0;
}
