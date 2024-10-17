#include <iostream>

using namespace std;
void Print_Menu();
void exiting_program();
void Calculate_Aggregate();
void CompareMarks();
float calculate_aggregate;
string nameStd1,nameStd2;
int ecatMarksStd1,ecatMarksStd2;

main(){
     
   while(true){
system("cls");
    Print_Menu();

    

       string choice;
      cout<<"Enter your choice:";
     cin>>choice; 
      
     if(choice=="1"){ 
string name;
float  matricMarks,interMarks,ecatMarks;
   cout<<" Enter your name:";
   cin>>name;

    cout<<" Enter your matric marks :";
    cin>>matricMarks;
    cout<< "Enter your  inter marks :";
    cin>>interMarks;

    cout<<" Enter your ecat marks:";
    cin>>ecatMarks;

    float totalMarks=1100;
float totalInterMarks=550;
float totalEcatMarks=400;
    
    
    float calculateMarks = matricMarks*30/ totalMarks;
     float calculateInter=interMarks*30/totalInterMarks;
     float calculateEcat=ecatMarks*40/totalEcatMarks;
   
   calculate_aggregate=calculateMarks+calculateInter+calculateEcat;

     
  
          Calculate_Aggregate();
int enter;
cout<<"Enter to continue: ";
cin>>enter;


}

          




if(choice=="2"){

cout<<"Enter nameStd1:"; 
cin>>nameStd1;
cout<<"Enter nameStd2:";
cin>>nameStd2;
cout<<"Enter ecatMarksStd1:";
cin>>ecatMarksStd1;
cout<<"Enter ecatMarksStd2:";
cin>>ecatMarksStd2;

    
   
   
    CompareMarks();

int enter;
cout<<"Enter to continue: ";
cin>>enter;


}
      


if(choice=="3"){


exiting_program();

int enter;
cout<<"Enter to continue: ";
cin>>enter;


}
}
}
void exiting_program(){


cout<<"Exiting the program"<<endl;



}

void CompareMarks(){




if(ecatMarksStd1>ecatMarksStd2){

cout<<nameStd1<<" has greatest marks"<<endl;

}


if(ecatMarksStd2>ecatMarksStd1){

cout<<nameStd2<<"has greatest marks"<<endl;
}

if(ecatMarksStd2==ecatMarksStd1){

cout<<"Both has same marks"<<endl;


}










}

void Calculate_Aggregate(){

    cout<<"Aggregate is:"<<calculate_aggregate<<endl;

}


void Print_Menu(){


cout<<"                                        ==================================                "<<endl;
cout<<"                                          WELCOME TO UNIVERSITY ADMISSION                 "<<endl;
cout<<"                                               MANAGEMENT SYSTEM                          "<<endl;
cout<<"                                        ==================================                "<<endl;
cout<<"                                          1-Calculate aggregate                           "<<endl;
cout<<"                                          2-Compare marks                                 "<<endl;
cout<<"                                          3-Exit                                          "<<endl;
cout<<"                                        ==================================                "<<endl;

}

