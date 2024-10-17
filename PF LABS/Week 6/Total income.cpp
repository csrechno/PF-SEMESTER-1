#include <iostream>
using namespace std;
float totalincome(string screening,int rows,int colums);
main(){
string screening;
int rows,columns;
cout<<"Enter the screening type(Premiere/Normal/Discount):";
cin>>screening;
cout<<"Enter the number of rows:";
cin>>rows;
cout<<"Enter the number of columns:";
cin>>columns;

cout<<totalincome( screening, rows, columns);
}

float totalincome(string screening,int rows,int columns){
float result;
if (screening=="premiere" ){
result=rows*columns*12;

}else

if (screening=="normal" ){
result=rows*columns*7.50;

}else 
 if (screening=="discount"){
result=rows*columns*5;
}
return result;
}