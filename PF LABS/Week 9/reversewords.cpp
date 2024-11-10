#include <iostream>
using namespace std;
main(){
    string words;
    cout<<"Enter a string:";
    cin>>words;
    string word=words;
    int idx=0;
    while(word[idx]!='\0'){
          idx=idx+1;
    }
    cout<<"Reversed String:";
    for (int id=idx; id>=0; id=id-1)
{
     cout<<word[id];
}

}