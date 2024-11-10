#include <iostream>
using namespace std;
main(){
      int numbers;
    cout<<"Enter number:";
    cin>>numbers;
     cout<<"Enter "<<numbers<<" number one per line:"<<endl;
    int word[numbers];
      for(int idx=0; idx<numbers; idx=idx+1){
         cin>>word[idx];
      }
      int max=word[0];
      for(int idx=0; idx<numbers; idx=idx+1){
      
         
         if(word[idx]>max){
            
               max=word[idx];
              
         }
      }
     cout<<"The Largest number is this:"<<max;
}