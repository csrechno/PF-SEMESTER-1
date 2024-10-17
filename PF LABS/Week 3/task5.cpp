#include <iostream>
using namespace std;
main(){
cout<<"Enter the charge in columbs:";
int charge;
cin>>charge;


cout<<"enter the time in seconds:";
int time;
cin>>time;


float current;
current = charge/time;
cout<< "the current is:"<<current;


}