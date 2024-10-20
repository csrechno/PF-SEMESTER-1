#include <iostream>
using namespace std;
void printTable(int number);
main(){
    int number;
cout<<"Enter a number:";
cin>>number;
printTable(number);
}
void printTable(int number){


for (int i=1;i<=10;i=i+1){
    int f=i+1;
    cout<<number<<"*"<<i<< "="<<number*i<<endl;
}

}