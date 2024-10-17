#include <iostream>
using namespace std;
string greaternumber(int number1,int number2);
main(){
int number1,number2;
cout<<"Enter 1st number:";
cin>>number1;
cout<<"Enter 2nd number:";
cin>> number2;
   cout<<greaternumber( number1, number2);
}

string greaternumber(int number1,int number2){

string result;

if(number1>number2){

    result="True";

} else{
   
result="False";

}

return result;
}