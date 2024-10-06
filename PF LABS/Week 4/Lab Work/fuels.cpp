#include <iostream>
using namespace std;
void fuel_needed(float dis);


main(){

float distance;
cout<<"Enter the distance:";
cin>>distance;


fuel_needed(distance);




}


void fuel_needed(float dis)

{


float fuel;
fuel=dis*10;

cout<<"Fuel_needed is:"<<fuel;





}