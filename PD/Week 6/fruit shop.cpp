#include <iostream>
using namespace std;

float FruitShop(string name, string day, float quantity);

int main() {
    string name, day;
    float quantity;
    cout << "Enter the fruit name: ";
    cin >> name;
    cout << "Enter the day of the week: ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;
    
    cout << FruitShop(name, day, quantity);
}

float FruitShop(string name, string day, float quantity) {
    float result = 0.0;

    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday") {
        if (name == "banana") {
            result = quantity * 2.50;
        } else if (name == "apple") {
            result = quantity * 1.20;
        } else if (name == "orange") {
            result = quantity * 0.85;
        } else if (name == "grapefruit") {
            result = quantity * 1.45;
        } else if (name == "kiwi") {
            result = quantity * 2.70;
        } else if (name == "pineapple") {
            result = quantity * 5.50;
        } else if (name == "grapes") {
            result = quantity * 3.85;
        }
    } else if (day == "saturday" || day == "sunday") {
        if (name == "banana") {
            result = quantity * 2.70;
        } else if (name == "apple") {
            result = quantity * 1.25;
        } else if (name == "orange") {
            result = quantity * 0.90;
        } else if (name == "grapefruit") {
            result = quantity * 1.60;
        } else if (name == "kiwi") {
            result = quantity * 3.00;
        } else if (name == "pineapple") {
            result = quantity * 5.60;
        } else if (name == "grapes") {
            result = quantity * 4.20;
        }
    }

    return result;
}
