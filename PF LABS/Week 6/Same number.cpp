#include <iostream> 
using namespace std;
int Samenumber(int number1,int number2,int number3);
main(){
int number1,number2,number3;
cout<<"Enter first number:";
cin>>number1;
cout<<"Enter second number:";
cin>>number2;
cout<<"Enter third number:";
cin>>number3;

cout<<Samenumber(number1, number2, number3);
}


int Samenumber(int number1,int number2,int number3){
int result;

if (number1==number2 && number2==number3){

result=1;

}
 else

 {

result=0;
}
return result;



}