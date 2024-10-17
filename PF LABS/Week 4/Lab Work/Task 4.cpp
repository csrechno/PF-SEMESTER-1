#include <iostream>
using namespace std;
void add(int x,int y); 
void subtract(int x,int y);  
void multiplication(int x,int y);  
void divison(int x,int y);  
main(){
int number1,number2;
char op;
     cout<<"Enter 1st number:";
     cin>> number1;
      cout<<"Enter 2nd number:";
       cin>> number2; 
         cout<<"Enter Operator:";
         cin>>op;
if (op=='+'){
           add(number1,number2);}
if(op=='-'){
            subtract(number1,number2);}
if (op=='*'){
             multiplication(number1,number2);}
if (op=='/'){
             divison(number1,number2);
}
}

void add(int x,int y){  

int sum;
sum=x+y;
cout<<"Sum is:"<<sum;
}

void divison(int x,int y){  
int divison;
divison=x/y;
cout<<"Divison is :"<<divison;
}
void subtract(int x,int y){  
int subtract;
subtract=x-y;
cout<<"Subtract is :"<<subtract;
}

void multiplication(int x,int y){  
int multiplication;
multiplication=x*y;
cout<<"Multiplication is :"<<multiplication;
}