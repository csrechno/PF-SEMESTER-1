#include <iostream>
using namespace std;
float lowestPrice(int number,string period);
main(){
int number;
string period;
cout<<"Enter the number of kilometer:";
cin>>number;
cout<<"Enter the period of the day (day/night):";
cin>>period;
cout<<"Lowest price for "<<number<<" kilometer:"<<lowestPrice( number, period)<<"EUR";
}


float lowestPrice(int number,string period)
{
float lowestPrice;
float  result;
if (period=="day"&& (number>0 && number<20))
{
result=number*0.90;
return result;
} 
else
   if (period=="night" && (number>0 && number<20))
{      int total;
        total=number/0.90;
   return total;
}
else
if (number>20 && number<100)
{
result=number*0.09;
return result;
}
else
if (number>100)
{
result=number*0.06;
return result;
}
return lowestPrice;
}