#include <iostream>
#include<cmath>
using namespace std;
 

main(){
     float number1,number2;
   cout<<"Enter the First number:";
   cin>> number1;

   cout<<"Enter second number:";
   cin>> number2;
   
int result=min(number1,number2);
  cout<<"The minimum number of "<<  number1 << " and "<< number2 <<" is "<<result; 


}


float minimum(float number1,float number2){
 
float value=min(number1,number2);
return value;




}
