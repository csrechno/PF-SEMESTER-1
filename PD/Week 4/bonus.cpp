#include <iostream>
using namespace std;
void Bonus(int position,int friends_position);
main(){
int position,friends_position;
cout<<"Enter your position:";

cin>>position;

cout<<"Enter your friends position:";
cin>>friends_position;

Bonus(position,friends_position);


}



void Bonus(int position,int friends_position){
int diff=friends_position-position;
if ( diff>6)
{  
    cout<<"false";}
else{

cout<<"true";

}




}