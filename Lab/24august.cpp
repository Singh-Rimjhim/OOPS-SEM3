
//defining member fxn
//inside the class
//outside the class
//outside member fxn as inline
//data handling

//inside the class
// #include<iostream>
// using namespace std;
// class student{ 
//     public:
//     void dispaly(){
//         cout<<"Hello \n";
//     }
// };
// int main(){
//     student s1;
//     s1.display();
//     return 0;
// }

//outside the class---
//first we declare the fxn inside the class  and then define outside using scope resolution operator(::)
// #include<iostream>
// using namespace std;
// class student{ 
//     public:
//     void display();
//     };
//     void  student::dispaly(){
//         cout<<"Hello \n";
//     }

// int main(){
//     student s1;
//     s1.display();
//     return 0;
// }

//inline function is just a small function where compiler may replace the function called with actual function code
//a function defined inside the class is automatically treared as inline function , if it is written outside the class, we can inline keyword
//inline function can be reduced function call over head
// #include<iostream>
// using namespace std;
// class demo{
// public:
// void show(){
// }};
//     Inline void Demo :: show(){
//         cout<<"hello ";
//     }

//     int main(){
//         return 0;
//     }

//data hiding---it means preventing direct excess to the internal data of the class .Usually data members declared private and access through the public function.


