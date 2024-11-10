#include <iostream>
using namespace std;
main(){ int num;
    int number[2];
    cout<<"Enter the number of elements for first array(must be 2):";
    cin>>num;
    cout<<"Enter "<<num<< " numbers one per line"<<endl;
    
   if(num==2){
   for(int idx=0; idx<2; idx=idx+1){
    cin>>number[idx];
     
   }
  
      int numbers;
    cout<<"Enter the number of elements for second array:";
    cin>>numbers;
     cout<<"Enter "<<numbers<< " numbers one per line"<<endl;
      int secondArray[numbers];
     for(int idx=0; idx<numbers; idx=idx+1){
    cin>>secondArray[idx];
  
    } 
    cout<<"["<<number[0]<<",";
    for(int idx=0; idx<numbers; idx=idx+1){
    
      cout<<secondArray[idx]<<",";
    }
     
cout<<number[1]<<"]";
   }
}