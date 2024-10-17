#include <iostream>
using namespace std;
float StoreV1(string Day, string Month, float amount);
main(){
string Day,Month;
float amount;
cout<<"Enter purchase Day :";
cin>> Day;
cout<<" Enter purchase Month:";
cin>> Month;
cout<<" Enter purchase amount:";
cin>>amount;

cout<<"Payable amount after discount:"<< StoreV1( Day,  Month, amount);
}

float StoreV1(string Day, string Month, float amount){
 float result;

if(Day=="sunday" && Month=="october"){
float discount=0.10*amount;
result=amount-discount;

}
 if (Day!="sunday" && Month=="october"){

      result=amount;

}

 if (Day=="sunday" && Month=="november"){
float discount=(0.05*amount);
result=amount-discount;

}
return result;
}