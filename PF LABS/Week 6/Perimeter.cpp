#include <iostream>
using namespace std;
float Perimeter(char shape , float value );
main(){
float value;
char shape;
cout<<"Enter the shape(s for square,c for circle,t for triangle, h for hexagon):";
cin>>shape;
cout<<"Enter the value :";
cin>> value;
cout<<"The perimeter is:"<< Perimeter( shape ,  value );


}


float Perimeter(char shape , float value ){
float perimeter;
if (shape=='s'){
float square=4*value;
return square;
}
if (shape=='t')
{
float triangle=3*value;
return triangle;
}
if (shape=='h')
{
float hexagon=6*value;
return hexagon;
}
if (shape=='c')
{
float circle=6.28*value;
return circle;
}


return perimeter;
}