#include <iostream>
using namespace std;
void Diamond(int RowSize);
main(){
    int RowSize;
    cout<<"Enter desired number of rows:";
    cin>>RowSize;
    Diamond(RowSize);
}

void Diamond(int RowSize){
     for(int Row=RowSize ; Row>1 ; Row=Row-1){
      for(int Col=1; Col<=Row; Col=Col+1){
                 
                 cout<<"*";
        }
       cout<<endl;     
    }


}