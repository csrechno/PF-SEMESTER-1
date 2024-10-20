#include <iostream>
using namespace std;

void SumDigit(int number);

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    SumDigit(number);
    
}

void SumDigit(int number){
      int sum = 0;
    
    while (number>0) {
      
        sum=sum+number%10;
        number/=10;
             
    } 
     cout<<sum;
   
}
