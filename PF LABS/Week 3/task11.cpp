#include <iostream>
using namespace std;
main(){


cout<<"Enter the name of the cricket team:";
string team;
cin>>team;


cout<<" Enter the number of Wins: ";
int  wins;
cin>>wins;

cout<<"Enter the number of losses:"; 
float losses;
cin>>losses;

cout<<"Enter the number of draws:";
float draws;
cin>>draws;


int e=3*wins;
int s=1*losses;
int d=1*draws;
int population=e+s+d;
cout<<"pakistan has obtained"<<population;


}


