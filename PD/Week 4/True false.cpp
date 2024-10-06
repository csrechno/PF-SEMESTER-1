#include <iostream>
using namespace std;
void true_Or_false(int number1,int number2);
main(){
int number1,number2;
cout<<"Enter First number:";
cin>>number1;
cout<<"Enter second number:";
cin>>number2;

true_Or_false(number1,number2);
}

void true_Or_false(int number1,int number2){
int True,False;

if(number1==number2){

cout<<"True";


}
if (number1!=number2){

cout<<"False";

}



}