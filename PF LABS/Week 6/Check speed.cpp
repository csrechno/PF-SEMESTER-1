#include <iostream>
using namespace std;
string Checkspeed(float speed);
main(){
float speed;
cout<<"Enter the speed:";
cin>>speed;
cout<< Checkspeed( speed);
}

string Checkspeed(float speed){
string result;
if(speed<=10){
result="Slow";
}
 else
if (speed<=50){
result="average";
}
else
if (speed<=150){
result="fast";
}
else
if (speed<=1000){
result="Ultra-fast";
}
else
if (speed>1000 ){
result="Extremely fast ";
}
return result;

}