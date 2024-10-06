#include <iostream>
using namespace std;
double converter(int length,int width,int height);

string output;
main(){
int length,width,height;

cout<<"Enter the length of pyramid (in metres):";
cin>>length;

cout<<"Enter the width of pyramid (in metres):";
cin>>width;

cout<<"Enter the height of pyramid (in metres):";
cin>>height;

cout<<"Enter the desired output unit(metres,kilometres,centimetres,millimetres):";
cin>>output;

 double result= converter( length, width, height);
cout<<"The volume of pyramid is :"<<result<<"cubic "<< output;
}



 double converter(int length,int width,int height){

if(output=="millimetres"){

double millimetres=((length*width*height)/3)*1000000000;
return millimetres;

}
if(output=="centimetres"){

double centimetres=((length*width*height)/3)*1000000;
return centimetres;

}
if(output=="metres"){

double metres=((length*width*height)/3);
return metres;

}
if(output=="kilometres"){
double metres;
double kilometres=metres/1000000000;
return kilometres;    

}




}