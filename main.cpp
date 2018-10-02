#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream inFile;
    inFile.open("../ast1.c.001t.tu",ios::in);
    string bufLine;

    while(!inFile.eof())
    {
       getline( inFile,bufLine);
       cout<<bufLine<<endl;
    }

    inFile.close();
    return 0;
}