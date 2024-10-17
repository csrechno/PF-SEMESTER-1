#include <iostream>
using namespace std;
float cellularcompany(string code,string time,int minutes);
main(){
string code,time;
float minutes;
cout<<"Enter service code(R/r for regular ,P/p for premiere):";
cin>>code;
cout<<"Enter time of the call(D/d for day, N/n for night):";
cin>>time;
cout<<"Enter the number of minutes used:";
cin>>minutes;

cout<< cellularcompany( code, time, minutes);
}

float cellularcompany(string code,string time,int minutes)
{
float result;
if (code=="r" ){
result=minutes*0.2;
}else
if (code=="p" && time=="night"){
     if (minutes<=100){
result=25;
} else if (minutes>100){
result=(minutes-100)*0.5+25;
}
}
if (code=="p" && time=="day"){
     if (minutes<=75){
      result=25;
}    else
          if (minutes>75){
  result=(minutes-75)*0.10+25;


}

}
return result;
}
