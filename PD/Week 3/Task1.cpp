#include <iostream>
using namespace std;
main(){

cout<<"Enter the number of sides of polygon:";
float polygon;
cin>>polygon;


int multiply_by_180=1*180;
int subtract_2_from_sides_of_polygon= polygon-2;
int sum_of_internal_angles=multiply_by_180*subtract_2_from_sides_of_polygon;

cout<<"The sum of internal angles:"<<sum_of_internal_angles;

}