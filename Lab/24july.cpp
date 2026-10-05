#include<iostream>
using namespace std;
class Notification {
    public:
     //app notification
    void sendNotification(int
    userId,string message)
    {
        cout<<"App Notification " <<endl;
        cout<<"User ID: "<< userId<<endl;
        cout<<"Message "<< message <<endl;
    }
         //Email notification
    void sendNotification(string
    emailaddress,string subject,string content )
    {
        cout<<"Email Notification " <<endl;
        cout<<"Subject: "<< subject<<endl;
        cout<<"Content: "<< content <<endl;
    }
        //SMS Notification
    void sendNotification(int
    long long phoneNo,string sms )
    {
        cout<<"SMS Notification " <<endl;
        cout<<"Phone no: "<<phoneNo <<endl;
        cout<<"Message: "<< sms <<endl;
    }
};
 
 int main()
 {
    Notification obj;
    obj.sendNotification(
        101, "Welcome to the App!");

    obj.sendNotification(
        "abc@gmail.com", "Meeting", "Meeting at 10AM tomorrow."
    );

    obj.sendNotification(
        1234567890LL ,"Your OTP is 1234"
    );
    return 0;
 }
