#include <iostream>
using namespace std;
void discount( string name,int price);
main(){
string name;
float price;
cout<<"Enter the country's name:";
cin>>name;

cout<<"Enter the ticket price in dollars:$";
cin>>price;

discount(name,price);

}

void discount( string name,int price){

if (name=="Pakistan"){

int discount=0.05*price;
int final_amount;
final_amount=price-discount;
cout<<final_amount;


}
if (name=="Ireland"){

int discount=0.10*price;
int final_amount;
final_amount=price-discount;
cout<<final_amount;


}
if (name=="India"){

int discount=0.20*price;
int final_amount;
final_amount=price-discount;
cout<<final_amount;


}
if (name=="England"){

int discount=0.30*price;
int final_amount;
final_amount=price-discount;
cout<<final_amount;


}
if (name=="Canada"){

int discount=0.45*price;
int final_amount;
final_amount=price-discount;
cout<<final_amount;}

  

}