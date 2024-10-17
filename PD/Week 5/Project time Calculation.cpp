#include <iostream>
using namespace std;
string projecttimecalculation( int hours,int firm,int workers);

main(){
int hours,firm,workers;
cout<<"Enter the needed hours:";
cin>>hours;
cout<<"Enter the days that the firm has:";
cin>>firm;
cout<<"Enter the number of all workers:";
cin>>workers;
 projecttimecalculation(  hours, firm, workers);
float result=hoursneeded;
cout<<hoursneeded;

}

string projecttimecalculation( int hours,int firm,int workers){

int trainingdays=firm*0.1;
int workingdays=firm-trainingdays;
int normalhoursperday=8;
int overtimeperday=2;
int totalhours=normalhoursperday+overtimeperday;
int totalavailable=workingdays*normalhoursperday*workers;

int hoursneeded=needed-totalavailable;


return hoursneeded;

}
