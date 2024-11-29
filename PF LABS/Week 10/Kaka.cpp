#include <iostream>
using namespace std;
main(){
    int number;
    cout<<"Enter number:";
    cin>>number;
    int miles[number];
    int idx=0;
    for(int idx=0 ; idx<number; idx=idx+1)
    {
        cin>>miles[idx];
    }
         int progress=0;
         cout<<"Progress Week:";
     for (int x=0; x<number-1; x=x+1)
     {
        if (miles[x] < miles[x+1]){
          progress=progress+1;
        }
        
    }
     cout<<progress;
}