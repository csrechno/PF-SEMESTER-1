#include <iostream>
using namespace std;
main(){


cout<<"Enter vegetable price per kilogram(in coins):";
float vegetable;
cin>>vegetable;


cout<<"Enter fruit price per kilogram (in coins):";
float price;
cin>>price;



cout<<"Enter total kilogram of vegetables:";
float total;
cin>>total;


cout<<"enter total kilogram of fruits:";
float fruits;
cin>>fruits;


float total_kilogram_of_fruits_and_fruit_price=fruits*price;
float total_kilogram_of_vegetables_and_vegetable_price=total*vegetable;
float total_earning_in_rupees=total_kilogram_of_fruits_and_fruit_price/total_kilogram_of_vegetables_and_vegetable_price;
cout<<"total earning in rupees(Rps):"<<total_earning_in_rupees;


}


