#include <iostream>
using namespace std;
int Findgreatest(int number1,int number2,int number3);
main(){
int number1,number2,number3;
cout<<"Enter 1st number:";
cin>>number1;
cout<<"Enter 2nd number:";
cin>> number2;
cout<<"Enter 3rd number:";
cin>> number3;

   cout<<"The greatest among "<<number1<<","<<number2<<" and "<<number3<<" is:"<<Findgreatest( number1, number2,number3);
}

  int Findgreatest(int number1,int number2, int number3){
int greatest=number1;
if(number2>greatest){
    greatest=number2;

}
if(number3>greatest){

greatest=number3;

} 

return greatest;

}