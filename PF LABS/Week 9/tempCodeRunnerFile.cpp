#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number;
    
    
    cout << "Enter the number of elements: ";
    cin >> number;
    
    vector<int> word;  // Use a vector to dynamically store the numbers
    
    // Loop to get numbers from the user
    for (int idx = 0; idx < number; ++idx) {
        int num;
        cout << "Enter number " << idx + 1 << ": ";
        cin >> num;
        
        // Check if the number already exists in the vector
        bool found = false;
        for (int i = 0; i < word.size(); ++i) {
            if (word[i] == num) {
                cout << "Already Entered: " << num << endl;
                found = true;
                break;
            }
        }

        // If the number was not found, add it to the vector
        if (!found) {
            word.push_back(num);
        }
    }

    // Print the unique numbers entered
    cout << "Unique numbers entered: ";
    for (int i = 0; i < word.size(); ++i) {
        cout << word[i] << " ";
    }
    cout << endl;

    return 0;
}
