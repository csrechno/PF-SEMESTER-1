#include <iostream>
using namespace std;
void checkAlphabetCase( char alphabet);
main(){
char alphabet;
cout<<"Enter a Character (A or a):";
cin>>alphabet;

checkAlphabetCase(alphabet);

} 

 void checkAlphabetCase(char alphabet){
 
if(alphabet=='A')
{
  cout<<"You have entered Capital "<<alphabet;
} 
if (alphabet=='a'){


cout<<"You have entered Small "<<alphabet;


}

}


