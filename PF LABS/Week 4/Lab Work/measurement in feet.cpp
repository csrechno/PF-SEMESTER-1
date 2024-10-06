#include <iostream>
using namespace std;

void equivalent( float inch);

main(){

float inches;
cout<<"Enter the measurement in inches:";
cin>>inches;


equivalent(inches);


}



void equivalent( float inch){


float feet;
feet=inch/12;
cout<<"Equivalent in feet:"<<feet;


}