#include <iostream>
#include <cmath>
using namespace std;
float square_root(float number);
main(){
  float number;
  cout<<"Enter the number:";
  cin>>number;


float result=sqrt(number);
cout<<"The square root of "<<number<<" is: "<<result;

}


float square_root(float number){


float value=sqrt(number);
return value;


}