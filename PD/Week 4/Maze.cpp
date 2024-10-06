#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void Maze();
main(){   system("cls");
         Maze();


}

void Maze(){

cout<<" ######################    "<<endl;
cout<<" #                    #    "<<endl;
cout<<" #                    #    "<<endl;
cout<<" #                    #    "<<endl;
cout<<" #                    #    "<<endl;
cout<<" #                    #    "<<endl;
cout<<" #                    #    "<<endl;
cout<<" #                    #    "<<endl;
cout<<" #                    #    "<<endl;
cout<<" ######################    "<<endl;







}

void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}








