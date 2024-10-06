#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void print_A();
void print_nameS();
void print_D();
main(){

system("cls");
gotoxy(65,20);
 print_nameS();
   print_A();
   print_A();
   print_D();

}
void print_nameS()
{
cout<<"S";

}
void print_A(){

cout<<"A";

}

void print_D(){


cout<<"D";

}

void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}



