#include <iostream> 
using namespace std;
void calculatePoolState(int Volume,int Firstpipe,int Secondpipe,float hours);
main(){
int Volume,Firstpipe,Secondpipe;
float hours;
cout<<"Enter Volume of the pool in litres :";
cin>>Volume;
cout<<"Enter flow rate of the first pipe per hour :";
cin>>Firstpipe;
cout<<"Enter flow rate of the second pipe per hour:";
cin>>Secondpipe;
cout<<"Enter hours that the worker is absent :";
cin>>hours;

 calculatePoolState( Volume, Firstpipe, Secondpipe,hours );



}


void calculatePoolState(int Volume, int Firstpipe, int Secondpipe, float hours )
{

int Totalwater=(Firstpipe+Secondpipe)*hours;
 
int pool=(Totalwater*100)/Volume;
int CalculateFirstpool=(Firstpipe*hours*100)/Totalwater;
int CalculateSecondPool=(Secondpipe*hours*100)/Totalwater;
 if(Totalwater<Volume){


 cout<<"The pool is "<<pool<<"% full. "<<"Pipe 1: "<<CalculateFirstpool<<"% . "<<"Pipe 2: "<<CalculateSecondPool<<"%";

}

if (Totalwater>Volume){

int second=Totalwater-Volume;

cout<<"For "<< hours <<" hours ."<<" the pool overflows with "<<second<<" litres";
}


}