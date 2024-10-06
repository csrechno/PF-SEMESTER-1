#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void Maze();
void palyer_move(int x,int y);
main(){  

int x=4,y=4;
 system("cls");
         Maze();
      palyer_move(x,y);

}
void palyer_move(int x,int y){

gotoxy(x,y);
cout<<"P";






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








