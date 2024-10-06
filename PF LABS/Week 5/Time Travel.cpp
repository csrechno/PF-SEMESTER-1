#include <iostream>
using namespace std;
void time_travel(int hours,int minutes);
main(){
int hours,minutes;
cout<<"Enter hours:";
cin>>hours;
cout<<"Enter minutes:";
cin>>minutes;
 time_travel(hours,minutes);

}

void time_travel(int hours,int minutes){

float skip=15;
float total_minutes=minutes+15;
int total_hours= hours+1;
 if(minutes>60){
  
cout<<total_hours<<":"<<minutes; 


}



}