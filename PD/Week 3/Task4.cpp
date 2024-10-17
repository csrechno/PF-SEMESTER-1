#include <iostream>
using namespace std;
main(){


cout<<"Enter imposter count:";
float imposter_count;
cin>>imposter_count;


cout<<"Enter player count:";
float count;
cin>>count;


int imposter= imposter_count;
int player_count=count;
int chance_of_being_an_imposter=100*imposter/player_count;
cout<<"Chance of being an imposter:"<<chance_of_being_an_imposter<<"%";

}
