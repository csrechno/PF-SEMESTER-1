#include <iostream>
using namespace std;
string BoomOrSplash(string coordinates);
main(){
               string coordinates;
                cout<<"Enter Coordinates to fire torepedo(e.g: A1,B3,E5):";
                cin>>coordinates;
              string Result = BoomOrSplash(coordinates);
                cout<<"RESULT IS:"<<Result;
}
string BoomOrSplash(string coordinates){
    string res;
     string battleships[5][5]=
     {
        {"." , ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", " * ", ".", ".", "."},
        {".", "*", ".", ".", "."  },
        {".", ".", "*", "*", "." },
    } ;
       
       int x,y;
       x = coordinates[0]-'A';
       y=  coordinates[1]-'1';
       if (battleships[x][y]== "."){
        res="Splash:";
       } 
        if (battleships[x][y] == "*"){
        res= "Boom:" ;
       }
return res;
}