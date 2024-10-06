#include <iostream>
using namespace std;
main(){
cout<<"Enter the Name of Person:";
string name;
cin>>name;


cout<<"Enter the target weight loss in kilograms:";
float target_weight_loss;
cin>>target_weight_loss;


float weight_loss_calculation=target_weight_loss*15;
cout<<name<<" will need to lose "<< weight_loss_calculation<<"kg  of weights by the following doctor suggestion";


}