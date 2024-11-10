#include <iostream>
using namespace std;
main(){ 
    
    double quarter=0.25;
    double dime=0.10;
    double nickels=0.05;
    double pennies=0.01;
    int bill[4];
    cout<<"Enter quarters:";
    cin>>bill[0];
    cout<<"Enter dimes:";
    cin>>bill[1];
    cout<<"Enter nickels: ";
    cin>>bill[2];
    cout<<"Enter penneis:";
    cin>>bill[3];
      
      double Calculate=bill[0]*quarter+bill[1]*dime+bill[2]*nickels+bill[3]*pennies;
     cout<<"Enter the payable amount : $"<<Calculate<<endl;

      int change1[4]={bill[0],bill[1],0,0};
      double dues1=14.11;
      if((change1[4],dues1)<Calculate){
        cout<<"True";
      }
      else{
        cout<<"False";
      } 
      int change2[4]={0,0,bill[2],bill[3]};
      double dues2=075;
      if((change2[4],dues2)<Calculate){

        cout<<"True";
      }
      else{
        cout<<"False";
      } int change3[4]={bill[0],bill[1],bill[2],bill[3]};
      double dues3=12.55;
      if((change3[4],dues3)<Calculate){
        cout<<"True";
      }
      else{
        cout<<"False";
      }
       int change4[4]={bill[0],0,0,bill[3]};
      double dues4=3.85;
      if((change4[4],dues4)<Calculate){
        cout<<"True";
      }
      else{
        cout<<"False";
      } 
      int change5[4]={bill[0],0,bill[2],bill[3]};
      double dues5=19.99;
      if((change5[4],dues5)<Calculate){
        cout<<"True";
      }
      else{
        cout<<"False";
      }
}