#include <iostream>
using namespace std;
string parityanalysis(int number);
main(){
int number;
cout<<"Enter three-digit number:";
cin>> number;
cout<< parityanalysis( number);
}

string parityanalysis(int number){
 
int mod1=(number%10)+(number%100)+(number%1000);
int sum=mod1%2;

int total=number%2;

 string result;
     if(sum==0 && total==0){
      result="true";

}
 else
{

result="False";

}

return result;





}