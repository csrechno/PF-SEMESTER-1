#include <iostream>
using namespace std;
main(){
    int numbers;
    cout<<"Enter the number of resistors in seriers circuit:";
    cin>>numbers;
    cout<<"Enter the value of resistors in series (in ohms) "<<numbers<<" resistors , one per line"<<endl;
    float resistors[numbers];
    for(int idx=0; idx<numbers; idx=idx+1){
        cin>>resistors[idx];
    }
    float sum=0;
    for(int idx=0; idx<numbers; idx=idx+1){
        
        sum=sum+resistors[idx];
      
        
    }
    cout<<"The total resistance of series circuit "<<sum<<" in ohms";
}