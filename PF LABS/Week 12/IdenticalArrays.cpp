#include <iostream>
using namespace std;
int identicalArrays(int matrix[][3] , int RowSize);
main(){
    int RowSize;
    cout<<"Enter Row Size:";
    cin>>RowSize;
    cout<<"Enter the elements of array:"<<endl;
    int matrix[RowSize][3];
    for(int idx=0; idx<RowSize; idx=idx+1){
        for(int x=0; x<3; x=x+1){
                 cout<<"Enter elements at position ["<<idx<<"]["<<x<<"]:";
                 cin>>matrix[idx][x];
        }
    }
    for(int idx=0; idx<RowSize; idx=idx+1){
        for(int y=0; y<3; y=y+1){
            cout<<matrix[idx][y]<<"\t";
        }
        cout<<endl;
    }    
    
              if(identicalArrays( matrix , RowSize)){
                int count=0 ,  sum=0;
                 for(int idx=0; idx<RowSize; idx=idx+1){ 
                    for(int x=idx+1; x<RowSize; x=x+1 ){

               if( (matrix[idx][0] == matrix[x][0] ) || (matrix[idx][1]== matrix[x][1]) || (matrix[idx][2]== matrix[x][2])){
                                 
                                  count++ ;
                                  
               }
                   
                            sum =  count + sum;
                 } 
                  
                 cout<<sum;              
             
                         
                 }
                         

              
}
}
int identicalArrays(int matrix[][3] , int RowSize){
    bool flag=false;
    for(int idx=0; idx<RowSize; idx=idx+1){
         for(int x=0; x<3; x=x+1){
            if((matrix[idx][x] == matrix[idx+1][x] ) || (matrix[idx][x]== matrix[idx+2][x]) || (matrix[idx][x]== matrix[idx+3][x]) ){
                   flag=true;
            } 
   
        }
      
}  
return flag;
    }
      