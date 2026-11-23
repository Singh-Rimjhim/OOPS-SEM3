//Write a program to create a airline reservation system which includes private data as passenger id, name,flight number, destination, departure time, and booking status include the different function as add passanger, display passenger details, cancel booking, and book the ticket.

#include<iostream>
using namespace std;
class airLine_Res{
    private:
    string id;
    string name;
    string flight_number;
    string destination;
    string reservation;
    double fair;
    string booking_status;

    public:
    void add_passenger(string i, string n, string f, string d, string r, double fa, string b) {
        id = i;
        name = n;
        flight_number=f;
        destination=d;
        reservation=r;
        fair=fa;
        booking_status=b;
    }

    void display_passenger_details(){
        cout<<"Passenger Id: "<< id<<endl;
        cout<<"Passenger Name: "<< name<<endl;
        cout<<"Flight Number: "<< flight_number<<endl;
        cout<<"Destination: "<< destination<<endl;
        cout<<"Reservation: "<< reservation<<endl;
        cout<<"Fair: "<< fair<<endl;
        cout<<"Booking Status: "<< booking_status<<endl;
    }

    void book_ticket(){
        if(booking_status=="Booked"){
            booking_status="Booked";
        cout<<"Ticket Booked Successfully"<<endl;
        } else {
            cout<<"Booking is not available"<<endl;
        }
    }

    void cancel_booking(){
        if(booking_status=="Cancelled" || booking_status=="Pending"){
            booking_status = "Cancelled";
            cout << "Booking Cancelled Successfully!"<<endl;
        } else {
            cout << "No active booking to cancel."<<endl;
        }
    }


    };

    int main(){
        
        airLine_Res passenger;
        passenger.add_passenger("P001", "Alice Smith", "FL123", "New York", "Economy", 300.0, "Pending");
        passenger.display_passenger_details();
        passenger.book_ticket();
        passenger.display_passenger_details();
        passenger.cancel_booking();
        return 0;
    }
