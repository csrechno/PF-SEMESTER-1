
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>

using namespace std;

struct Product {
    string name;
    int quantity;
    int price;
};

void Menu();
void product();
void Inventory();
int choice = 0;
void enter();
void Loginpage();
bool UserName();

vector<Product> products; // Vector to store products

int main() {
    system("cls");
    Loginpage();

    // If login is successful, proceed to the menu
    if (UserName()) {
        system("cls");
        Menu();
        enter();
    } else {
        cout << "Exiting program..." << endl;
    }

    return 0;
}

void enter() {
    cout << "Enter your Choice: ";
    cin >> choice;

    if (choice == 1) {
        product();
    } else if (choice == 2) {
        Inventory();
    }
}

void Inventory() {
    cout << "Inventory Management" << endl;
    // Display inventory or implement inventory management features here
}

void product() {
    while (true) {
        cout << "1-Add Product" << endl;
        cout << "2-Update Product" << endl;
        cout << "3-Remove Product" << endl;
        cout << "4-Calculate Total" << endl;
        cout << "5-View All Products Data" << endl;
        cout << "6-Exit to Main Menu" << endl;
        cout << "Enter option: ";

        int option;
        cin >> option;

        if (option == 1) {
            Product newProduct;
            cout << "Enter product name: ";
            cin >> newProduct.name;
            cout << "Enter quantity: ";
            cin >> newProduct.quantity;
            cout << "Enter price: ";
            cin >> newProduct.price;
            products.push_back(newProduct);
            cout << "Product added successfully." << endl;

        } else if (option == 2) {
            string name;
            cout << "Enter product name to update: ";
            cin >> name;

            bool found() ;
        }
    }
}