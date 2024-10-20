#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}


long long primorial(int n) {
    long long product = 1;
    int count = 0; 
    int current = 2; 

    while (count < n) {
        if (isPrime(current)) {
            product *= current;
            count++; 
        }
        current++; 
    }

    return product;
}

 main() {
    int n;
    cout << "Enter the number of prime numbers for the Primorial: ";
    cin >> n;

    long long result = primorial(n);
    cout << "The Primorial of " << n << " is: " << result << std::endl;

    
}
