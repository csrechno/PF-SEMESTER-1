#include <iostream>
using namespace std;
float StoreV4(string Day, string Month, float amount);
main(){
string Day,Month;
float amount;
cout<<"Enter purchase Day :";
cin>> Day;
cout<<" Enter purchase Month:";
cin>> Month;
cout<<" Enter purchase amount:";
cin>>amount;

cout<<"Payable amount after discount:"<< StoreV4( Day,  Month, amount);
}

float StoreV4(string Day, string Month, float amount){
 float result;

if(Day=="sunday" && (Month=="october" || Month=="august" || Month=="march") ){
float discount=0.10*amount;
result=amount-discount;

}else
if(Day=="monday" && (Month=="november" || Month=="december") ) {
float discount=0.05*amount;
result=amount-discount;

}else 

if(Day!="sunday")
{result=amount;}

return result;
}