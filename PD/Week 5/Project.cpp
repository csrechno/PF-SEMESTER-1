#include <iostream>
using namespace std;
float projecttimecalculation( int hours,int firm,int workers);

main(){
int hours,firm,workers;
cout<<"Enter the needed hours:";
cin>>hours;
cout<<"Enter the days that the firm has:";
cin>>firm;
cout<<"Enter the number of all workers:";
cin>>workers;

float result=projecttimecalculation( hours,firm,workers);
if(result>0){
cout<<"Not Enough time!"<<result<<" hours needed";


}
if(result<0){

result=-result;
cout<<"Yes!"<<result<<" hours left";

}
}


float projecttimecalculation( int hours,int firm,int workers){
    int work=firm*10*workers;
int noWork= work-work*10/100;
int Timerequired=hours-noWork;
return Timerequired;

 

}


