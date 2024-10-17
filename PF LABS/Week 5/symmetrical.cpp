#include <iostream>
using namespace std;
void symmetrical(int number);
main(){
 int number;
cout<<"Enter a three-digit number:";
cin>>number;

   symmetrical(number);


}

void symmetrical(int number){

int digit1,sum1,sum2,digit2,digit3;
digit1=number%10;
sum1=number/10;
digit2=sum1%10;
sum2=sum1/10;
digit3=sum2%10;

 if (digit1==digit3) { 


cout<<"The number is symmetrical";


}

if (digit1!=digit3){ 

cout<<"The number is not symmetrical";

}

}