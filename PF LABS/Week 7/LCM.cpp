#include <iostream>
using namespace std;
int GCD(int a, int b);
int LCM(int a, int b);

 main(){
    int num1, num2;

    cout << "Enter First number: ";
    cin >> num1 ;
    cout<<"Enter Second Number";
    cin>> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive integers only." << endl;
    }

    cout << "GCD : "  << GCD(num1, num2) << endl;
    cout << "LCM :"   << LCM(num1, num2) << endl; 

    
}
int GCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1= temp;
    }
    return num1;
}


int LCM(int num1, int num2) {
    return (num1 * num2) / GCD(num1, num2);
}
