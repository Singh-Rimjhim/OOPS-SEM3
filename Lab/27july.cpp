//ques1
// #include<iostream>
// #include<cmath>
// using namespace std;
// namespace simpleCalculator{
//     void add(int a,int b){
//         cout<<"Addition: "<<a+b<<endl;
//     }
//     void sub(int a,int b){
//         cout<<"Subtraction: "<<a-b<<endl;
//     }
// }
// namespace interestCalculator{
//     void simpleInterest(float p,float r, float t){
//         float si = (p*r*t)/100;
//         cout<<"SI "<<si<<endl;
//     }
//     void compoundInterest(float p,float r,float t){
//         float ci=p*pow(1+r/100,t)-p;
//         cout<<"CI: "<<ci<<endl;
//     }

// }
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     simpleCalculator :: add(a,b);
//     simpleCalculator :: sub(a,b);
//     float p, r, t;
//     cout << "\nEnter Principal, Rate and Time: ";
//     cin >> p >> r >> t;
//     interestCalculator :: simpleInterest(p,r,t);
//     interestCalculator:: compoundInterest(p,r,t);

//     return 0;
// }




//ques2
// #include <iostream>
// using namespace std;
// class Shapes {
// public:
//     void area(float r) {
//         cout << "Area of Circle = " << 3.14 * r * r << endl;
//     }
//     void area(float l, float b) {
//         cout << "Area of Rectangle = " << l * b << endl;
//     }
//     void area(int s) {
//         cout << "Area of Square = " << s * s << endl;
//     } 
//     void area(float b, float h, char) {
//         cout << "Area of Triangle = " << 0.5 * b * h << endl;
//     }
// };
// int main() {
//     Shapes obj;
//     int choice;
//     char ch;
//     do {
//         cout << "\n----- MENU -----";
//         cout << "\n1. Circle";
//         cout << "\n2. Rectangle";
//         cout << "\n3. Square";
//         cout << "\n4. Triangle";
//         cout << "\nEnter your choice: ";
//         cin >> choice; 
//         switch(choice) {
//             case 1: {
//                 float r;
//                 cout << "Enter Radius: ";
//                 cin >> r;
//                 obj.area(r);
//                 break;
//             }
//             case 2: {
//                 float l, b;
//                 cout << "Enter Length and Breadth: ";
//                 cin >> l >> b;
//                 obj.area(l, b);
//                 break;
//             }
//             case 3: {
//                 int s;
//                 cout << "Enter Side: ";
//                 cin >> s;
//                 obj.area(s);
//                 break;
//             }
//             case 4: {
//                 float b, h;
//                 cout << "Enter Base and Height: ";
//                 cin >> b >> h;
//                 obj.area(b, h, 't');
//                 break;
//             }
//             default:
//                 cout << "Invalid Choice!";
//         }

//         cout << "\nDo you want to continue? (Y/N): ";
//         cin >> ch;

//     } while(ch == 'Y' || ch == 'y');

//     return 0;
// }

#include <iostream>
using namespace std; 
void calculate(int a, int b, int c) {
    int result = a + b * b + 2 * c;
    cout << "Result = " << result << endl;
}
void calculate(int b, int c) {
    int a = 5;
    int result = a + b * b + 2 * c;
    cout << "Result (a = 5) = " << result << endl;
}

int main() {
    calculate(2, 3, 4);
    calculate(3, 4);
    return 0;
}