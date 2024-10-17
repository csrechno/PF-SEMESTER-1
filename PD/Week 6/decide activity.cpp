#include <iostream>
using namespace std;
string decideActivity(string temperaure,string humidity);
main(){
string temperature,humidity;
cout<<"Enter temperure warm :";
cin>>temperature;
cout<<"Enter humidity:";
cin>>humidity;
cout<< decideActivity(temperature,humidity);

}

string decideActivity(string temperature,string humidity){
string result;
if(temperature=="warm" && humidity=="dry"){
 
result="Play tennis";}
else
if(temperature=="warm" && humidity=="humid"){
result="swim";
}else
if(temperature=="cold" && humidity=="dry"){
result="Play basketball";

}else
if(temperature=="cold" && humidity=="humid"){
result="Watch TV";
}
return result;
}