#include <iostream>
#include <cmath>
using namespace std;
void Quadratic_Equation(double a,double b,double c);

main(){
double a,b,c;
 cout<<" Enter the Value of a :";
cin>>a;
cout<<"Enter the value of b :";
cin>>b;
cout<<"Enter the value of c:";
cin>>c;

Quadratic_Equation( a, b, c);

}


void Quadratic_Equation(double a,double b,double c){

double root_1,root_2;
double determinant=(b*b)-(4*a*c);

if (determinant>0){
double determinant=(b*b)-(4*a*c);

      root_1=(-b+sqrt(determinant))/(2*a);
      root_2=(-b-sqrt(determinant))/(2*a);

    cout<<"Complex Solution :x="<<root_1 <<"and x="<<root_2;
}
if (determinant==0){

     root_1=root_2=-b/(2*a);
    cout<<"Solution is : x = "<<root_1;
}


if (determinant<0){
     double real_roots=b/(2*a);
     root_1=(sqrt(-determinant))/(2*a);
     root_2=(sqrt(-determinant))/(2*a);
    cout<<"Complex Solution : x= -" <<real_roots<<"+"<<root_1<<"i and "<<"x= -"<<real_roots<<"-"<<root_2<<"i";
}




}