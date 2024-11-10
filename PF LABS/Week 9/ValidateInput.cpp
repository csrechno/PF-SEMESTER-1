#include <iostream>
using namespace std;

main(){
    
    int numbers;
    cout<<"Enter number:";
    cin>>numbers;
     cout<<"Enter "<<numbers<<" number one per line:"<<endl;
    int word[numbers];
    for(int idx=0; idx<numbers; idx=idx+1){
      int num;
      cout<<idx+1;
      cin>>num;
    
    bool found=false;
    for(int i=0; i<numbers; i=i+1){
      if(word[i]==num){
         cout<<"Already Entered:"<<num<<endl;
         found=true;
         break;
      }
    }  
}
}