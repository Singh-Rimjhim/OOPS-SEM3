/*
//NESTED CLASS
It is a class that is declared inside another class.
syntax-- outer class: inter class object
class outer{
class inner{};
 };

a nested class can be decalred under public private and protected acces modifier
need of nested class-- a nested class is useful when a one class is closely related to another class for eg-- car may have class engine 
computer may have class processor , school may have class students 
The inner class is used to keep related functionality together and organized
Example:-
#include<iostream>
using namespace std;
class Outer{
    public:
    class Inner{
        public:
        void show(){
            cout<<"This is InnerClass";
        }
    };
};
int main(){
    Outer::Inner obj;
    Obj.show();
    return 0;
}
*/
//Wap in cpp using the nested class to store student name and their address

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     class address{
//         public:
//         void p(){
//             cout<<"Gorakhpur";
//         }
//     };
// };

// int main(){
//     student:: address a1;
//     a1.p();
// }


//c++ program using a nested class using a computer class to display computer details and its processor informatoion 
#include<iostream>
using namespace std;
class computer{
    public:
    void details(){
        cout<<"Great computer\n";
    }
        class processor{
            public:
            void show(){
                cout<<"i5 processor\n";
            }
        };
};

int main(){
    computer p1;
    computer :: processor pq;
    p1.details();
    pq.show();
}