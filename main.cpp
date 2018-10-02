#include<iostream>
#include<fstream>
using namespace std;



int main()
{
    fstream inFile;
    inFile.open("../ast1.c.001t.tu",ios::in);
    string bufLine;
    string nextLine;

    getline( inFile,bufLine);//The firstLine

    while(!inFile.eof())
    {
       getline(inFile,nextLine);
       if(nextLine[0]=='@')
        {
            cout<<bufLine<<endl;
            bufLine.clear();
            bufLine=nextLine;
        }
        else
        {
            bufLine=bufLine+" "+nextLine;
            nextLine.clear();
        }
    }

    inFile.close();
    return 0;
}