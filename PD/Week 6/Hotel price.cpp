#include <iostream>
using namespace std;
float calculatehotelprice(string month , int stays);
float calculatehotel(string month , int stays);
main(){
string month;
int stays;
cout<<"Enter the month(May,June,August,September,October):";
cin>>month;
cout<<"Enter the number of stays:";
cin>>stays;
cout<<"Studio:"<< calculatehotelprice( month ,  stays)<<"$"<<endl;
cout<< "Apartment:"<<calculatehotel( month ,  stays)<<"$";
}

float calculatehotelprice(string month , int stays){
float result=0;
float studio;
if ((month=="october" || month=="may") && stays>=14){
 studio=50;
     
    
  result=(stays*studio)-(stays*studio*0.30);

}else
if((month=="june" || month=="september")&& stays>=14){
 studio=75.20;
  result=(stays*studio);
}else
if((month=="july" || month=="august")&& stays>=14){
 studio=76;
  result=(stays*studio);
}

else if((month=="october" || month=="may") && (stays>=7 && stays<=14)){
 studio=50;
     
    
  result=(stays*studio)-(stays*studio*0.05);

}


return result;
}

float calculatehotel(string month , int stays){
float result=0;
if ((month=="october" || month=="may") && stays>=14){
     
   float apartment=65;  
  result= (stays*apartment)-(stays*apartment*0.10);

}
else
if ((month=="october" || month=="may") && (stays>=7 && stays <=14)){
     
   float apartment=65;  
  result= (stays*apartment)-(stays*apartment*0.05);

}else
if ((month=="june" || month=="september") && stays>=14){
     
   float apartment=68.70;  
  result=(stays*apartment);

}
else
if ((month=="july" || month=="august") && stays>=14){
     
   float apartment=77;  
  result=(stays*apartment)-(stays*apartment*0.10);

}



return result;
}