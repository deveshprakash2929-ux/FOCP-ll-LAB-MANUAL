#include<iostream>
using namespace std;
class Ticket{
string movieName;
int seatNumber;
int ticketPrice;
bool isBooked;
public:
Ticket();
Ticket(string n, int s, int p, bool b);
void bookTicket();
void cancelTicket();
void displayTicketDetails();
int calculateTotalCost(int numberOfTickets);
};
Ticket::Ticket()
{
    movieName = "Unknown";
    seatNumber = 0;
    ticketPrice = 0;
    isBooked = false;
}
Ticket::Ticket(string n, int s, int p, bool b)
{
    movieName = n;
    seatNumber = s;
    ticketPrice = p;
    isBooked = b;
}
void Ticket::bookTicket()
{
    if (!isBooked)
    {
        isBooked = true;
        cout<<"\n Ticket booked:"<<movieName<<"seat number:"<<seatNumber;}
    else
    {
        cout<<"ticket booked.";}
}
void Ticket::cancelTicket()
{
    if(isBooked)
    {
        isBooked = false;
        cout<<"\n Ticket cancelled:"<<movieName<<"seat number:"<<seatNumber;
    }
    else
    {
        cout<<"\n Ticket is not booked.";
    }
}
void Ticket::displayTicketDetails()
{
    cout<<"\nMovie Name: "<<movieName;
    cout<<"\nSeat Number: "<<seatNumber;
    cout<<"\nTicket Price: "<<ticketPrice;
    cout<<"\nIs Booked: "<<(isBooked ? "Yes" : "No");
}
int calculateTotalCost(int numberOfTickets)
{
    int totalCost = numberOfTickets * ticketPrice;
    cout<<"\nTotal cost for "<<numberOfTickets<<" tickets: "<<totalCost;
    return totalCost;
}
int main(){
    Ticket t1("Avengers", 5, 150, false);
    t1.bookTicket();
    t1.calculateTotalCost(3);
    t1.cancelTicket();
    t1.displayTicketDetails();
    return 0;
}
