#include <iostream> 
using namespace std;
void check_speed(int speed);
main(){
int speed;
cout<<"Speed:";
cin>>speed;
check_speed(speed);


}



void check_speed(int speed){

if (speed<=100){

cout<<"Perfect!You're going good";
}
if (speed>=100){
cout<<"Halt...You will be challenged!!!!";
}


} 