#include <iostream>
using namespace std;
main(){
cout<<"Enter the movie name:";
string name;
cin>>name;
cout<<"Enter the adult ticket price:$";
float adult_ticket_price;
cin>> adult_ticket_price;
cout<<"Enter the child ticket price:$";
float child_ticket_price;
cin>>child_ticket_price;
cout<<"Enter the number of adults ticket sold:";
float adult_ticket_sold;
cin>>adult_ticket_sold;
cout<<"Enter the number of child tickets sold:";
float child_ticket_sold;
cin>>child_ticket_sold;
cout<<"Enter the percentage of the amount to be donated to charity:";
float amount_of_charity;
cin>>amount_of_charity;
string movie_name= name;
int total_tickets_of_child= child_ticket_price*child_ticket_sold;
int total_tickets_of_adult=adult_ticket_price*adult_ticket_sold;
int total_amount_generated_from_ticket_sales=total_tickets_of_child+total_tickets_of_adult;
int donation_to_charity=total_amount_generated_from_ticket_sales/10;
float remaining_amount_after_donation=total_amount_generated_from_ticket_sales-donation_to_charity;
cout<<"Movie name:"<<movie_name<<endl;
cout<<"Total amount generated from ticket sales:$"<<total_amount_generated_from_ticket_sales<<endl;
cout<<"Donation to charity(10%):$"<<donation_to_charity<<endl;
cout<<"Remaining amount after donation:$"<<remaining_amount_after_donation;



}

