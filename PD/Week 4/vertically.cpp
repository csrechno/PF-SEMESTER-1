#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void print_H();
void print_A();
void print_S();
void print_N();
main(){
system("cls");
gotoxy(0,2);
print_H();
gotoxy(0,3);
print_A();

gotoxy(0,4);
print_A();

gotoxy(0,5);
print_S();

gotoxy(0,6);
print_S();

gotoxy(0,7);
print_A();

gotoxy(0,8);
print_N();
}
void print_H(){

cout<<"H"<<endl;

}

void print_A(){

cout<<"A";

}
void print_S(){

cout<<"S"<<endl;
}

void print_N(){
cout<<"N"<<endl;
}
void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}


