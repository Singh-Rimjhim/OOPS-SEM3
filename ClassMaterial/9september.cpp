
// an object can be passed through a function just like a normal variable passing an object of a clss to a functions an arguments. 
//object can be passed by functions an arguments object can bepassed by value by reference
//passing by reference avoids making a copy and using constant prevents modification of the original object.
//Write the c++ programm of swapping of two numbers using call by value and also by call by reference
// #include <iostream>
// using namespace std;
// class Swapper {
// public:
//     // call by value
//     void swapByValue(int x, int y){
//         int temp = x;
//         x = y;
//         y = temp;
//     }
// };

// int main(){

// int a,b;
// cout<<"Enter value of a and b="<<endl;
// cin>>a>>b;
// Swapper obj;
// cout << "Original values: a=" << a << ", b=" << b << endl;

//     obj.swapByValue(a, b);
//     cout << "After swapByValue: a=" << a << ", b=" << b << endl;
// }

// #include <iostream>
// using namespace std;
// class Swapper {
// public:
//     // call by reference
//     void swapByReference(int &x, int &y){
//         int temp = x;
//         x = y;
//         y = temp;
//     }
// };

// int main(){

// int a,b;
// cout<<"Enter value of a and b="<<endl;
// cin>>a>>b;
// Swapper obj;
// cout << "Original values: a=" << a << ", b=" << b << endl;

//     obj.swapByReference(a, b);
//     cout << "After swapByReference: a=" << a << ", b=" << b << endl;
//     return 0;
// }

//PRACTICE QUESTION
/*A Software company wants to develop a information system where student details must remain protected from unauthorized modification.
Design a suitable class heirarchy demonstrating, data hiding, controlled access to data access and members fuction defined outside the class.
Justify your design choices and implement atleast one membr function as an inline function outside the class defination.*/