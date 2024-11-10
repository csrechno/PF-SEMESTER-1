#include <iostream>
using namespace std;
main(){
     string word;
    cout<<"Enter the arguement:";
    cin>>word;
    int idx=0;
    
  while(word[idx]!='\0'){
      
        idx=idx+1;
    }
    char vowels[5]={'a','e','i','o','u'};
    char x;
   for (int id=0; id<idx; id=id+1) 
   {
        for (int v = 0; v < 5; v++)
        {
            if (word[id]==vowels[v]) 
            {
                   x=' ';
            }
            else
            {
                 x=word[id];
            }
        }

    }
     cout<<x;
}