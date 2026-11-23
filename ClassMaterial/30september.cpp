//using this pointer to dynamically create a student object and display the students detail'
//using a this pointer , share the same student object . display the reference count 
//implement a self referntial class to create a singly linked list . first implement it using a unique pointer and null pointer

//#include <iostream>
//using namespace std;
// class Student {
// private:
//     string name;
//     int rollNo;
// public:
//     Student(string n, int r) {
//         this->name = n;       
//         this->rollNo = r;     
//     }
//     void display() {
//         cout << "Name: " << this->name 
//              << ", Roll No: " << this->rollNo << endl;
//     }
// };

// int main() {
//     Student* s1 = new Student("Rimjhim", 914);
//     s1->display();
//     delete s1;
//     return 0;
// }

// #include <iostream>
// #include <memory>   // for shared_ptr
// using namespace std;
// class Student {
// private:
//     string name;
//     int rollNo;
// public:
//     Student(string n, int r) : name(n), rollNo(r) {
//         cout << "Student object created!" << endl;
//     }
//     ~Student() {
//         cout << "Student object destroyed!" << endl;
//     }
//     void display() {
//         cout << "Name: " << this->name<< ", Roll No: " << this->rollNo << endl;
//     }
// };
// int main() {
//     shared_ptr<Student> s1 = make_shared<Student>("Rimjhim", 101);
//     s1->display();
//     shared_ptr<Student> s2 = s1;   
//     cout << "Reference count after sharing = " << s1.use_count() << endl;
//     {shared_ptr<Student> s3 = s2; 
//         cout << "Reference count inside block = " << s1.use_count() << endl;
//     } 
//     cout << "Reference count after block = " << s1.use_count() << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
// Self-referential Node class
class Node {
public:
    int data;
    Node* next;   // raw pointer to next node
    // Constructor
    Node(int val) : data(val), next(nullptr) {}
};
class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    // Insert at end using this pointer
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            // use this pointer to show linking
            temp->next = newNode;   // temp is "this" node in loop
        }
    }
    // Display list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    // Destructor to free memory
    ~LinkedList() {
        Node* temp = head;
        while (temp) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};
int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    return 0;
}
