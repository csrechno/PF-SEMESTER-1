#include <iostream>
#include <string>
using namespace std;

void Menu();
void product();

int main() {
    system("cls"); // Clear the console screen
    Menu();
    product();
    return 0; // Indicate successful completion
}

void Menu() {
    cout << "                  **********************************************************************             " << endl;
    cout << "                  **********************************************************************             " << endl;
    cout << "                  *                 STORE MANAGEMENT SYSTEM                            *             " << endl;
    cout << "                  **********************************************************************             " << endl;
    cout << "                  *                    1-Product Management                            *             " << endl;
    cout << "                  *                    2-Inventory Management                          *             " << endl;
    cout << "                  *                    3-Sales Management                              *             " << endl;
    cout << "                  *                    4-Basic Reporting                               *             " << endl;
    cout << "                  *                    5-Exit the program                             *             " << endl;
    cout << "                  **********************************************************************           " << endl;
}

void product() {
    int choice;
    string nameof1stproduct, nameof2ndproduct;
    int quantityof1stproduct = 0, quantityof2ndproduct = 0;
    int priceof1stproduct = 0, priceof2ndproduct = 0;
    float total1 = 0, total2 = 0, totalPayable = 0;

    while (true) {
        cout << "Select one of the following options:" << endl;
        cout << "Enter your choice (1 for Product Management): ";
        cin >> choice;

        if (choice == 1)
 {
            cout << "1- Add 1st product:" << endl;
            cout << "2- Add 2nd Product:" << endl;
            cout << "3- Calculate Total:" << endl;
            cout << "4- View all Products data:" << endl;
            cout << "5- Exit the program:" << endl;

            cout << "Enter option: ";
            int option;
            cin >> option;

            
                if(option == 1)
		{
                    cout << "Enter 1st product name: ";
                    cin >> nameof1stproduct;
                    cout << "Enter quantity of 1st product: ";
                    cin >> quantityof1stproduct;
                    cout << "Enter price of 1st product: ";
                    cin >> priceof1stproduct;
		}
                    

                else if(option == 2)
		{
                    cout << "Enter 2nd product name: ";
                    cin >> nameof2ndproduct;
                    cout << "Enter quantity of 2nd product: ";
                    cin >> quantityof2ndproduct;
                    cout << "Enter price of 2nd product: ";
                    cin >> priceof2ndproduct;
                    
		}
                else  if(option == 3)
		{
                    total1 = priceof1stproduct * quantityof1stproduct;
                    total2 = priceof2ndproduct * quantityof2ndproduct;
                    totalPayable = total1 + total2;
                    cout << "The total payment is: " << totalPayable << endl;
                }
                else if(option == 4)
		{
                    cout << "ALL products data:" << endl;
                    cout << "Products" << "\t" << "Price" << "\t\t" << "Quantity" << "\t" << "Total Amount" << endl;
                    cout << nameof1stproduct << "\t\t" << priceof1stproduct << "\t\t" << quantityof1stproduct << "\t\t" << total1 << endl;
                    cout << nameof2ndproduct << "\t\t" << priceof2ndproduct << "\t\t" << quantityof2ndproduct << "\t\t" << total2 << endl;
                 }

                else if(option == 5)
                 {
		    cout << "Exiting the program..." << endl;
                    return; // Exit the product function
		}
                else
                    cout << "Invalid option. Please try again." << endl;
                    
            
} 	    else {
            cout << "Please select Product Management (1) to continue." << endl;
        }
    }
}
