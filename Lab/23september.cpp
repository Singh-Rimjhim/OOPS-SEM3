/*
//POINTER
A pointer is a special type variable that store memory address of another variable.
Example:-
pointer -- diff btw variable and pointer
a pointer is a special type of variable that store the mmeory address of another variable 
int x=10 
int *p=8x
x--stor value 10 , 8x--give address of x 
p- store the address of x
*p-- gives the value stored at that address

in c++ ,a pointer can store the address of the object,
*/

//-------------Basic code for understanding------------------------//

// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     int marks;
//     void show(){
//         cout<<"Marks: "<<marks;
//     }
// };
// int main(){
//     Student S;
//     Student*P = &S;
//     P-> marks = 90;
//     P->show();
//     return 0;
// }

/*
When we have pointer to an object, we use arrow operator to access the member.
NORMAL OBJECT:-
Eg- S.marks=90;
S.show();
-> We use •(dot operator)
Pointer to object:->
P-> marks = 90;
P->show();
we use->
Another way to access object using pointer
(*P)•marks=90;
(*P)•show();
*/

/*
NEED OF POINTER:->
•Work with object to store their address
•Create object dynamically at run time 
•To manage memory during object execution
•To pass object effieciently to functions
*/

//-----------------QUESTION-1-----------------//

//wap in cpp to store a integer in a viariable and display its value using a pointer
// #include <iostream>
// using namespace std;

// int main() {
//     int num = 50;        
//     int *ptr = &num;     

//     cout << "Value of num directly: " << num << endl;
//     cout << "Value of num using pointer: " << *ptr << endl;
//     cout << "Address of num: " << ptr << endl;

//     return 0;
// }

//-----------------QUESTION-2-----------------//

//Write a c++ programm to use 2 numbers using pointer
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 15, b = 25;   
//     int *p1 = &a;         
//     int *p2 = &b;         

//     int sum = *p1 + *p2;  
//     cout << "Sum using pointers: " << sum << endl;

//     return 0;
// }
