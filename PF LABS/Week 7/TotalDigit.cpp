#include <iostream>
using namespace std;

void TotalDigit(int number);

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    TotalDigit(number);
    
}

void TotalDigit(int number) {
    
    if (number < 0) {
        number = -number;
    }
      
    

    int sum = 0;
    
    while (number>0) {
      
        number /= 10; 
        sum=sum+1;      
    } 
     cout<<"Total Digits are :"<<sum;
   
}
