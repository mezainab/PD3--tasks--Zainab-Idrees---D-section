#include <iostream>
using namespace std;
main() 
{
string movieName;
int adultTicket;
int childTicket;
int adultTicketsSold;
int childTicketsSold;
int amountGenerated;
int amountAfterDonation;
int amountGivenToCharity;
float percentage;

cout << "Movie Name: ";
cin >>movieName;
cout << "Adult Ticket Price: ";
cin >>adultTicket;
cout << "Child Ticket: ";
cin >>childTicket;
cout << "Adult Tickets sold: ";
cin >>adultTicketsSold;
cout << "Child Tickets sold: ";
cin >>childTicketsSold;
cout << "Percentage to donate: ";
cin >>percentage;

amountGenerated = adultTicket*adultTicketsSold + childTicket*childTicketsSold;
amountGivenToCharity = percentage/100*amountGenerated;
amountAfterDonation = amountGenerated - amountGivenToCharity;

cout <<"Total Amount Generated: " <<amountGenerated <<endl;
cout <<"Amount after charity: " <<amountAfterDonation;

}
