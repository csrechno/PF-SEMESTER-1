#include <iostream>
using namespace std;
main(){
      int numbers;
    cout<<"Enter numbers:";
      cin>>numbers;
      int enter[numbers];
      for (int idx=0; idx<numbers; idx=idx+1){
        cin>>enter[idx];  
      }
       int y=0;
      for(int idx=0; idx<numbers; idx=idx+1){
              y=y+1;
        cout<<y<<" Element is "<<enter[idx]<<endl;
        
      }

}
