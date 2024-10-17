#include <iostream>
using namespace std;
float StoreV2(string Day, float amount);
main(){
string Day,Month;
float amount;
cout<<"Enter purchase Day :";
cin>> Day;
cout<<" Enter purchase Month:";
cin>> Month;
cout<<" Enter purchase amount:";
cin>>amount;

cout<<"Payable amount after discount:"<< StoreV2( Day, amount);
}

float StoreV2(string Day, float amount){
 float result;

if(Day=="sunday" || Day=="monday" ){
float discount=0.10*amount;
result=amount-discount;

} else {

result=amount;

}
 
return result;
}