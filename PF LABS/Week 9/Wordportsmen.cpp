#include <iostream>
using namespace std;
main(){
    string words;
    cout<<"Enter a Word:";
    cin>>words;
    string word=words;
      int idx=0;
    while( word[idx]!='\0' ){
       cout<<word[idx]<<" found at poisition "; 
        cout<<idx<<endl;    
       idx=idx+1;
       
    }    
}