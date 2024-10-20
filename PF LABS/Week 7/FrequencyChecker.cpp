#include <iostream>
using namespace std;

void FrequencyChecker(int number, int digit);

main() {
    int digit, number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a digit to check: ";
    cin >> digit;
    FrequencyChecker(number, digit);

}

void FrequencyChecker(int number, int digit) {
    int count = 0; 
    while (number > 0) {
        if (number % 10 == digit) { 
            count++; 
        }
        number /= 10;
    }
    cout <<"Frequency :"<< count<< endl;
}
