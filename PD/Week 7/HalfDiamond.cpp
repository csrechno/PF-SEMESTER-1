#include <iostream>
using namespace std;
void Diamond(int RowSize);
void Half(int RowSize);
main(){
    int RowSize;
    cout<<"Enter desired number of rows:";
    cin>>RowSize;
    Diamond(RowSize);
    Half( RowSize);
}

void Diamond(int RowSize){
     for(int Row=1; Row<=RowSize ; Row=Row+1){
      for(int Col=1; Col<=Row; Col=Col+1){
                 
                 cout<<"*";
        }
       cout<<endl;     
    }
   
}
void Half(int RowSize){
    int Row=1;
     
     for(int Row=RowSize ; Row>1 ; Row=Row-1){
          for(int Col=1; Col<=Row; Col=Col+1){        
                 cout<<"*";
        }
       cout<<endl;     
    }
}