#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void Menu ();
void User_ID();
void Admin_ID();
void Employee_ID();
void product();
int choice=0;
int Choice=0;
void enter();
bool Login();
bool Admin();
bool Employee();
bool User();
void ProductManagement();
void Cancel(int choice);
void Inventory();
main(){

                    system("cls");
                     Menu ();
                     enter(); 
                   
}
 


void enter(){

   cout<<"Enter your Choice:";
       cin>>choice;

  void Cancel(int choice);
    
  if(choice==1){
    system("cls");
    Menu();
    cout<<"Login As Admin:"<<endl;
     if (Admin()){ 
                    system("cls");
                     Inventory();

} 
else
{
                     cout<<"Exiting the Program";
            while(true){
                     system("cls");
                     Menu();
                     enter();
                     cout<<"Login As Admin:";
                     Admin();
            }
                  
                       
}
 
  }    
   if(choice==2){
    system("cls");
    Menu();
    cout<<"Login As Employee:"<<endl;
     if (Employee()){ 
                    system("cls");
                    Employee_ID();
                     
} 
else
{
                     cout<<"Exiting the Program";
                      while(true){
                      system("cls");
                      Menu();
                      enter();
                    cout<<"Login As Employee:";
                      Employee();
                     }
}
 
  }        
  if(choice==3){
    system("cls");
    Menu();
    cout<<"Login As User:"<<endl;
     if (User()){ 
                    system("cls");
                    
                       ProductManagement();
} 
else
{
                     cout<<"Exiting the Program";
                       while(true){
                      system("cls");
                      Menu();
                      enter();
                    cout<<"Login As User:";
                     User();}
}
  }
  }        

void  ProductManagement(){

        User_ID();
       cout<<"Enter your Choice:";
       cin>>Choice;

     if (Choice==1){                 
   cout<<"1-Buy 1st product:"<<endl; 
   cout<<"2-Buy 2nd Product:"<<endl;
   cout<<"3-Total Bill:"<<endl;
   cout<<"4-View all Products data :"<<endl;
   cout<<"5-Exit the program:"<<endl;

     product();
     }
     if (Choice!=1){
          system("cls");
              Menu();
              enter();
     }
     }




void product()
{


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
cout<<" Exiting the program        "<<endl<<endl;
           system("cls");
              Menu();
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
cout<<"                  *                    1-Login As Admin                                *             "<<endl;
cout<<"                  *                    2-Login As Employee                             *             "<<endl;
cout<<"                  *                    3-Login As User                                 *             "<<endl;
cout<<"                  *                    4-(Don't Have An Account)  Sign up              *             "<<endl;
cout<<"                  *                    5-Exiting the program                           *             "<<endl;
cout<<"                  **********************************************************************           "  <<endl;


}



bool Admin(){
  string correctUsername="CS_RECHNO";
string correctPassword="SaadCh12345";
string username,password;
cout<<"        Admin ID:";
cin>>username;
cout<<"            PASSWORD:";
cin>>password;
 if (username==correctUsername && password==correctPassword){
    cout<<"Login Successful";
    return true;
    } else { cout<<"Login unsuccessfull:"<<endl;
    return false;} 
}
bool Employee(){
  string correctUsername="CS_REC";
string correctPassword="SaadCh12";
string username,password;
cout<<"        Employee ID:";
cin>>username;
cout<<"            PASSWORD:";
cin>>password;
 if (username==correctUsername && password==correctPassword){
    cout<<"Login Successful";
    return true;
    } else { cout<<"Login unsuccessfull:"<<endl;
    return false;} 
}
bool User(){
  string correctUsername="SaadAkhtar143";
string correctPassword="SaadCh12345";
string username,password;
cout<<"        Sign Up : ";
cin>>username;
cout<<"        PASSWORD: ";
cin>>password;
 if (username==correctUsername && password==correctPassword){
    cout<<"Login Successful";
    return true;
    } else { cout<<"Login unsuccessfull:"<<endl;
    return false;} 
}
void User_ID(){


cout<<"                  **********************************************************************             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  *                 STORE MANAGEMENT SYSTEM                            *             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  *                    1-Product Management                            *             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
}
void Admin_ID(){


cout<<"                  **********************************************************************             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  *                 STORE MANAGEMENT SYSTEM                            *             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  *                    1-Inventory Management                          *             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
}
void Employee_ID(){
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  *                 STORE MANAGEMENT SYSTEM                            *             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
cout<<"                  *                    1-Sales Management                              *          "<<endl;
cout<<"                  *                    2-Basic Reporting                               *             "<<endl;
cout<<"                  **********************************************************************             "<<endl;
}
void Inventory(){
  Admin_ID();
   cout<<"Enter your Choice:";
       cin>>Choice;

        if (Choice=1){
          system("cls");
              Menu();
              enter();
     }
}