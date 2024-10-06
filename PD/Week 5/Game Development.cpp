#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void Maze();
void PrintEnemy();
void moveEnemy();
void EraseEnemy();
void ErasePlayer();
void PrintPlayer();
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
int eX=2,eY=2;
int pX=20,pY=20;
main(){  


 system("cls");

         Maze();
         PrintEnemy();
          PrintPlayer();
while (true){
  if(GetAsyncKeyState(VK_LEFT)){

   movePlayerLeft();

}
 if(GetAsyncKeyState(VK_RIGHT)){

movePlayerRight();

}
if(GetAsyncKeyState(VK_UP)){

movePlayerUp();

}
if(GetAsyncKeyState(VK_DOWN)){

movePlayerDown();

}
 moveEnemy();
Sleep(200);
}




}


void movePlayerLeft(){

    ErasePlayer();
    pX=pX-1;
   PrintPlayer();
}
void movePlayerRight(){

    ErasePlayer();
    pX=pX+1;
   PrintPlayer();
}
void movePlayerUp(){

    ErasePlayer();
    pY=pY-1;
   PrintPlayer();
}


void movePlayerDown(){

    ErasePlayer();
    pY=pY+1;
   PrintPlayer();
}


void PrintPlayer()
{

gotoxy(pX,pY);
cout<<"          __________"<<endl;
gotoxy(pX,pY+1);
cout<<"        /           \\"<<endl;
gotoxy(pX,pY+2);
cout<<"       /             \\"<<endl;
gotoxy(pX,pY+3);
cout<<" _____|_______________|_____"<<endl;
gotoxy(pX,pY+4);
cout<<"|     _   _  _  _  _  _   _ |"<<endl;
gotoxy(pX,pY+5);
cout<<"'--(_)---(_)---(_)---(_)---(_)'"<<endl;



}

void ErasePlayer(){

gotoxy(pX,pY);
cout<<"                       "<<endl;
gotoxy(pX,pY+1);
cout<<"                        "<<endl;
gotoxy(pX,pY+2);
cout<<"                         "<<endl;
gotoxy(pX,pY+3);
cout<<"                             "<<endl;
gotoxy(pX,pY+4);
cout<<"                             "<<endl;
gotoxy(pX,pY+5);
cout<<"                               "<<endl;



}



void PrintEnemy()
{

gotoxy(eX,eY);
cout<<"          __________"<<endl;
gotoxy(eX,eY+1);
cout<<"        /           \\"<<endl;
gotoxy(eX,eY+2);
cout<<"       /             \\"<<endl;
gotoxy(eX,eY+3);
cout<<" _____|_______________|_____"<<endl;
gotoxy(eX,eY+4);
cout<<"|     _   _  _  _  _  _   _  |"<<endl;
gotoxy(eX,eY+5);
cout<<"'--(_)---(_)---(_)---(_)---(_)'"<<endl;



}
void EraseEnemy(){

gotoxy(eX,eY);
cout<<"                       "<<endl;
gotoxy(eX,eY+1);
cout<<"                        "<<endl;
gotoxy(eX,eY+2);
cout<<"                         "<<endl;
gotoxy(eX,eY+3);
cout<<"                             "<<endl;
gotoxy(eX,eY+4);
cout<<"                             "<<endl;
gotoxy(eX,eY+5);
cout<<"                               "<<endl;



}
void moveEnemy(){

EraseEnemy();
eX=eX+1;
if (eX==100){
eX=2;

}

PrintEnemy();

}


void Maze(){

cout<<" ########################################################################################################################################    "<<endl;
cout<<" #                                                                                                                                      #    "<<endl;
cout<<" #                                                                                                                                      #    "<<endl;
cout<<" #                                                                                                                                      #    "<<endl;
cout<<" #                                                                                                                                      #    "<<endl;
cout<<" #                                                                                                                                      #    "<<endl;
cout<<" #                                                                                                                                      #    "<<endl;
cout<<" #                                                                                                                                      #    "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" #                                                                                                                                      #     "<<endl;
cout<<" ########################################################################################################################################    "<<endl;







}

void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}








 