#include <iostream>
using namespace std;
string zodiacSign(int day,string month);
main(){
string month;
int day;
cout<<"Enter the day of month:";
cin>>day;
cout<<"Enter the month of birth(e.g., January,Feburary):";
cin>>month;
cout<< zodiacSign(day, month);
}

string zodiacSign(int day,string month)
{
string result;
if ((month=="march" && day>=21  ) || ( month=="april" && day<=19)){
result="Aries";
} else
if ((month=="april" && day>=20  ) || ( month=="may" && day<=20)){
result="Taurus";
}
if ((month=="may" && day>=21  ) || ( month=="june" && day<=20)){
result="Gemini";
}
if ((month=="june" && day>=21  ) || ( month=="july" && day<=22)){
result="Cancer";
}
if ((month=="july" && day>=21  ) || ( month=="august" && day<=19)){
result="LEO";
}
if ((month=="august" && day>=23  ) || ( month=="september" && day<=22)){
result="Virgo";
}
if ((month=="september" && day>=23  ) || ( month=="october" && day<=22)){
result="Libra";
}
if ((month=="october" && day>=23 ) || ( month=="november" && day<=21)){
result="Scorpio";
}
if ((month=="november" && day>=22 ) || ( month=="december" && day<=21)){
result="Sagittarius";
}
if ((month=="december" && day>=22  ) || ( month=="january" && day<=19)){
result="Capricorn";
}
if ((month=="january" && day>=20 ) || ( month=="feburary" && day<=18)){
result="Aquarius";
}
if ((month=="feburary" && day>=19  ) || ( month=="march" && day<=20)){
result="Pisces";
}


return result;

}