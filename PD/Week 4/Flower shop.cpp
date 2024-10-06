#include <iostream>
using namespace std;
void Flower_shop(float Rose,float White, float Tulips);
main(){
float Rose,White,Tulips;

cout<<"Red Rose:";
cin>>Rose;

cout<<"White Rose:";
cin>>White;

cout<<"Tulips:";
cin>>Tulips;

Flower_shop(Rose, White,  Tulips);
}
float original_price;

void Flower_shop(float Rose,float White, float Tulips)
{  
original_price=Rose*2.00+White*4.10+Tulips*2.50;

if(original_price>=200){
float discount,after_discount;
cout<<"Original price:$"<<original_price<<endl;
discount=0.20*original_price;
after_discount=original_price-discount;
cout<<"Price after discount:$"<<after_discount<<endl;
} 

if(original_price<=200){
cout<<"Original price:$"<<original_price<<endl;

cout<<"No discount applied";
}
}



