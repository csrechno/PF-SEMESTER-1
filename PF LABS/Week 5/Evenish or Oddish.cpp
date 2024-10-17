#include <iostream>
using namespace std;
void Evenish_or_Oddish(int number);
main(){
int number;
cout<<"Enter a five digit number:";
cin>>number;
 Evenish_or_Oddish( number);

}


void Evenish_or_Oddish(int number){

int digit1,digit2,digit3,digit4,digit5,digit6;
int sum1,sum2,sum3,sum4;
 int total; 
digit1=number%10;
sum1=number/10;
digit2=sum1%10;
sum2=sum1/10;
digit3=sum2%10;
sum3=sum2/10;
digit4=sum3%10;
sum4=sum3/10;
digit5=sum4%10;

total=digit1+digit2+digit3+digit4+digit5;

if(total%2==1){
cout<<"Oddish";

}

if (total%2==0){
cout<<"Evenish";
}


}