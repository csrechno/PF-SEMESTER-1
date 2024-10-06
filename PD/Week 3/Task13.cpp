#include <iostream>
using namespace std;
main(){

cout<<" Integer 1:";
int Integer_1;
cin>>Integer_1;

cout<<"Integer 2:";
int Integer_2;
cin>>Integer_2;

cout<<"Integer 3:";
int Integer_3;
cin>>Integer_3;

cout<<"Integer 4:";
int Integer_4;
cin>>Integer_4;

cout<<"Integer 5:";
int Integer_5;
cin>>Integer_5; 


int sum_of_three_integers= Integer_1+ Integer_2+ Integer_3;
int sum_of_two_integers= Integer_1+ Integer_5;

int sum_of_five_inetegers=sum_of_three_integers + sum_of_two_integers;


cout<<"Sum of integers:"<< sum_of_five_inetegers;



}