// #include<iostream>
// using namespace std;
// class Student{
//     string name;
//     string rollno;
//     int age;
//     public:
//     void setData(string n, string r, int a){
//         name = n;
//         rollno = r;
//         age = a;
//     }
//     void getData(){
//         cout<<"Name: "<< name<<endl;
//         cout<<"Rollno.: "<<rollno<<endl;
//         cout<<"Age: "<< age;
//     }
// };
// int main(){
//     Student s;
//     s.setData("Jhalak Singh", "2503201000914", 18);
//     s.getData();
//     return 0;
// }

//write a c++ class car with data member brand and year and display their values

// #include<iostream>
// using namespace std;
// class cars{
//     string brand ;
//     int year;
//     public:
//     void setData(string b, int y){
//         brand = b;
//         year = y;
//     }
//     void getData(){
//         cout<<"Brand Name: "<<brand<<endl;
//         cout<<"Year of purchasing: "<<year;
//     }
// };
// int main (){
//     cars c;
//     c.setData("Bugati", 2026);
//     c.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class sumProduct{
   
//     public:
//     void sum(int n1,int n2){
//         cout<<"sum: "<<n1+n2<<endl;
//     }
//     void prod(int n1,int n2){
//         cout<<"product: "<<n1*n2;
//     }
// };
// int main(){
//     sumProduct s;
//     s.sum(33, 34);
//     s.prod(23, 3);
//     return 0;
// }

//second part


//wap to create a class to calculate area of rectangle
#include<iostream>
using namespace std;
class area{
    int length;
    int breadth;
    public:
    void setData(int l, int b){
        length = l;
        breadth = b;
    }
    void getData(){
        cout<<"Length of the rectangle: "<<length<<endl;
        cout<<"Breadth of the rectangle: "<<breadth<<endl;
        cout<<"Area of the rectangle: "<<length*breadth;
    }
};
int main(){
    area a;
    a.setData(30, 40);
    a.getData();
    return 0;
}
//----------------EXAMPLE--------------------//
// class demo{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     void set(){
//         cout<<a<<" "<<b<<" "<<" "<<endl;
//     }
// };
// class child : public demo{
//     public:
//     void acces(){
//         //a=10
//         cout<<b<<endl;
//         cout<<c<<endl;
//     }
// };
