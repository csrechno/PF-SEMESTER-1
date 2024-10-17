#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void Menu ();
void product();
void Inventory();
 int choice=0;
void enter();
void Loginpage();
bool UserName();
main(){
system("cls");
Loginpage();

if (UserName()){
                     system("cls");
                     Menu ();
                     enter();
} 
else
{
                     cout<<"Exiting the Program";
}
 
}

void enter(){

   cout<<"Enter your Choice:";
       cin>>choice;
  
  if(choice==1){
   cout<<"1-Add 1st product:"<<endl; 
   cout<<"2- Add 2nd Product:"<<endl;
   cout<<"3-Calculate Total:"<<endl;
   cout<<"4-View all Products data :"<<endl;
   cout<<"5-Exit the program:"<<endl;

     product();
     }
       
    if (choice==2){
         Inventory();
        }
  
}


void Inventory(){

  cout<<"SAAD"<<endl;
 
}
void product(){


while(true){  

  cout<<"Enter option :";
     int option;
    cin>>option;

  string nameof2ndproduct;
  int quantityof2ndproduct,priceof2ndproduct;
     string nameof1stproduct;
    int quantityof1stproduct,priceof1stproduct;
 float total1,total2,totalPayable;
   
    if (option==1){
    
     cout<<"Enter 1st product name :";
     cin>>nameof1stproduct;
    cout<<"Enter quantity of 1st product:";
    cin>>quantityof1stproduct;
    cout<<"Enter price of 1st product:"; 
     cin>>priceof1stproduct;
     
 }
            if (option==2){
               
                cout<<"Enter 2nd product name :";
                  cin>>nameof2ndproduct;
                cout<<"Enter quantity of 2nd product:";
                     cin>>quantityof2ndproduct;
                   cout<<"Enter price of 2nd product:"; 
                    cin>>priceof2ndproduct;
                  

}
         if(option==3){
            if ((quantityof1stproduct>1 && quantityof2ndproduct>1)){
              total1=priceof1stproduct*quantityof1stproduct;
              total2=quantityof2ndproduct*priceof2ndproduct;
              totalPayable=total1+total2;
            cout<<"The total payment is :"<<totalPayable<<endl;
            }
              
}

       if (option==4){ 
          if ((quantityof1stproduct>1 && quantityof2ndproduct>1)){
cout<<"ALL products data:"<<endl;
cout<<" Products"<<"\t"<<" Price"<<"\t\t"<<"Quantity"<<"\t"<<"Total Amount"<<endl;
cout<<"nameof1stproduct"<<"\t\t"<< priceof1stproduct<<"\t\t"<<quantityof1stproduct<<"\t\t"<<total1<<endl;
cout<<"nameof2ndproduct"<<"\t\t"<<priceof2ndproduct<<"\t\t"<<quantityof2ndproduct<<"\t\t"<<total2<<endl;

          }
}
if (option==5){
cout<<"         "<<endl<<endl;
        
        system("cls");
        Menu();
       enter();
       Inventory();
       enter();
    } 
}

}
  


void Menu (){


cout<<"                  **********************************************************************             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  *                 STORE MANAGEMENT SYSTEM                            *             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  *                    1-Product Management                            *             "<<endl;
cout<<"                  *                    2-Inventory Management                          *             "<<endl;
cout<<"                  *                    3-Sales Management                              *             "<<endl;
cout<<"                  *                    4-Basic reporting                               *             "<<endl;
cout<<"                  *                    5-Exiting the program                           *             "<<endl;
cout<<"                  **********************************************************************           "  <<endl;


}
void Loginpage(){
 
cout<<"             .____     ________   ________ .___ _______       "<<endl;
cout<<"             |    |    \\_____ \\  /  _____/ |   |\\     \\    "<<endl;            
cout<<"             |    |    /   |   \\/   \\  ___ |   |/   |  \\      "<<endl;
cout<<"             |    |___/    |    \\    \\_\\  \\    /    |   \\     "<<endl;
cout<<"             |______  \\_______  /\\______  / ___\\____|__ /     "<<endl;
cout<<"                    \\/        \\/        \\/           \\/        "<<endl;
cout<<"            __________   _____    ___________________         "<<endl;
cout<<"            \\______   \\ /  _  \\  /  _____/\\_   _____/           "<<endl;
cout<<"            |     ___  /  /_\\  \\/   \\  ___ |   __)_              "<<endl;
cout<<"            |    |    /    |    \\    \\_\\  \\|       \\          "<<endl;
cout<<"            |____|     \\___|__  /\\______  /____ ___/           "<<endl; 
cout<<"                              \\/        \\/     \\/            "<<endl; 
           
}

bool UserName(){
  string correctUsername="CS_RECHNO";
string correctPassword="SaadCh12345";
string username,password;
cout<<"            USERNAME:";
cin>>username;
cout<<"            PASSWORD:";
cin>>password;
 if (username==correctUsername && password==correctPassword){
    cout<<"Login Successful";
    return true;
    } else { cout<<"Login unsuccessfull:"<<endl;
    return false;} 
}