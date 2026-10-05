/*SMART POINTERS:
 C++ provides smart pointers to automatically manage dynamically allocated memory at
 the runtime. The two important smart pointers are unique, shared and null_ptr, A smart pointer 
is a special pointer that dynamically manages memory and helps in preventing memory leaks.
only one pointer can own the object at a time. --unique pointer.
it provides exclusive ownership 
it ensures that only one pointer can own the underline resource at a given time
it can not be copied to another pointer bt its ownership can be transfered . 
default choice for single owner for single resources or fxn return 
get fxn returns the address of unique pointer variable / object
release fxn --it is used to release ownership without deleting the object
delete the current object and optionally points the new one
reset fxn()---it is use to return the raw pointer 
unique pointer,shared pointer , null pointer 

unique_ptr<Datatype>=make_unique<datatypr>(value)
get (), release() , reset()

shared pointer-- It is a smart pointer that allows multiple pointers to share ownership of the same object.
The object is destroyed when the last shared pointer that owns it is destroyed or reset.

Null pointer--  It is introduced in C++11 as a smart pointer that represents nothing.
 It is used to indicate that a pointer does not point to any object.
shared_ptr<datatype>=make_shared<datatype>(value)
 int* p=null_ptr;
if(p==nullptr){
cout<<"pointer is null";
}
*/
// #include<iostream>
// #include<memory>
// using namespace std;
// int main(){
//     shared_ptr<int> p1=make_shared<int>(10);
//     shared_ptr<int> p2=p1; // using a this pointer , share the same student object . display the reference count
//     cout<<*p1<<endl;
//     cout<<*p2<<endl;
//     return 0;
// }

// #include<iostream>
// #include<memory>
// using namespace std;
// int main(){
//     unique_ptr<int> p1=make_unique<int>(10);
//     shared_ptr<int> p2=make_shared<int>(20);
//     int *p3=nullptr;
//     cout<<*p1<<endl;
//     cout<<*p2<<endl;
//     if(p3==nullptr){
//         cout<<"pointer3 is null"<<endl;
//     }
//     return 0;
// }

/*Implement a self referentially, create a singly linked list using raw and null pointers, 
then redesign the solution using unique pointer and discuus the changed required in ownership management.
finally demonstrate shared pointer in a sceanrio where multiple objects share ownership of common resource.*/

#include <iostream>
#include <memory>
using namespace std;
class RawNode {
public:
    int data;
    RawNode* next;
    RawNode(int val) : data(val), next(nullptr) {}
};

class RawList {
    RawNode* head;
public:
    RawList() : head(nullptr) {}
    void insert(int val) {
        RawNode* newNode = new RawNode(val);
        if (!head) head = newNode;
        else {
            RawNode* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }
    void display() {
        RawNode* temp = head;
        while (temp) { cout << temp->data << " -> "; temp = temp->next; }
        cout << "NULL"<<endl;
    }
    ~RawList() {
        RawNode* temp = head;
        while (temp) { RawNode* nxt = temp->next; delete temp; temp = nxt; }
    }
};
class UniqueNode {
public:
    int data;
    unique_ptr<UniqueNode> next;
    UniqueNode(int val) : data(val), next(nullptr) {}
};
class UniqueList {
    unique_ptr<UniqueNode> head;
public:
    void insert(int val) {
        auto newNode = make_unique<UniqueNode>(val);
        if (!head) head = move(newNode);
        else {
            UniqueNode* temp = head.get();
            while (temp->next) temp = temp->next.get();
            temp->next = move(newNode);
        }
    }
    void display() {
        UniqueNode* temp = head.get();
        while (temp) { cout << temp->data << " -> "; temp = temp->next.get(); }
        cout << "NULL"<<endl;
    }
};
class SharedNode {
public:
    int data;
    shared_ptr<SharedNode> next;
    SharedNode(int val) : data(val), next(nullptr) {}
};
void sharedDemo() {
    auto n1 = make_shared<SharedNode>(10);
    auto n2 = make_shared<SharedNode>(20);
    auto n3 = make_shared<SharedNode>(30);
    n1->next = n2;
    n2->next = n3;
    shared_ptr<SharedNode> alt = n2;
    cout << "n2 use_count = " << n2.use_count() << endl;
    cout << "n3 use_count = " << n3.use_count() << endl;
    auto temp = n1;
    while (temp) { cout << temp->data << " -> "; temp = temp->next; }
    cout << "NULL"<<endl;
}
int main() {
    cout << "Raw Pointer List"<<endl;
    RawList rl; rl.insert(10); rl.insert(20); rl.insert(30); rl.display();
    cout << "Unique Pointer List"<<endl;
    UniqueList ul; ul.insert(100); ul.insert(200); ul.insert(300); ul.display();
    cout << "Shared Pointer Demo"<<endl;
    sharedDemo();
}
