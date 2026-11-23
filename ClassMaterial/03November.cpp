/*
Polymorphism is of two types:
1.Compile time(Static) polymorphism: a. Function overloading b. Operator overloading
2.Run Time(Dynamic) polymorphism: a.Function overriding b. Virtual function

Function overloading means defining multiple function with the same name , but with the different parameters(type/numbers).
Ex:- 
Class Print{
void display(int x){
cout<<x;
}
void display(double y){
cout<<y;
}
};
int main(){
Print obj;
Obj.display(10);
Obj.display(12.5)
}*/
//Write the c++ program to calculate the area of the square, rectangle  and circle using Function overloading
/*#include <iostream>
using namespace std;
class Area {
public:
    int calculate(int side) {
        return side * side;
    }
    int calculate(int length, int breadth) {
        return length * breadth;
    }
    double calculate(double radius) {
        return 3.14 * radius * radius;
    }
};
int main() {
    Area a;
    int side, length, breadth;
    double radius;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square = " << a.calculate(side) << endl;
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle = "<< a.calculate(length, breadth) << endl;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle = " << a.calculate(radius) << endl;
    return 0;
}*/

//Write a c++ programm to calculate  to calculate the si using function overloading. Create overloaded function that accepts different parameter combination
#include <iostream>
using namespace std;
class Interest {
public:
    // Function with three parameters
    double calculateSI(double p, double r, double t) {
        return (p * r * t) / 100;
    }
    // Function with two parameters (time assumed as 1 year)
    double calculateSI(double p, double r) {
        return (p * r * 1) / 100;
    }
};
int main() {
    Interest obj;
    double p, r, t;
    cout << "Enter principal, rate and time: ";
    cin >> p >> r >> t;
    cout << "Simple Interest = "<< obj.calculateSI(p, r, t) << endl;
    cout << "SI for 1 year = "<< obj.calculateSI(p, r) << endl;
    return 0;
}