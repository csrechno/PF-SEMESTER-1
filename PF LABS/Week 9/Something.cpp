#include <iostream>
using namespace std;
main(){
    string letter;
    cout<<"Enter the arguement:";
    cin>>letter;
    string word=letter;
    int idx=0;
    cout<<"Something ";
  while(word[idx]!='\0'){
         cout<<word[idx];
        idx=idx+1;
    }
    
}