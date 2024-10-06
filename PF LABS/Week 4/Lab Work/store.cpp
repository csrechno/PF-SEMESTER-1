#include <iostream>
using namespace std;
void payable(string day,int purchase_amount);


int purchase_amount;

main(){
 string day;
  cout<<"Enter Day:";
 cin>>day;

int purchase_amount;
cout<<"Enter the Total purchase amount:";
cin>>purchase_amount;

payable(day, purchase_amount); 



}






void payable(string day,int purchase_amount) 
{float payable_amount;



if(day=="sunday"){float payable_amount;

int discount;
discount=0.1*purchase_amount;
payable_amount=purchase_amount-discount;
cout<<"payable amount"<<payable_amount;}



if (day!="sunday"){

float payable_amount;

int discount;
discount=0.05*purchase_amount;
payable_amount=purchase_amount-discount;
cout<<"payable amount"<<payable_amount;
}





}



