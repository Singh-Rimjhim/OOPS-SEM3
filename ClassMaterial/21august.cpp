// // Write a C++ program, create a student class for display the marks of student marks will be prvate
// #include<iostream>
// using namespace std;
// class students{
//     int marks;
//     public:
//     void setMarks(int x){
//         marks=x;
//     }
//     void getMarks(){
//         cout<<"Marks obtained by a Studennt is: "<< marks<< endl;
//     }
// };
// int main (){
//     students s;
//     s.setMarks(90);
//     s.getMarks();
//     return 0;
// }


//Friend class

// A friend class is an special class that can access private and protected member.
//A friend function is a special function that can access private and protected members.
//Friend function is not the member of class but it can access it private and protected members.
//Inheritance class mein member hota h..
//In friend function, we use friend keywords, global function and can be called as method/function.

// #include<iostream>
// using namespace std;
// class X{
//     private:
//     int a=5;
//     friend class Y;
// };
// class Y{
//     public:
//     void show(X obj){
//         cout<<obj.a<<endl;
//     }
// };
