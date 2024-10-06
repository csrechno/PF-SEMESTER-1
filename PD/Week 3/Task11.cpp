#include <iostream>
using namespace std;
main(){


cout<<"Enter the persons age:";
float age;
cin>>age;



cout<<"Enter the number the times they have moved:";
float number;
cin>>number;


int persons_age= age;
int number_of_times_they_have_moved=number+1;

int average_number=persons_age/number_of_times_they_have_moved;

cout<<"Average number of years lived in same house:"<<average_number;



}