#include <iostream> 
using namespace std;
void reverse(string true_or_false);

main(){
string true_or_false;
cout<<"Enter 'true' or 'false:";
cin>>true_or_false;

reverse(true_or_false);

}

void reverse(string true_or_false )
{


if(true_or_false=="true"){


cout<<"false";

}
if(true_or_false=="false"){
cout<<"true";}


}