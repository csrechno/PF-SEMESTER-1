#include <iostream>
using namespace std;
void generateFibonacci(int length);
main(){
    int length;
    cout<<"Enter the length of fibonacci series:";
    cin>>length;
     generateFibonacci(length);
}
void generateFibonacci(int length){
      int g=0;
      int s=1;
      cout<<g<<","<<s<<",";      
      int sum=0;
      int i=0;
while (  i<=length-3 )
{   
   i=i+1;
   sum=g+s;
   cout<<sum<<",";
   g=s;
   s=sum;
}

}