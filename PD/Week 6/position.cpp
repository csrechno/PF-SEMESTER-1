#include <iostream>
using namespace std;
string check_position(float height,float x_coordinate,float y_coordinate);
main(){
    float height,x_coordinate,y_coordinate;
cout<<"Enter height:";
cin>>height;
cout<<"Enter x coordinate:";
cin>>x_coordinate;
cout<<"Enter y coordinate:";
cin>>y_coordinate;
cout<< check_position( height, x_coordinate, y_coordinate);
}

string check_position(float height,float x_coordinate,float y_coordinate){
    string result;
 if (x_coordinate < 0 || x_coordinate > 2 * height || y_coordinate < 0 || y_coordinate > 4 * height) {
        result= "Outside" ;
    } else if (
        (x_coordinate >= 0 && x_coordinate <= height && y_coordinate >= 0 && y_coordinate <= height) ||    
        (x_coordinate >= height && x_coordinate <= 2 * height && y_coordinate >= 0 && y_coordinate <= height) || 
        ( x_coordinate>= 0 && x_coordinate <= height && y_coordinate >= height && y_coordinate <= 2 * height) || 
        (x_coordinate >= height && x_coordinate <= 2 * height && y_coordinate >= height && y_coordinate <= 2 * height) || 
        (x_coordinate >= 0 && x_coordinate <= height && y_coordinate >= 2 * height && y_coordinate <= 4 * height) || 
        (x_coordinate >= height && x_coordinate <= 2 * height && y_coordinate >= 2 * height && y_coordinate <= 4 * height)   
    ) {
        if (
            (x_coordinate == 0 || x_coordinate == height || x_coordinate == 2 * height) && (y_coordinate >= 0 && y_coordinate <= 4 * height) ||  
            (y_coordinate == 0 || y_coordinate == height || y_coordinate == 2 * height || y_coordinate == 3 * height || y_coordinate == 4 * height) && (x_coordinate >= 0 && x_coordinate <= 2 * height) 
        ) {
            result= "Border";
        } else {
            result= "Inside";
        }
    } else {
        result="Outside" ;
    }
    return result;
}