#include <iostream>
using namespace std;
main(){
cout<<"Enter the size of the fertilizer bag in pounds:";
int pounds;
cin>>pounds;

cout<<"Enter the cost of the bag:$";
int cost;
cin>>cost;


cout<<"Enter the area in square feet that can be convered by the bag: ";
float area_in_square_bag;
cin>>area_in_square_bag;

float cost_of_fertilizer_per_pounds=cost/pounds;
float cost_of_fertilizer_per_square_foot=cost/area_in_square_bag;
cout<< "cost of fertilizer per pound:$"<<cost_of_fertilizer_per_pounds<<endl;
cout<<"Cost of fertilizing per square foot:$"<<cost_of_fertilizer_per_square_foot;


}