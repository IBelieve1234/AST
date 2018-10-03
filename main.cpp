#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;


bool IAmAttributeAndINeedingValue= false;
bool IAmValue=false;
string PrepareedAttribute;
string PrepareedValue;




void unionLine();
void regulateLine();
void selectAttribute();
void solveOP();
void solveSTRG();
bool checkNoSpace(string str);
void GenerateStructArray();
void AlineToAStruct(string str,int SequenceNum);
void ShowAStruct(int SequenceNum);
void HavingAttributeLookingForValue(string attribute);
void AttributeAndValueAreReady(int SequenceNum);



int main()
{
    //unionLine();
    //regulateLine();
    //solveOP();
    solveSTRG();
    //selectAttribute();
    //GenerateStructArray();

    return 0;
}


struct StructNode
{


    bool NotNull;
    string NodeName;
    string NodeSequenceNUm;




    string name;
    string type;
    string chan;
    //
    string strg;
    //
    int lngt;
    string size;
    int algn;
    int prec;
    string sign;
    string min;
    string max;
    int low;
    int high;
    string unql;
    string ptd;
    string mngl;
    //
    string srcp;
    //
    string body;
    string link;
    string retn;
    string prms;
    string valu;
    string qual;
    string tag;
    string flds;
    string args;
    string scpe;
    string bpos;
    string argt;
    int used;
    string expr;
    string elts;
    string op0;
    string op1;
    string note;
    string op2;
    string fn;
    string vars;
    string labl;
    string domn;
    string refd;
}structArray[5000];







void solveSTRG()
{
    fstream inFile;
    fstream outFile;
    inFile.open("../result3.txt",ios::in);
    outFile.open("../result4.txt",ios::out);
    string bufLine;
    while(!inFile.eof())
    {
        getline(inFile,bufLine);//Read a Line.
        string newstr;
        string substr;
        bool strgFlag=false;
        bool readyFlag=false;
        istringstream is(bufLine);
        is>>substr;
        newstr=substr;
        while(is)
        {
            is>>substr;
            if(!strgFlag)
            {
                if(substr=="strg:")
                {
                    strgFlag=true;
                    newstr=newstr+" "+substr;
                }
                else
                {
                    newstr=newstr+" "+substr;
                }

            }
            else
            {

                if(substr=="long"||substr=="short"||substr=="complex"||substr=="signed"||substr=="unsigned")
                {

                    if(readyFlag)
                    {
                        newstr=newstr+substr;
                    }
                    else
                    {
                        newstr=newstr+" "+substr;
                    }

                    readyFlag=true;

                }
                else
                {
                    if(readyFlag)
                    {
                        newstr=newstr+substr;
                    }
                    else
                    {
                        newstr=newstr+" "+substr;
                    }
                    readyFlag=false;
                    strgFlag=false;
                }
            }

            substr.clear();

        }

        cout<<newstr<<endl;
        outFile<<newstr<<endl;

    }


    inFile.close();
    outFile.close();
    return;
}




void AlineToAStruct(string str,int SequenceNum)
{


    istringstream is(str);
    string substr;
    //get node sequenceNUm
    is>>substr;
    structArray[SequenceNum].NodeSequenceNUm=substr;
    substr.clear();
    //get node name
    is>>substr;
    structArray[SequenceNum].NodeName=substr;
    substr.clear();

    //notNULL
    structArray[SequenceNum].NotNull=true;

    //get all kinds of attributes
    do
    {
        is>>substr;
        if(substr[substr.length()-1]==':')
        {
            substr.erase( substr.length()-1);  //delete colon
            IAmAttributeAndINeedingValue=true;
            HavingAttributeLookingForValue(substr);
        }
        else if(IAmAttributeAndINeedingValue&&(!IAmValue))//This str is a value
        {
            IAmValue=true;
            PrepareedValue=substr;
            AttributeAndValueAreReady(SequenceNum);
        }
    } while(is);


    return;
}



void AttributeAndValueAreReady(int SequenceNum)
{
    string PreparedStringValue=PrepareedValue;
    int PreparedIntValue;
    istringstream istr(PrepareedValue);
    istr>>PreparedIntValue;

    if(IAmValue&&IAmAttributeAndINeedingValue)
    {
        if(PrepareedAttribute=="name")
        {
            structArray[SequenceNum].name=PreparedStringValue;
        }
        if(PrepareedAttribute=="type")
        {
            structArray[SequenceNum].type=PreparedStringValue;
        }
        if(PrepareedAttribute=="chan")
        {
            structArray[SequenceNum].chan=PreparedStringValue;
        }
        if(PrepareedAttribute=="strg")
        {
            structArray[SequenceNum].strg=PreparedStringValue;
        }
        if(PrepareedAttribute=="size")
        {
            structArray[SequenceNum].size=PreparedStringValue;
        }
        if(PrepareedAttribute=="sign")
        {
            structArray[SequenceNum].sign=PreparedStringValue;
        }
        if(PrepareedAttribute=="min")
        {
            structArray[SequenceNum].min=PreparedStringValue;
        }
        if(PrepareedAttribute=="max")
        {
            structArray[SequenceNum].max=PreparedStringValue;
        }
        if(PrepareedAttribute=="unql")
        {
            structArray[SequenceNum].unql=PreparedStringValue;
        }
        if(PrepareedAttribute=="ptd")
        {
            structArray[SequenceNum].ptd=PreparedStringValue;
        }
        if(PrepareedAttribute=="mngl")
        {
            structArray[SequenceNum].mngl=PreparedStringValue;
        }
        if(PrepareedAttribute=="srcp")
        {
            structArray[SequenceNum].srcp=PreparedStringValue;
        }
        if(PrepareedAttribute=="body")
        {
            structArray[SequenceNum].body=PreparedStringValue;
        }
        if(PrepareedAttribute=="link")
        {
            structArray[SequenceNum].link=PreparedStringValue;
        }
        if(PrepareedAttribute=="retn")
        {
            structArray[SequenceNum].retn=PreparedStringValue;
        }
        if(PrepareedAttribute=="prms")
        {
            structArray[SequenceNum].prms=PreparedStringValue;
        }
        if(PrepareedAttribute=="valu")
        {
            structArray[SequenceNum].valu=PreparedStringValue;
        }
        if(PrepareedAttribute=="qual")
        {
            structArray[SequenceNum].qual=PreparedStringValue;
        }
        if(PrepareedAttribute=="tag")
        {
            structArray[SequenceNum].tag=PreparedStringValue;
        }
        if(PrepareedAttribute=="flds")
        {
            structArray[SequenceNum].flds=PreparedStringValue;
        }
        if(PrepareedAttribute=="args")
        {
            structArray[SequenceNum].args=PreparedStringValue;
        }
        if(PrepareedAttribute=="scpe")
        {
            structArray[SequenceNum].scpe=PreparedStringValue;
        }
        if(PrepareedAttribute=="bpos")
        {
            structArray[SequenceNum].bpos=PreparedStringValue;
        }
        if(PrepareedAttribute=="argt")
        {
            structArray[SequenceNum].argt=PreparedStringValue;
        }
        if(PrepareedAttribute=="expr")
        {
            structArray[SequenceNum].expr=PreparedStringValue;
        }
        if(PrepareedAttribute=="elts")
        {
            structArray[SequenceNum].elts=PreparedStringValue;
        }
        if(PrepareedAttribute=="op0")
        {
            structArray[SequenceNum].op0=PreparedStringValue;
        }
        if(PrepareedAttribute=="op1")
        {
            structArray[SequenceNum].op1=PreparedStringValue;
        }
        if(PrepareedAttribute=="note")
        {
            structArray[SequenceNum].note=PreparedStringValue;
        }
        if(PrepareedAttribute=="op2")
        {
            structArray[SequenceNum].op2=PreparedStringValue;
        }
        if(PrepareedAttribute=="fn")
        {
            structArray[SequenceNum].fn=PreparedStringValue;
        }
        if(PrepareedAttribute=="vars")
        {
            structArray[SequenceNum].vars=PreparedStringValue;
        }
        if(PrepareedAttribute=="labl")
        {
            structArray[SequenceNum].labl=PreparedStringValue;
        }
        if(PrepareedAttribute=="domn")
        {
            structArray[SequenceNum].domn=PreparedStringValue;
        }
        if(PrepareedAttribute=="refd")
        {
            structArray[SequenceNum].refd=PreparedStringValue;
        }
        if(PrepareedAttribute=="lngt")
        {
            structArray[SequenceNum].lngt=PreparedIntValue;
        }
        if(PrepareedAttribute=="algn")
        {
            structArray[SequenceNum].algn=PreparedIntValue;
        }
        if(PrepareedAttribute=="prec")
        {
            structArray[SequenceNum].prec=PreparedIntValue;
        }
        if(PrepareedAttribute=="low")
        {
            structArray[SequenceNum].low=PreparedIntValue;
        }
        if(PrepareedAttribute=="high")
        {
            structArray[SequenceNum].high=PreparedIntValue;
        }
        if(PrepareedAttribute=="used")
        {
            structArray[SequenceNum].used=PreparedIntValue;
        }
    }
    else
    {
        cout<<"Wrong! Can not find the attribute."<<endl;
    }


    //add one attribute successfully and set flag as initial value
    IAmAttributeAndINeedingValue= false;
    IAmValue=false;

}



void HavingAttributeLookingForValue(string attribute)
{
    if(IAmAttributeAndINeedingValue)
    {
        PrepareedAttribute=attribute;
    }
}




void ShowAStruct(int SequenceNum)
{
    if(structArray[SequenceNum].NotNull)
    {

        cout<<"NodeSequenceNUm:"<<structArray[SequenceNum].NodeSequenceNUm<<"  ";
        cout<<"NodeName:"<<structArray[SequenceNum].NodeName<<"  ";



        if(structArray[SequenceNum].name!="")
        {
            cout<<"name:"<<structArray[SequenceNum].name<<"  ";
        }
        if(structArray[SequenceNum].type!="")
        {
            cout<<"type:"<<structArray[SequenceNum].type<<"  ";
        }
        if(structArray[SequenceNum].chan!="")
        {
            cout<<"chan:"<<structArray[SequenceNum].chan<<"  ";
        }
        if(structArray[SequenceNum].strg!="")
        {
            cout<<"strg:"<<structArray[SequenceNum].strg<<"  ";
        }
        if(structArray[SequenceNum].size!="")
        {
            cout<<"size:"<<structArray[SequenceNum].size<<"  ";
        }
        if(structArray[SequenceNum].sign!="")
        {
            cout<<"sign:"<<structArray[SequenceNum].sign<<"  ";
        }
        if(structArray[SequenceNum].min!="")
        {
            cout<<"min:"<<structArray[SequenceNum].min<<"  ";
        }
        if(structArray[SequenceNum].max!="")
        {
            cout<<"max:"<<structArray[SequenceNum].max<<"  ";
        }
        if(structArray[SequenceNum].unql!="")
        {
            cout<<"unql:"<<structArray[SequenceNum].unql<<"  ";
        }
        if(structArray[SequenceNum].ptd!="")
        {
            cout<<"ptd:"<<structArray[SequenceNum].ptd<<"  ";
        }
        if(structArray[SequenceNum].mngl!="")
        {
            cout<<"mngl:"<<structArray[SequenceNum].mngl<<"  ";
        }
        if(structArray[SequenceNum].srcp!="")
        {
            cout<<"srcp:"<<structArray[SequenceNum].srcp<<"  ";
        }
        if(structArray[SequenceNum].body!="")
        {
            cout<<"body:"<<structArray[SequenceNum].body<<"  ";
        }
        if(structArray[SequenceNum].link!="")
        {
            cout<<"link:"<<structArray[SequenceNum].link<<"  ";
        }
        if(structArray[SequenceNum].retn!="")
        {
            cout<<"retn:"<<structArray[SequenceNum].retn<<"  ";
        }
        if(structArray[SequenceNum].prms!="")
        {
            cout<<"prms:"<<structArray[SequenceNum].prms<<"  ";
        }
        if(structArray[SequenceNum].valu!="")
        {
            cout<<"valu:"<<structArray[SequenceNum].valu<<"  ";
        }
        if(structArray[SequenceNum].qual!="")
        {
            cout<<"qual:"<<structArray[SequenceNum].qual<<"  ";
        }
        if(structArray[SequenceNum].tag!="")
        {
            cout<<"tag:"<<structArray[SequenceNum].tag<<"  ";
        }
        if(structArray[SequenceNum].flds!="")
        {
            cout<<"flds:"<<structArray[SequenceNum].flds<<"  ";
        }
        if(structArray[SequenceNum].args!="")
        {
            cout<<"args:"<<structArray[SequenceNum].args<<"  ";
        }
        if(structArray[SequenceNum].scpe!="")
        {
            cout<<"scpe:"<<structArray[SequenceNum].scpe<<"  ";
        }
        if(structArray[SequenceNum].bpos!="")
        {
            cout<<"bpos:"<<structArray[SequenceNum].bpos<<"  ";
        }
        if(structArray[SequenceNum].argt!="")
        {
            cout<<"argt:"<<structArray[SequenceNum].argt<<"  ";
        }
        if(structArray[SequenceNum].expr!="")
        {
            cout<<"expr:"<<structArray[SequenceNum].expr<<"  ";
        }
        if(structArray[SequenceNum].elts!="")
        {
            cout<<"elts:"<<structArray[SequenceNum].elts<<"  ";
        }
        if(structArray[SequenceNum].op0!="")
        {
            cout<<"op0:"<<structArray[SequenceNum].op0<<"  ";
        }
        if(structArray[SequenceNum].op1!="")
        {
            cout<<"op1:"<<structArray[SequenceNum].op1<<"  ";
        }
        if(structArray[SequenceNum].note!="")
        {
            cout<<"note:"<<structArray[SequenceNum].note<<"  ";
        }
        if(structArray[SequenceNum].op2!="")
        {
            cout<<"op2:"<<structArray[SequenceNum].op2<<"  ";
        }
        if(structArray[SequenceNum].fn!="")
        {
            cout<<"fn:"<<structArray[SequenceNum].fn<<"  ";
        }
        if(structArray[SequenceNum].vars!="")
        {
            cout<<"vars:"<<structArray[SequenceNum].vars<<"  ";
        }
        if(structArray[SequenceNum].labl!="")
        {
            cout<<"labl:"<<structArray[SequenceNum].labl<<"  ";
        }
        if(structArray[SequenceNum].domn!="")
        {
            cout<<"domn:"<<structArray[SequenceNum].domn<<"  ";
        }
        if(structArray[SequenceNum].refd!="")
        {
            cout<<"refd:"<<structArray[SequenceNum].refd<<"  ";
        }
        if(structArray[SequenceNum].lngt!=0)
        {
            cout<<"lngt:"<<structArray[SequenceNum].lngt<<"  ";
        }
        if(structArray[SequenceNum].algn!=0)
        {
            cout<<"algn:"<<structArray[SequenceNum].algn<<"  ";
        }
        if(structArray[SequenceNum].prec!=0)
        {
            cout<<"prec:"<<structArray[SequenceNum].prec<<"  ";
        }
        if(structArray[SequenceNum].low!=0)
        {
            cout<<"low:"<<structArray[SequenceNum].low<<"  ";
        }
        if(structArray[SequenceNum].high!=0)
        {
            cout<<"high:"<<structArray[SequenceNum].high<<"  ";
        }
        if(structArray[SequenceNum].used!=0)
        {
            cout<<"used:"<<structArray[SequenceNum].used<<"  ";
        }


    } else
    {
        cout<<"Sorry No."<<SequenceNum<<" record is null"<<endl;
    }

    cout<<endl;
}





void GenerateStructArray()
{
    fstream inFile;
    inFile.open("../result3.txt",ios::in);
    string bufLine;
    int SequenceNum=0;
    while(!inFile.eof())
    {
        getline(inFile,bufLine);//Read a Line.
        AlineToAStruct(bufLine,SequenceNum);
        ShowAStruct(SequenceNum);
        SequenceNum++;
        bufLine.clear();
    }
    inFile.close();
    return;
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