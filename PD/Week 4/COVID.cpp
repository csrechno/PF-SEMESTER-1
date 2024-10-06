#include <iostream>
using namespace std;
void Tp_Checker(int people,int rolls);
main(){
int people,rolls;
cout<<"Number of people in the household:";
cin>>people;
cout<<"Number of rolls of TP:";
cin>>rolls;
 Tp_Checker( people, rolls);
}

void Tp_Checker(int people,int rolls)
{
int Total_Days,Sheets_per_day,Sheets_per_roll;
Total_Days=14;
Sheets_per_day=57;
Sheets_per_roll=500;

int totalSheets,dailyUsage,totalUsage;

     totalSheets = rolls * Sheets_per_roll ;
     dailyUsage = people * Sheets_per_day;
     totalUsage = dailyUsage *Total_Days;

int daysLast = totalSheets / dailyUsage;
 if(totalSheets<=totalUsage){
cout<<"Your Tp will only Last "<< daysLast <<", buy more!";}
if(totalSheets>=totalUsage){
cout<<"Your Tp will only Last "<< daysLast <<",no need to panic!";}


}


