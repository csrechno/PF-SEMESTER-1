#include <iostream>
using namespace std;
float StoreV3(string Day, string Month, float amount);
main(){
string Day,Month;
float amount;
cout<<"Enter purchase Day :";
cin>> Day;
cout<<" Enter purchase Month:";
cin>> Month;
cout<<" Enter purchase amount:";
cin>>amount;

cout<<"Payable amount after discount:"<< StoreV3( Day,  Month, amount);
}

float StoreV3(string Day, string Month, float amount){
 float result;

if(Day=="sunday" && (Month=="october" ||Month=="august"||Month=="march") ){
float discount=0.10*amount;
result=amount-discount;

}
 else
 {

result=amount;
}

return result;
}