#include <iostream>
using namespace std;
main(){

cout<<"Enter voltage(volts):";
int voltage;
cin>>voltage;


cout <<"Enter current( amperes): ";
float current;
cin>>current;


int power;
power=voltage*current;
cout<<"power is "<<power;

}