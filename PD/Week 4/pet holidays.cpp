#include <iostream>
using namespace std;
void pet(int holidays);
main(){
int holidays;
cout<<"Holidays:";
cin>>holidays;
 pet( holidays);

}
  


void pet(int holidays){

 

int working_days,time_games,difference_norm;

int Total_days,working_days_Minutes_per_day,Holidays_minutes_per_day,Total_minutes_per_year;

Total_days=365;

working_days=Total_days-holidays;

working_days_Minutes_per_day=63;

 Holidays_minutes_per_day=127;

time_games=working_days*working_days_Minutes_per_day+holidays*Holidays_minutes_per_day;
Total_minutes_per_year=30000;

difference_norm=(Total_minutes_per_year-time_games);


if (difference_norm<=holidays){

cout<<"Tom will run away"<<endl;
cout<<-(difference_norm)<<" Minutes ";

}


if (difference_norm>=holidays){

cout<<"Tom sleeps well"<<endl;
cout<<difference_norm<<" Minutes ";
}


}


