#include <iostream>
using namespace std;
void longest_duration(int hours,int minutes);
int hours,minutes;
main (){
cout<<"Enter the number of hours:";
cin>>hours;

cout<<"Enter the number of minutes:";
cin>> minutes;

hours=hours*60;

longest_duration(hours,minutes);
}

void longest_duration(int hours,int minutes)
{
if (hours>=minutes){
cout<<hours/60;}
if(minutes>=hours)
{
cout<<minutes;
}

}