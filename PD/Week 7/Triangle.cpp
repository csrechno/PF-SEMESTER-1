#include <iostream>
using namespace std;
void generateTriangularNumbers(int n);
 main() {
    int num;
    cout << "Enter the number of Triangle : ";
    cin >> num;

    generateTriangularNumbers(num);

    
}
void generateTriangularNumbers(int n) {
    for (int i = n; i <= n; i=i+1) {
       
        int triangularNumber = (i * (i + 1)) / 2;
        cout << "Dots in Triangle:"<< triangularNumber;
    }
     
}