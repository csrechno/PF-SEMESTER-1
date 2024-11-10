
#include <iostream>
using namespace std;

 main() {
  int x;
    int numbers;
    cout << "Enter numbers: ";
    cin >> numbers;
  
    if(numbers>0)
    {
        cout << "Enter " << numbers << " numbers, one per line:" << endl; 
    int enter[numbers];
    for (int idx = 0; idx < numbers; idx++) {
        cin >> enter[idx];
    }
          cout << "Shifted numbers: ";
    for (int x = numbers - 1; x >= 0; x--) {
        cout << enter[x] << " ";
        }
          
    }else {
      cout<<"Invalid input. Numbers greater than 0";  
        }  
            }
        
    
          
   
    

