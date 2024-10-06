#include <iostream>
using namespace std;
main(){

cout<<"Enter the size in Megabytes(MB):";
float megabytes;
cin>>megabytes;

float bits ;

bits=megabytes*1024*1024*8;
cout<<"MB is equivalent is"<<bits;

}