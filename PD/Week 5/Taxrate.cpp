#include <iostream>
using namespace std;
float final_price( string vehicle,float price);

   string vehicle;
main(){
    string vehicle;
    float price;
cout<<"Enter the vehicle type code(M,E,S,V,T):";
cin>>vehicle;
 cout<<"Enter the price of vehicle:$ ";
 cin>>price;
 float result = final_price(  vehicle, price);
 cout<<" The final ticket price of type "<< vehicle <<"  after adding the tax " <<result;


}


float final_price( string vehicle,float price)
{  string M,E,S,V,T;

if (vehicle=="E"){
 float taxrate=8;
 float TaxAmount=price+price*(taxrate/100);
 return TaxAmount;}
 if (vehicle=="T"){
 float taxrate=15;
 float TaxAmount=price+price*(taxrate/100);
 return TaxAmount;}


 if (vehicle=="S"){
 float taxrate=10;
 float TaxAmount=price+price*(taxrate/100);
 return TaxAmount;}


 if (vehicle=="V"){
 float taxrate=12;
 float TaxAmount=price+price*(taxrate/100);
 return TaxAmount;}




 if (vehicle=="M"){
 float taxrate=6;
 float TaxAmount=price+price*(taxrate/100);
 return TaxAmount;}


}