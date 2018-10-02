#include<iostream>
#include<fstream>
using namespace std;



int main()
{
    fstream inFile;
    fstream outFile;
    inFile.open("../ast1.c.001t.tu",ios::in);
    outFile.open("../result.txt",ios::out);
    string bufLine;
    string nextLine;

    getline( inFile,bufLine);//The firstLine


    while(!inFile.eof())
    {
       getline(inFile,nextLine);
       for(int i=0;i<nextLine.length();i++)
       {
           if(nextLine[i]=='\r')
               nextLine[i]=' ';
       }
       if(nextLine[0]=='@')
        {
            cout<<bufLine<<endl;
            outFile<<bufLine<<endl;
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