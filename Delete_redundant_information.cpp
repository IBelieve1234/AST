//
// Created by root on 18-10-7.
//
#include"Delete_redundant_information.h"
extern Node structArray[5000];
void visit_Useful_Node(int i){
    string temp;
    if(structArray[i].ifuseful==true&&structArray[i].ifvisited==false){
        structArray[i].ifvisited=true;//置为已访问

        //name
        if(structArray[i].name.find("@")!=string::npos){
            temp=structArray[i].name;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //type
        if(structArray[i].type.find("@")!=string::npos){
            temp=structArray[i].type;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //chan
        if(structArray[i].chan.find("@")!=string::npos){
            temp=structArray[i].chan;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //strg
        if(structArray[i].strg.find("@")!=string::npos){
            temp=structArray[i].strg;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //size
        if(structArray[i].size.find("@")!=string::npos){
            temp=structArray[i].size;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //sign
        if(structArray[i].sign.find("@")!=string::npos){
            temp=structArray[i].sign;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //min
        if(structArray[i].min.find("@")!=string::npos){
            temp=structArray[i].min;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //max
        if(structArray[i].max.find("@")!=string::npos){
            temp=structArray[i].max;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //unql
        if(structArray[i].unql.find("@")!=string::npos){
            temp=structArray[i].unql;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //ptd
        if(structArray[i].ptd.find("@")!=string::npos){
            temp=structArray[i].ptd;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //mngl
        if(structArray[i].mngl.find("@")!=string::npos){
            temp=structArray[i].mngl;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //srcp
        if(structArray[i].srcp.find("@")!=string::npos){
            temp=structArray[i].srcp;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //body
        if(structArray[i].body.find("@")!=string::npos){
            temp=structArray[i].body;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //link
        if(structArray[i].link.find("@")!=string::npos){
            temp=structArray[i].link;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //retn
        if(structArray[i].retn.find("@")!=string::npos){
            temp=structArray[i].retn;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //prms
        if(structArray[i].prms.find("@")!=string::npos){
            temp=structArray[i].prms;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //valu
        if(structArray[i].valu.find("@")!=string::npos){
            temp=structArray[i].valu;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //qual
        if(structArray[i].qual.find("@")!=string::npos){
            temp=structArray[i].qual;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //tag
        if(structArray[i].tag.find("@")!=string::npos){
            temp=structArray[i].tag;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //flds
        if(structArray[i].flds.find("@")!=string::npos){
            temp=structArray[i].flds;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //args
        if(structArray[i].args.find("@")!=string::npos){
            temp=structArray[i].args;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //scpe
        if(structArray[i].scpe.find("@")!=string::npos){
            temp=structArray[i].scpe;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //bpos
        if(structArray[i].bpos.find("@")!=string::npos){
            temp=structArray[i].bpos;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //argt
        if(structArray[i].argt.find("@")!=string::npos){
            temp=structArray[i].argt;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //expr
        if(structArray[i].expr.find("@")!=string::npos){
            temp=structArray[i].expr;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //elts
        if(structArray[i].elts.find("@")!=string::npos){
            temp=structArray[i].elts;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //op0
        if(structArray[i].op0.find("@")!=string::npos){
            temp=structArray[i].op0;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //op1
        if(structArray[i].op1.find("@")!=string::npos){
            temp=structArray[i].op1;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //note
        if(structArray[i].note.find("@")!=string::npos){
            temp=structArray[i].note;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //op2
        if(structArray[i].op2.find("@")!=string::npos){
            temp=structArray[i].op2;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //fn
        if(structArray[i].fn.find("@")!=string::npos){
            temp=structArray[i].fn;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //vars
        if(structArray[i].vars.find("@")!=string::npos){
            temp=structArray[i].vars;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //labl
        if(structArray[i].labl.find("@")!=string::npos){
            temp=structArray[i].labl;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //domn
        if(structArray[i].domn.find("@")!=string::npos){
            temp=structArray[i].domn;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //refd
        if(structArray[i].refd.find("@")!=string::npos){
            temp=structArray[i].refd;
            temp.erase(0,1);
            structArray[atoi(temp.c_str())].ifuseful=true;
            visit_Useful_Node(atoi(temp.c_str()));//对子节点第归
        }
        //structArray[i].ifvisited=true;//置为已访问
    }

}
void Delete_redundant_information(string file_position){
    GetInformation();
    fstream inFile;
    inFile.open(file_position,ios::in);
    string bufLine;
    int count=0;
    do
    {
        getline(inFile,bufLine);//Read a Line.
        count++;
        //cout<<count<<" "<<bufLine<<endl;
        //cout<<"hello2";
        bufLine.clear();
        getline(inFile,bufLine);
        if(!bufLine.empty())
        {count++;
            //cout<<count<<" "<<bufLine<<endl;
        }
    }while(!bufLine.empty());
    //cout<<"hello1!";
    inFile.close();

    //ppt page 35 (3)  读信息到结构体+初始化访问标记
    fstream inFile1;
    inFile1.open(file_position,ios::in);
    for(int i=1;i<=count;i++)
    {
        string str;
        getline(inFile1,str);//read to str
        vector<string>arr;
        istringstream ss(str);
        string word;
        while(ss>>word){
            arr.push_back(word);
        }
        structArray[i].srcp="";
        structArray[i].NodeName="";
        structArray[i].NodeSequenceNUm="";
        structArray[i].args="";
        structArray[i].argt="";
        structArray[i].body="";
        structArray[i].bpos="";
        structArray[i].chan="";
        structArray[i].domn="";
        structArray[i].elts="";
        structArray[i].expr="";
        structArray[i].flds="";
        structArray[i].fn="";
        structArray[i].labl="";
        structArray[i].link="";
        structArray[i].max="";
        structArray[i].min="";
        structArray[i].mngl="";
        structArray[i].name="";
        structArray[i].note="";
        structArray[i].op0="";
        structArray[i].op1="";
        structArray[i].op2="";
        structArray[i].prms="";
        structArray[i].ptd="";
        structArray[i].qual="";
        structArray[i].refd="";
        structArray[i].retn="";
        structArray[i].scpe="";
        structArray[i].sign="";
        structArray[i].size="";
        structArray[i].strg="";
        structArray[i].tag="";
        structArray[i].type="";
        structArray[i].unql="";
        structArray[i].valu="";
        structArray[i].vars="";
        structArray[i].algn=0;
        structArray[i].high=0;
        structArray[i].lngt=0;
        structArray[i].low=0;
        structArray[i].prec=0;
        structArray[i].used=0;
        structArray[i].ifuseful=false;
        structArray[i].ifvisited=false;
        structArray[i].NodeSequenceNUm=arr[0];
        structArray[i].NodeName=arr[1];
        for(size_t j=2;j<arr.size();j++){
            if(arr[j]=="name:")
            {   j++;
                structArray[i].name=arr[j];
            }
            if(arr[j]=="type:")
            {   j++;
                structArray[i].type=arr[j];
            }
            if(arr[j]=="chan:")
            {   j++;
                structArray[i].chan=arr[j];
            }
            if(arr[j]=="strg:")
            {   j++;
                structArray[i].strg=arr[j];
            }
            if(arr[j]=="size:")
            {   j++;
                structArray[i].size=arr[j];
            }
            if(arr[j]=="sign:")
            {   j++;
                structArray[i].sign=arr[j];
            }
            if(arr[j]=="min:")
            {   j++;
                structArray[i].min=arr[j];
            }
            if(arr[j]=="max:")
            {   j++;
                structArray[i].max=arr[j];
            }
            if(arr[j]=="unql:")
            {   j++;
                structArray[i].unql=arr[j];
            }
            if(arr[j]=="ptd:")
            {   j++;
                structArray[i].ptd=arr[j];
            }
            if(arr[j]=="mngl:")
            {   j++;
                structArray[i].mngl=arr[j];
            }
            if(arr[j]=="srcp:")
            {   j++;
                structArray[i].srcp=arr[j];
            }
            if(arr[j]=="body:")
            {   j++;
                structArray[i].body=arr[j];
            }
            if(arr[j]=="link:")
            {   j++;
                structArray[i].link=arr[j];
            }
            if(arr[j]=="retn:")
            {   j++;
                structArray[i].retn=arr[j];
            }
            if(arr[j]=="prms:")
            {   j++;
                structArray[i].prms=arr[j];
            }
            if(arr[j]=="valu:")
            {   j++;
                structArray[i].valu=arr[j];
            }
            if(arr[j]=="qual:")
            {   j++;
                structArray[i].qual=arr[j];
            }
            if(arr[j]=="tag:")
            {   j++;
                structArray[i].tag=arr[j];
            }
            if(arr[j]=="flds:")
            {   j++;
                structArray[i].flds=arr[j];
            }
            if(arr[j]=="args:")
            {   j++;
                structArray[i].args=arr[j];
            }
            if(arr[j]=="scpe:")
            {   j++;
                structArray[i].scpe=arr[j];
            }
            if(arr[j]=="bpos:")
            {   j++;
                structArray[i].bpos=arr[j];
            }
            if(arr[j]=="argt:")
            {   j++;
                structArray[i].argt=arr[j];
            }
            if(arr[j]=="expr:")
            {   j++;
                structArray[i].expr=arr[j];
            }
            if(arr[j]=="elts:")
            {   j++;
                structArray[i].elts=arr[j];
            }
            if(arr[j]=="op0:")
            {   j++;
                structArray[i].op0=arr[j];
            }
            if(arr[j]=="op1:")
            {   j++;
                structArray[i].op1=arr[j];
            }
            if(arr[j]=="note:")
            {   j++;
                structArray[i].note=arr[j];
            }
            if(arr[j]=="op2:")
            {   j++;
                structArray[i].op2=arr[j];
            }
            if(arr[j]=="fn:")
            {   j++;
                structArray[i].fn=arr[j];
            }
            if(arr[j]=="vars:")
            {   j++;
                structArray[i].vars=arr[j];
            }
            if(arr[j]=="labl:")
            {   j++;
                structArray[i].labl=arr[j];
            }
            if(arr[j]=="domn:")
            {   j++;
                structArray[i].domn=arr[j];
            }
            if(arr[j]=="refd:")
            {   j++;
                structArray[i].refd=arr[j];
            }
            ///////////////////////////////
            if(arr[j]=="lngt:")
            {   j++;
                structArray[i].lngt=atoi(arr[j].c_str());
            }
            if(arr[j]=="algn:")
            {   j++;
                structArray[i].algn=atoi(arr[j].c_str());
            }
            if(arr[j]=="prec:")
            {   j++;
                structArray[i].prec=atoi(arr[j].c_str());
            }
            if(arr[j]=="low:")
            {   j++;
                structArray[i].low=atoi(arr[j].c_str());
            }
            if(arr[j]=="high:")
            {   j++;
                structArray[i].high=atoi(arr[j].c_str());
            }
            if(arr[j]=="used:")
            {   j++;
                structArray[i].used=atoi(arr[j].c_str());
            }
        }
    }//已读取信息到结构体
    inFile1.close();
    //cout<<structArray[1].NodeSequenceNUm<<endl;
    //cout<<structArray[2785].NodeSequenceNUm<<endl;


    vector<int>b,bc; //处理srcp
    for(int i=1;i<=count;i++)//寻找根有用节点
        if(structArray[i].srcp.find(".c")!=string::npos)
        {b.push_back(i);//将根有用节点序号压栈
            structArray[i].ifuseful=true;
        }
    //for(int i=0;i<b.size();i++)/////////
    //cout<<endl<<b[i]<<endl;/////////////
    for(int j=0;j<b.size();j++)
        visit_Useful_Node(b[j]);//第归访问根有用节点

    for(int i=1;i<=count;i++)//处理call_expr
        if(structArray[i].NodeName=="call_expr")
        {bc.push_back(i);
            structArray[i].ifuseful=true;
        }
    //for(int i=0;i<bc.size();i++)/////////
    //cout<<endl<<bc[i]<<endl;/////////////
    for(int j=0;j<bc.size();j++)
        visit_Useful_Node(bc[j]);
    //cout<<"hello!447"<<endl;


    //Here i print all useful node
    for(int k=1;k<=count;k++)
        if(structArray[k].ifuseful==true)
        {
            ShowAStruct(k);
        }
    //cout<<structArray[k].NodeSequenceNUm<<endl;
}