#include <iostream>
#include <iomanip>
using namespace std;
void CalculateCost(double budget,int numPeople,char ticketCategory);

 main() {
     
    double budget;
    int numPeople;
    char ticketCategory; 

   
    cout << "Enter your budget (in QR): ";
    cin >> budget;

    
    cout << "Enter the number of people in the group: ";
    cin >> numPeople;


    cout << "Enter ticket category (V for VIP, N for Normal): ";
    cin >> ticketCategory;

     CalculateCost( budget, numPeople, ticketCategory);
   
 
}
void CalculateCost(double budget,int numPeople,char ticketCategory){

double VIP_PRICE = 499.99; 
     double NORMAL_PRICE = 249.99; 
double transportPercentage;
    if (numPeople >= 1 && numPeople <= 4) {
        transportPercentage = 0.75;

    } else if (numPeople >= 5 && numPeople <= 9) {
        transportPercentage = 0.60;

    } else if (numPeople >= 10 && numPeople <= 24) {
        transportPercentage = 0.50;

    } else if (numPeople >= 25 && numPeople <= 49) {
        transportPercentage = 0.40;

    } else {
        transportPercentage = 0.25;
 
    }

   
    double transportCost = budget * transportPercentage;

    
    double remainingBudget = budget - transportCost;

    
    double ticketPrice;
    if (ticketCategory == 'V' || ticketCategory == 'v') {
        ticketPrice = VIP_PRICE;

    } else if (ticketCategory == 'N' || ticketCategory == 'n') {
        ticketPrice = NORMAL_PRICE;
      
    } 
    

   
    double totalTicketCost = ticketPrice * numPeople;


    if (remainingBudget >= totalTicketCost) {
       
       cout<<" Yes!You have " << remainingBudget - totalTicketCost << " leva left";
    } else {
        cout<<"Not Enough money! You need " << totalTicketCost - remainingBudget << " leva";
    }
}
    