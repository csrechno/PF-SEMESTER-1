#include <iostream>
#include <cmath>
using namespace std;
float power(float base,float exponent);
main(){
  float base,exponent;
  cout<<"Enter the base number:";
  cin>>base;

 cout<<"Enter the exponent :";
 cin>> exponent;

int result=pow(base, exponent);
cout<<base<<" raised to the power " <<exponent<<" is: "<<result;

}


float power(float base,float exponent){


float value=pow(base,exponent);
return value;


}