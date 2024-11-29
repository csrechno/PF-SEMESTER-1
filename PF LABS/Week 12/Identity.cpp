#include <iostream>
using namespace std;
bool Identity(int [3][3]);
main(){
 
    int idx=0, y=0;
    int matrix[3][3]; 
 cout<<"Enter Elements of Matrix: "<<endl;
    for(int idx=0; idx<3; idx=idx+1){
        for(int y=0; y<3; y=y+1){
            cout<<"Enter Elements at position "<<"["<<idx<<"]"<<"["<<y<<"]"<<":";
            cin>>matrix[idx][y];
               
        }
       
    } 
 cout<<"The Matrix you Entered is:"<<endl;
    for(int x=idx; x<3; x=x+1){
        for(int z=y; z<3; z=z+1){
          cout<<matrix[x][z]<<" \t ";
   }
cout<<endl;
}
 if(Identity(matrix)){
            cout<<"The matrix is IDENTITY:";
 }
 if(!Identity(matrix)){
    cout<<"The matrix is Not IDENTITY:";
 }
}


bool Identity(int matrix[3][3]){
bool flag = false;
for(int x=0; x<3; x=x+1){
    for(int y=0; y<3; y=y+1){
        if ((x==y && matrix[x][y] == 1 )  )
        {
           flag=true;
           
        }
         if(  x!=y && matrix[x][y]== 0){
            flag==true;
        }
        
        else {
        flag=false;
          break;   
         }
       
    }
}
return flag;
}

