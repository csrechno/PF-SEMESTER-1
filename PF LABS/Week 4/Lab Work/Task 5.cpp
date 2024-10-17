#include <iostream>
using namespace std;
void vote();
void Vote();-
int age;
main(){
    
   cout<<"Enter your age:";
   cin>>age;
  

 if(age>=18){

vote();
}
if (age!=18){

Vote();

}

}
  


void vote(){

cout<<"you are eligible to vote";



}


void Vote(){
cout<<"you are not eligible to vote";

}

