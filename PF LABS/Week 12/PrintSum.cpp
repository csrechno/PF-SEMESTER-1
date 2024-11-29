#include <iostream>
using namespace std;
 int printSum(int RowSize);
          
main(){
          int RowSize;
          cout<<"Enter Row Size:";
          cin>>RowSize;
          cout<<"Sum of all Enteries:"<<printSum(RowSize);

}
int printSum(int RowSize){
    int sum=0;
    int matrix[RowSize][3];
    for(int idx=0; idx<RowSize; idx=idx+1){
        for(int y=0; y<3; y=y+1){
            cout<<"Enter Elements at position "<<"["<<idx<<"]"<<"["<<y<<"]"<<":";
            cin>>matrix[idx][y];
            sum=sum+matrix[idx][y];
        }
    }
       return sum;
}