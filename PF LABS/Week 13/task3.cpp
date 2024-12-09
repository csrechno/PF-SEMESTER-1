#include<iostream>
#include<fstream>
using namespace std;
int countCharacters(string x);
main()
{
    int count=countCharacters("charac.txt");
    cout<<"Frequency is :"<<count;
}
int countCharacters(string x)
{
    int count=0;
    char character;
    string poem;
    fstream myFile;
    myFile.open(x,ios::in);
    myFile >> character;
    while(!myFile.eof())
    {
        getline(myFile,poem);
        for (int i = 0; i < poem.length() ; i++)
        {
          if(poem[i]==character || poem[i]==character-32)
          {
            count++;
          }
        }
    }
    myFile.close();

    return count;

}