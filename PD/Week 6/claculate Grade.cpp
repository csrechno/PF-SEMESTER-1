#include <iostream>
using namespace std;
string calculatepercentage(float marks1,float marks2,float marks3,float marks4,float marks5);
float percentage(float marks1,float marks2,float marks3,float marks4,float marks5);
main(){
string name;
float  marks1, marks2, marks3,marks4, marks5;
cout<<"Enter student name:";
cin>>name;
cout<<"Enter marks for English:";
cin>>marks1;
cout<<"Enter marks for Maths:";
cin>>marks2;
cout<<"Enter marks for Chemistry:";
cin>>marks3;
cout<<"Enter marks for biology:";
cin>>marks4;
cout<<"Enter marks for Social Science:";
cin>>marks5;

float result=percentage( marks1, marks2, marks3, marks4, marks5);
cout<<"Enter Student name:"<<name<<endl;
cout<<"Percentage:"<<result<<"%"<<endl;
 cout<<"Grade:"<<calculatepercentage( marks1, marks2, marks3,marks4, marks5);

}

float percentage(float marks1,float marks2,float marks3,float marks4,float marks5){
float total=500;
float obtainmarks= marks1+ marks2+ marks3+marks4+ marks5;
float percentage=(obtainmarks*100/total);
return percentage;
}
string calculatepercentage(float marks1,float marks2,float marks3,float marks4,float marks5){

float total=500;
float obtainmarks= marks1+ marks2+ marks3+marks4+ marks5;
float percentage=(obtainmarks*100/total);
string grade;
if (percentage>=90 && percentage<=100){
grade="A+";

}
else
if (percentage>=80 && percentage<=90){
grade="A";

}else
if (percentage>=70 && percentage<=80){
grade="B+";

}else
if (percentage>=60 && percentage<=70){
grade="B";

}else
if (percentage>=50 && percentage<=60){
grade="C";

}else
if (percentage>=40 && percentage<=50){
grade="D";

}else
if (percentage<40){
grade="F";

}

return grade;


}