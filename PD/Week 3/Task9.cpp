#include <iostream>
using namespace std;
main(){
cout<<"Enter a four digit number:";
int number;
cin>>number;

int sum=0;
int digit;
digit= number%10;
sum=sum+digit;
number=number/10;
digit=number%10;
sum=sum+digit;
number=number/10;
digit=number%10;
sum=sum+digit;
number=number/10;
sum=sum+number;
cout<<"Sum of individual numbers:"<<sum;


}