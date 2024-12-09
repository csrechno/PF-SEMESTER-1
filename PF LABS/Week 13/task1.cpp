#include<iostream>
#include<fstream>
using namespace std;
int countLines(string x);
main()
{
    int count=countLines("data.txt");
    cout<<"LINES ARE :"<<count;
}
int countLines(string x)
{
    int count=0;
    string poem;
    fstream myFile;
    myFile.open(x,ios::in);
    while(!myFile.eof())
    {
        getline(myFile,poem);
        count++;
    }
    myFile.close();

    return count;

}