#include <iostream>
using namespace std;
main(){

cout<<" Number of squares meters you can paint :";
float squares;
cin>>squares;


cout<<"Width of the single wall (in meters):";
float width;
cin>>width;



cout<<"Height of the single wall:";
float height;
cin>>height;


int number_of_squares_meters=squares;
int  width_of_single_wall=width;
int height_of_single_wall=height;

int numbers_of_walls=number_of_squares_meters/(width_of_single_wall*height_of_single_wall);

cout<<"Numbers of walls you can paint:"<<numbers_of_walls;



}



