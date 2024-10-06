#include <iostream>
using namespace std;
void side_length(float stickers);


main(){

float cube;
cout<<"Enter the side length of the Rubik's cube:";
cin>>cube;

side_length(cube);
}


void side_length(float stickers){


float sticker_needed;
sticker_needed=stickers*stickers*6;
cout<<"Number of sticker needed:"<<sticker_needed;



}