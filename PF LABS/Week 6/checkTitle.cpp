#include <iostream>
using namespace std;
string CheckTitle(char age, int gender );
main(){
char gender;
int age;
cout<<"Enter your age:";
cin>>age;
cout<<"Enter your gender(m/f):";
cin>>gender;
cout<<"Your personal title is:"<< CheckTitle(age, gender );
}

string CheckTitle(char age, int gender )
{

string result;
if (gender=='m' && age>=18 ){  
    result="Mr";
}
else
if (gender=='f' && age>=18 )
 {   
            result="Mrs";
}
if (gender=='m' && age<18 ){
    
    result="Master";
}
else
if (gender=='f' && age<18 )
 {
      
             result="Miss";
}

return result;
}