#include <iostream>
#include <cmath>
using namespace std;
float Calculate_height(float distance ,float degrees);
main(){
 float distance,degrees;
cout<<" Enter the distance from the base of the tree (in feet):";
cin>>distance;

cout<<"Enter the angle of elevation (in degrees):";
cin>>degrees;

float radian=57.2958;
float result=(distance*degrees)/radian;
cout<<"The height of the tree is:"<<result;
}


float Calculate_height(float distance ,float degrees){
float radian = 57.2958;
float height = (distance*degrees)/radian;

return height;

}