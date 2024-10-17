#include <iostream>
using namespace std;
int year_leap(string type,int holidays,int weekends);
main(){
    string type;
    int holidays,weekends;
cout<<"Enter year type: ";
cin>>type;
cout<<"Enter number of holidays: ";
cin>>holidays;
cout<<"Enter number of weekends1: ";
cin>>weekends;
cout<< year_leap(type, holidays, weekends);

}

int year_leap(string type,int holidays,int weekends){
if (type=="normal"){
int calculate=(48-weekends);
int week=(calculate*3)/(4);
int holi=(holidays*2)/(3);
int total=week+holi+weekends;
return total;
} 
else
if (type=="leap"){

int calculate=(48-weekends);
int week=(calculate*3)/(4);
int holi=(holidays*2)/(3);
int total=week+holi+weekends/0.15;
return total;

}
else if (type=="normal" || type=="leap"){
int total=0;
 return total;   
}

}