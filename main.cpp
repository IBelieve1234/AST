#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

void unionLine();
void regulateLine();
void selectAttribute();
void solveOP();
bool checkNoSpace(string str);


int main()
{
    //unionLine();
    //regulateLine();
    //solveOP();
    //selectAttribute();
    return 0;
}

void solveOP()
{
    fstream inFile;
    fstream outFile;
    inFile.open("../result2.txt",ios::in);
    outFile.open("../result3.txt",ios::out);
    string bufLine;
    while(!inFile.eof())
    {
        getline(inFile,bufLine);//Read a Line.
        for(int i=0;i<bufLine.length();i++)
        {
            if(bufLine[i]==':'&&bufLine[i-3]=='p')
            {
                if(bufLine[i-1]>='0'&&bufLine[i-1]<='2')
                    bufLine.erase(i-2,1);

            }
        }
        cout<<bufLine<<endl;
        outFile<<bufLine<<endl;
        bufLine.clear();
    }


    inFile.close();
    outFile.close();
    return;
}




bool checkNoSpace(string str) //check if there is a space between attribute and colon
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==':'&&str[i-1]==' ')
        {
            return false;
        }
    }
    return true;
}




void regulateLine()
{
    fstream inFile;
    fstream outFile;
    inFile.open("../result.txt",ios::in);
    outFile.open("../result2.txt",ios::out);
    string bufLine;
    while(!inFile.eof())
    {
        getline(inFile,bufLine);//Read a Line.
        while(checkNoSpace(bufLine)!= true)
        {
            for(int i=0;i<bufLine.length();i++)
            {
                if(bufLine[i]==':'&&bufLine[i-1]==' ')
                {
                    bufLine.erase(i-1,1);
                }
            }

        }
        cout<<bufLine<<endl;
        outFile<<bufLine<<endl;
        bufLine.clear();
    }


    inFile.close();
    outFile.close();
    return;
}

void selectAttribute()
{
    string attribute[1000];
    bool flag=true;
    int tag=0;
    fstream inFile;
    fstream outFile;
    inFile.open("../result3.txt",ios::in);
    outFile.open("../Attribute.txt",ios::out);
    string bufLine;

   while(!inFile.eof())
    {
         getline(inFile,bufLine);//Read a Line.
         istringstream is(bufLine);
        do
         {
            flag=true;
            string substr;
            is>>substr;
            if(substr[substr.length()-1]==':')
            {

                substr.erase( substr.length()-1);  //delete colon
                int k=0;
                while(!attribute[k].empty())
                {
                    if(attribute[k]== substr)
                    {
                        flag=false;
                    }
                    k++;

                }
                if(flag)
                {
                    attribute[tag]= substr;
                    cout << substr<<endl;
                    outFile<<substr<<endl;
                    tag++;
                }

            }

         } while(is);

    }





    inFile.close();
    outFile.close();
    return;
}











void unionLine()
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
        //delete \r;
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
    outFile.close();
    return;
}