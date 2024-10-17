#include <iostream>
using namespace std;
main(){

cout<<" Enter Initial Velocity(m/s):";
float initial;
cin>>initial;


cout<<"Enter acceleration(m/s^2):";
float acceleration;
cin>>acceleration;


cout<<"Enter Time(s):";
int time;
cin>>time;


int acceleration_and_time=acceleration*time;
int initial_velocity=initial ;
int final_velocity=initial_velocity+acceleration_and_time;
cout<<"final velocity:"<<final_velocity;
}


