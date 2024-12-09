#include <iostream>
#include <fstream>
using namespace std;
int countCharacters(string lines);
main(){
    string lines="data.txt";
    cout<<"Total number of characters:"<<countCharacters(lines);
}

int countCharacters(string lines){
    
    fstream file;
    int count=0;
    string line;
    file.open(lines, ios:: in);
      while(!file.eof())
      {
          getline(file,line);
          
          int x=0;
           while(line[x]!='\0'){
               count=count+1;
               x=x+1;

           }
        
      }
      cout<<endl;
      
           file.close();
           return count;
}