#include <iostream>
using namespace std;
void largest(int  [][5] , int );
main(){
    int RowSize;
 cout<<"Enter Row size:";
 cin>>RowSize;
    int matrix[RowSize][5]; 
 cout<<"Enter Elements of Matrix: "<<endl;
    for(int idx=0; idx<RowSize; idx=idx+1){
        for(int y=0; y<5; y=y+1){
            cout<<"Enter Elements at position "<<"["<<idx<<"]"<<"["<<y<<"]"<<":";
             cin>>matrix[idx][y];
               
        }
       
    } 
 cout<<"Original Matrix is:"<<endl;
    for(int x=0; x<RowSize; x=x+1){
        for(int z=0; z<5; z=z+1){
          cout<<matrix[x][z]<<" \t ";
   }
cout<<endl;
}           
             cout<<endl;
          cout<<"The Shifted Matrix is:"<<endl;
               largest(matrix , RowSize);
}

void largest (int  matrix[][5],int RowSize){
   
  int max = -2000, maxcolumn;
  for(int ex=0; ex<5; ex=ex+1){
      int sum = 0;  
    for(int y=0; y<RowSize; y=y+1){
      sum = sum+matrix[y][ex]; 
    }   
    if (sum>max)
    {      max=sum;
          maxcolumn=ex;
    } 
   
} 
if (maxcolumn==0){
  cout<<"No Need to shift the matrix:"<<endl;
}else {
                int temp[RowSize];
for(int z=0; z<maxcolumn; z=z+1){
     temp[z]=matrix[z][maxcolumn];
}
for (int x=0; x<RowSize; x=x+1){
  for (int y=maxcolumn; y>=0; y=y-1){
            matrix[x][y]=matrix[x][y-1];
  }
  matrix[x][0]=temp[x];
}
}
for (int x=0; x<RowSize; x=x+1){
        for(int z=0; z<5; z=z+1){
          cout<<matrix[x][z]<<" \t ";
   }
    cout<<endl;
}  
              
} 
