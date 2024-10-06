#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void Maze();
void palyer_move(int x,int y);
main(){  

int x=4,y=1;
 system("cls");
         Maze();
     while(true){
y=y+1; 
palyer_move(x,y);
if (y==8){

y=1;


}



}
}
void palyer_move(int x,int y){

gotoxy(x,y);
cout<<"P";
Sleep(600);
gotoxy(x,y);
cout<<"   ";





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








