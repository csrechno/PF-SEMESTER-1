#include <iostream>
#include <windows.h>
#include <conio.h>
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
void PrintEnemy2();
void EraseEnemy2();
void moveEnemy2();
void PrintEnemy3();
void EraseEnemy3();
void moveEnemy3();
void printheader();
void enter();
int enemy1Direction=1;
int enemy2Direction=1;
int enemy3DirectionX=1;
int enemy3DirectionY=1;
int eX=2,eY=2;
int ex=2,ey=8;
int pX=40,pY=20;
int e1x=100,e1y=4;
main(){  
    system ("cls");  
      printheader();
      cout<<"Press any key to enter:";
getch();
        
         system("cls");
         Maze();
         PrintEnemy();
         PrintEnemy2();
         PrintEnemy3();
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


moveEnemy2();

moveEnemy3();

Sleep(100);
   
}
}
void movePlayerLeft(){

    ErasePlayer();
    pX=pX-1;
   PrintPlayer();
   if (pX==3||pX==pX+1){
movePlayerRight();
}

}
void movePlayerRight(){

    ErasePlayer();
    pX=pX+1;
   PrintPlayer();
if (pX==102||pX==pX-1){
movePlayerLeft();
}

}
void movePlayerUp(){
    ErasePlayer();
    pY=pY-1;
   PrintPlayer();
  if (pY==1 || pY==pY+1){
 movePlayerDown();
}
}


void movePlayerDown(){
    ErasePlayer();
    pY=pY+1;
   PrintPlayer();
  if (pY==26 || pY==pY-1){

 movePlayerUp();
}

}


void PrintPlayer()
{

gotoxy(pX,pY);
cout<<"     ___            "<<endl;
gotoxy(pX,pY+1);
cout<<"    ( o )          "<<endl;
gotoxy(pX,pY+2);
cout<<"   (o\\./o)       "<<endl;
gotoxy(pX,pY+3);
cout<<"     " "           "<<endl;




}

void ErasePlayer(){

gotoxy(pX,pY);
cout<<"                        "<<endl;
gotoxy(pX,pY+1);
cout<<"                        "<<endl;
gotoxy(pX,pY+2);
cout<<"                         "<<endl;
gotoxy(pX,pY+3);
cout<<"                         "<<endl;

}




void PrintEnemy()
{

gotoxy(eX,eY);
 cout << "  ______      " << endl;
gotoxy(eX,eY+1);
 cout << " /|_||_\\`.__   " << endl;
gotoxy(eX,eY+2);
 cout << "(   _    _ _\\   " << endl;
gotoxy(eX,eY+3);
  cout << " =`-(_)--(_)-'   " << endl;

}
void EraseEnemy(){

gotoxy(eX,eY);
cout<<"                       "<<endl;
gotoxy(eX,eY+1);
cout<<"                        "<<endl;
gotoxy(eX,eY+2);
cout<<"                          "<<endl;
gotoxy(eX,eY+3);
cout<<"                              "<<endl;

}
void moveEnemy(){
EraseEnemy();
eX=eX+enemy1Direction;
if(eX>=67){
 enemy1Direction=-1;
}
if (eX<=2){
  enemy1Direction=1;
}
PrintEnemy();
}
void PrintEnemy2()
{

gotoxy(ex,ey);
cout<<"          __________"<<endl;
gotoxy(ex,ey+1);
cout<<"        /           \\"<<endl;
gotoxy(ex,ey+2);
cout<<"       /             \\"<<endl;
gotoxy(ex,ey+3);
cout<<" _____|_______________|_____"<<endl;
gotoxy(ex,ey+4);
cout<<"|     _   _  _  _  _  _   _  |"<<endl;
gotoxy(ex,ey+5);
cout<<"'--(_)---(_)---(_)---(_)---(_)'"<<endl;



}
void EraseEnemy2(){

gotoxy(ex,ey);
cout<<"                           "<<endl;
gotoxy(ex,ey+1); 
cout<<"                             "<<endl;
gotoxy(ex,ey+2);
cout<<"                                 "<<endl;
gotoxy(ex,ey+3);
cout<<"                                  "<<endl;
gotoxy(ex,ey+4);
cout<<"                                 "<<endl;
gotoxy(ex,ey+5);
cout<<"                               "<<endl;



}
void moveEnemy2(){

   EraseEnemy2();
ey=ey+enemy2Direction;
if(ey>=26){
 enemy2Direction=-1;
}
if (ey<=6){
  enemy2Direction=1;
}
PrintEnemy2();
        
    
  
}
void PrintEnemy3()
{

gotoxy(e1x,e1y);
cout<<"                ______      "<<endl;
gotoxy(e1x,e1y+1);
cout<<"            __.`/_||_|\\    "<<endl;
gotoxy(e1x,e1y+2);
cout<<"           /_ _    _   )     "<<endl;
gotoxy(e1x,e1y+3);
cout<<"          '-(_)--(_)-`=      "<<endl;

}
void EraseEnemy3(){

gotoxy(e1x,e1y);
cout<<"                           "<<endl;
gotoxy(e1x,e1y+1); 
cout<<"                             "<<endl;
gotoxy(e1x,e1y+2);
cout<<"                                 "<<endl;
gotoxy(e1x,e1y+3);
cout<<"                                  "<<endl;
gotoxy(e1x,e1y+4);
cout<<"                                 "<<endl;
gotoxy(e1x,e1y+5);
cout<<"                               "<<endl;



}
void moveEnemy3(){

EraseEnemy3();
e1x=e1x+enemy3DirectionX;
e1y=e1y+enemy3DirectionY;
if(e1x>=100){
 enemy3DirectionX=-1;
 enemy3DirectionY=1;
}
if (e1x<=84){
  enemy3DirectionX=1;
  enemy3DirectionY=-1;
}

   PrintEnemy3();               
}



void printheader(){
     cout<<"    ______________ ___  ____ __________  ________  _________________________          "<<endl;    
     cout<<"      \\__    ___/   |  \\|    |   \\      \\ \\______ \\ \\_   _____/\\__  \\        "<<endl;   
     cout<<"         |    | /    ~   \\    |   /   |   \\ |    |  \\ |    __)_  |       _/        "<<endl; 
     cout<<"         |    | \\    Y    /   |  /    |    \\|    `   \\|   \\ \\ |    |   \\         "<<endl;
     cout<<"         |____|  \\___|_  /|______/\\____|__  /_______  /_______  / |____|_  /         "<<endl;
     cout<<"                       \\/                 \\/        \\/       \\/       \\/          "<<endl;
     cout<<"_______________________________  _________  ____  __.                   _________     _____ __________  "<<endl;
 cout<<"  /  _  \\__   ___/\\__   ___/  _  \\ \\_ ___ \\ |    |/ _|                \\_   ___\\   /  _  \\______  \\   "<<endl;
 cout<<" /  /_\\ \\|   |     |    | //_\\  \\/   \\  \\/ |      <                   /   \\ \\/  /  /_\\ \\|       _/    "<<endl;
 cout<<"/    |    \\   |     |    |/    |    \\     \\___|    |  \\                \\    \\____/    |   \\    |  \\      "<<endl;
 cout<<"\\___|__  /____|     |____|\\____|__  /\\______  /____|__ \\                 \\______ /\\ __|__  /____|_  /      "<<endl;
 cout<<"        \\/                         \\/        \\/        \\/                        \\/      \\/      \\/            "<<endl;
}



void Maze(){

cout<<" ########################################################################################################################################   "<<endl;
cout<<" #                                                                                                        #                             #    "<<endl;
cout<<" #                                                                                                        #                             #    "<<endl;
cout<<" #                                                                                                        #                             #    "<<endl;
cout<<" #                                                                                                        #                             #    "<<endl;
cout<<" #                                                                                                        #                             #    "<<endl;
cout<<" #                                                                                                        #                             #    "<<endl;
cout<<" #                                                                                                        #                             #    "<<endl;
cout<<" #                                                                                                        #                             #     "<<endl;
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






 