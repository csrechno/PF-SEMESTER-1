#include <iostream>
using namespace std;
void even(int num );

main(){
int number;
cout<<"Enter the number:";
cin>>number;

even(number);




}

void even(int num ){
    
  if (num%2==0){ 
cout<<"Even";}
if (num%2!=0){

cout<<"ODD";
}
}

