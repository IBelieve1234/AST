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
int Read_struct(string file_position){
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
        structArray[i].flag=2;
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
            if(arr[j]=="0:")
            {
                j++;
                structArray[i].num0=(arr[j].c_str());
            }
            if(arr[j]=="1:")
            {
                j++;
                structArray[i].num1=(arr[j].c_str());
            }
            if(arr[j]=="2:")
            {
                j++;
                structArray[i].num2=(arr[j].c_str());
            }
            if(arr[j]=="3:")
            {
                j++;
                structArray[i].num3=(arr[j].c_str());
            }
            if(arr[j]=="4:")
            {
                j++;
                structArray[i].num4=(arr[j].c_str());
            }
            if(arr[j]=="5:")
            {
                j++;
                structArray[i].num5=(arr[j].c_str());
            }
            if(arr[j]=="6:")
            {
                j++;
                structArray[i].num6=(arr[j].c_str());
            }
            if(arr[j]=="7:")
            {
                j++;
                structArray[i].num7=(arr[j].c_str());
            }
            if(arr[j]=="8:")
            {
                j++;
                structArray[i].num8=(arr[j].c_str());
            }
            if(arr[j]=="9:")
            {
                j++;
                structArray[i].num9=(arr[j].c_str());
            }
            if(arr[j]=="10:")
            {
                j++;
                structArray[i].num10=(arr[j].c_str());
            }
            if(arr[j]=="11:")
            {
                j++;
                structArray[i].num11=(arr[j].c_str());
            }
        }
    }//已读取信息到结构体
    inFile1.close();
    return count;
}
void Delete_redundant_information(string file_position){
    int count;
    count=Read_struct(file_position);
    for(int i=1;i<=count;i++){
        if(!structArray[i].srcp.empty()){
            if(structArray[i].srcp.find(".c")!=string::npos)
                structArray[i].flag=1;
            else structArray[i].flag=0;
        }
        else structArray[i].flag=2;

    }

    for(int i=1;i<=count;i++){
        if(structArray[i].flag!=2){

            string temp;
            //name
            if(structArray[i].name.find("@")!=string::npos){
                temp=structArray[i].name;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //type
            if(structArray[i].type.find("@")!=string::npos){
                temp=structArray[i].type;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //chan
            if(structArray[i].chan.find("@")!=string::npos){
                temp=structArray[i].chan;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //strg
            if(structArray[i].strg.find("@")!=string::npos){
                temp=structArray[i].strg;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //size
            if(structArray[i].size.find("@")!=string::npos){
                temp=structArray[i].size;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;

            }
            //sign
            if(structArray[i].sign.find("@")!=string::npos){
                temp=structArray[i].sign;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //min
            if(structArray[i].min.find("@")!=string::npos){
                temp=structArray[i].min;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //max
            if(structArray[i].max.find("@")!=string::npos){
                temp=structArray[i].max;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //unql
            if(structArray[i].unql.find("@")!=string::npos){
                temp=structArray[i].unql;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //ptd
            if(structArray[i].ptd.find("@")!=string::npos){
                temp=structArray[i].ptd;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //mngl
            if(structArray[i].mngl.find("@")!=string::npos){
                temp=structArray[i].mngl;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //srcp
            if(structArray[i].srcp.find("@")!=string::npos){
                temp=structArray[i].srcp;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //body
            if(structArray[i].body.find("@")!=string::npos){
                temp=structArray[i].body;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //link
            if(structArray[i].link.find("@")!=string::npos){
                temp=structArray[i].link;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //retn
            if(structArray[i].retn.find("@")!=string::npos){
                temp=structArray[i].retn;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //prms
            if(structArray[i].prms.find("@")!=string::npos){
                temp=structArray[i].prms;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //valu
            if(structArray[i].valu.find("@")!=string::npos){
                temp=structArray[i].valu;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //qual
            if(structArray[i].qual.find("@")!=string::npos){
                temp=structArray[i].qual;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //tag
            if(structArray[i].tag.find("@")!=string::npos){
                temp=structArray[i].tag;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //flds
            if(structArray[i].flds.find("@")!=string::npos){
                temp=structArray[i].flds;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //args
            if(structArray[i].args.find("@")!=string::npos){
                temp=structArray[i].args;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //scpe
            if(structArray[i].scpe.find("@")!=string::npos){
                temp=structArray[i].scpe;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //bpos
            if(structArray[i].bpos.find("@")!=string::npos){
                temp=structArray[i].bpos;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //argt
            if(structArray[i].argt.find("@")!=string::npos){
                temp=structArray[i].argt;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //expr
            if(structArray[i].expr.find("@")!=string::npos){
                temp=structArray[i].expr;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //elts
            if(structArray[i].elts.find("@")!=string::npos){
                temp=structArray[i].elts;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //op0
            if(structArray[i].op0.find("@")!=string::npos){
                temp=structArray[i].op0;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //op1
            if(structArray[i].op1.find("@")!=string::npos){
                temp=structArray[i].op1;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //note
            if(structArray[i].note.find("@")!=string::npos){
                temp=structArray[i].note;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //op2
            if(structArray[i].op2.find("@")!=string::npos){
                temp=structArray[i].op2;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //fn
            if(structArray[i].fn.find("@")!=string::npos){
                temp=structArray[i].fn;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //vars
            if(structArray[i].vars.find("@")!=string::npos){
                temp=structArray[i].vars;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //labl
            if(structArray[i].labl.find("@")!=string::npos){
                temp=structArray[i].labl;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //domn
            if(structArray[i].domn.find("@")!=string::npos){
                temp=structArray[i].domn;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            //refd
            if(structArray[i].refd.find("@")!=string::npos){
                temp=structArray[i].refd;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num0.find("@")!=string::npos){
                temp=structArray[i].num0;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num1.find("@")!=string::npos){
                temp=structArray[i].num1;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num2.find("@")!=string::npos){
                temp=structArray[i].num2;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num3.find("@")!=string::npos){
                temp=structArray[i].num3;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num4.find("@")!=string::npos){
                temp=structArray[i].num4;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num5.find("@")!=string::npos){
                temp=structArray[i].num5;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num6.find("@")!=string::npos){
                temp=structArray[i].num6;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num7.find("@")!=string::npos){
                temp=structArray[i].num7;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num8.find("@")!=string::npos){
                temp=structArray[i].num8;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num9.find("@")!=string::npos){
                temp=structArray[i].num9;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num10.find("@")!=string::npos){
                temp=structArray[i].num10;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }
            if(structArray[i].num11.find("@")!=string::npos){
                temp=structArray[i].num11;
                temp.erase(0,1);
                if(structArray[atoi(temp.c_str())].flag!=0&&structArray[i].flag==1)
                    structArray[atoi(temp.c_str())].flag=1;
                if(structArray[atoi(temp.c_str())].flag!=1&&structArray[i].flag==0)
                    structArray[atoi(temp.c_str())].flag=0;
            }

        }
    }
    vector<int>bc; //处理srcp
    for(int i=1;i<=count;i++)//处理call_expr
        if(structArray[i].NodeName=="call_expr")
        {bc.push_back(i);
            structArray[i].ifuseful=true;
        }
    for(int j=0;j<bc.size();j++)
        visit_Useful_Node(bc[j]);


    for(int i=1;i<=count;i++)
        if(structArray[i].flag==1)
            ShowAStruct(i);

        fstream creatGraph;
        queue<int>a;
        creatGraph.open("/root/graphviz/graph.dot",ios::out);
        creatGraph<<"digraph structs{"<<endl<<"  node[shape=record]";
        for(int i=1;i<=count;i++)
            if(structArray[i].NodeName=="function_decl"&&structArray[i].srcp.find(".c")!=string::npos&&structArray[i].body.find("@")!=string::npos)
                a.push(i);
            cout<<"sss"<<a.front();

            int j=0;
            string buf[47]={"name",};
            while(!a.empty()){
                creatGraph<<"structNode"<<j<<"[label="<<" \" ";
                int tmp=a.front();
                a.pop();
                string temp;
                if(structArray[tmp].name.find("@")!=string::npos) {
                    temp = structArray[tmp].name;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1&&structArray[atoi(temp.c_str())].ifvisited1!=false)
                    {a.push(atoi(temp.c_str()));
                    creatGraph<<"<name>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].type.find("@")!=string::npos) {
                    temp = structArray[tmp].type;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<type>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].chan.find("@")!=string::npos) {
                    temp = structArray[tmp].chan;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<chan>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].strg.find("@")!=string::npos) {
                    temp = structArray[tmp].strg;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<strg>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].size.find("@")!=string::npos) {
                    temp = structArray[tmp].size;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<size>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].sign.find("@")!=string::npos) {
                    temp = structArray[tmp].sign;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<sign>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].min.find("@")!=string::npos) {
                    temp = structArray[tmp].min;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<min>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].min.find("@")!=string::npos) {
                    temp = structArray[tmp].min;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<min>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].max.find("@")!=string::npos) {
                    temp = structArray[tmp].max;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<max>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].unql.find("@")!=string::npos) {
                    temp = structArray[tmp].unql;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<unql>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].ptd.find("@")!=string::npos) {
                    temp = structArray[tmp].ptd;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<ptd>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].mngl.find("@")!=string::npos) {
                    temp = structArray[tmp].mngl;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<mngl>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].srcp.find("@")!=string::npos) {
                    temp = structArray[tmp].srcp;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<srcp>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].body.find("@")!=string::npos) {
                    temp = structArray[tmp].body;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<body>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].link.find("@")!=string::npos) {
                    temp = structArray[tmp].link;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<link>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].retn.find("@")!=string::npos) {
                    temp = structArray[tmp].retn;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<retn>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].prms.find("@")!=string::npos) {
                    temp = structArray[tmp].prms;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<prms>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].valu.find("@")!=string::npos) {
                    temp = structArray[tmp].valu;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<valu>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].qual.find("@")!=string::npos) {
                    temp = structArray[tmp].qual;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<qual>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].tag.find("@")!=string::npos) {
                    temp = structArray[tmp].tag;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<tag>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].flds.find("@")!=string::npos) {
                    temp = structArray[tmp].flds;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<flds>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].args.find("@")!=string::npos) {
                    temp = structArray[tmp].args;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<args>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].scpe.find("@")!=string::npos) {
                    temp = structArray[tmp].scpe;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<scpe>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].bpos.find("@")!=string::npos) {
                    temp = structArray[tmp].bpos;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<bpos>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].argt.find("@")!=string::npos) {
                    temp = structArray[tmp].argt;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<argt>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].expr.find("@")!=string::npos) {
                    temp = structArray[tmp].expr;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<expr>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].elts.find("@")!=string::npos) {
                    temp = structArray[tmp].elts;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<elts>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].op0.find("@")!=string::npos) {
                    temp = structArray[tmp].op0;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<op0>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].op1.find("@")!=string::npos) {
                    temp = structArray[tmp].op1;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<op1>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].note.find("@")!=string::npos) {
                    temp = structArray[tmp].note;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<note>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].op2.find("@")!=string::npos) {
                    temp = structArray[tmp].op2;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<op2>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].fn.find("@")!=string::npos) {
                    temp = structArray[tmp].fn;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<fn>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].vars.find("@")!=string::npos) {
                    temp = structArray[tmp].vars;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<vars>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].labl.find("@")!=string::npos) {
                    temp = structArray[tmp].labl;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<labl>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].domn.find("@")!=string::npos) {
                    temp = structArray[tmp].domn;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<domn>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].refd.find("@")!=string::npos) {
                    temp = structArray[tmp].refd;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<refd>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num0.find("@")!=string::npos) {
                    temp = structArray[tmp].num0;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num0>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num1.find("@")!=string::npos) {
                    temp = structArray[tmp].num1;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num1>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num2.find("@")!=string::npos) {
                    temp = structArray[tmp].num2;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num2>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num3.find("@")!=string::npos) {
                    temp = structArray[tmp].num3;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num3>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num4.find("@")!=string::npos) {
                    temp = structArray[tmp].num4;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num4>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num5.find("@")!=string::npos) {
                    temp = structArray[tmp].num5;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num5>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num6.find("@")!=string::npos) {
                    temp = structArray[tmp].num6;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num6>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num7.find("@")!=string::npos) {
                    temp = structArray[tmp].num7;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num7>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num8.find("@")!=string::npos) {
                    temp = structArray[tmp].num8;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num8>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num9.find("@")!=string::npos) {
                    temp = structArray[tmp].num9;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num9>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num10.find("@")!=string::npos) {
                    temp = structArray[tmp].num10;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num10>"<<atoi(temp.c_str())<<"|";
                    }
                }
                if(structArray[tmp].num11.find("@")!=string::npos) {
                    temp = structArray[tmp].num11;
                    temp.erase(0, 1);
                    if(structArray[atoi(temp.c_str())].flag==1)
                    {a.push(atoi(temp.c_str()));
                        creatGraph<<"<num11>"<<atoi(temp.c_str())<<"|";
                    }
                }
                creatGraph<<" \"];" ;
                creatGraph<<endl;
                j++;
            }
         cout<<endl<<"kkk"<<j;


        creatGraph<<endl<<"}";
        creatGraph.close();




    //cout<<structArray[k].NodeSequenceNUm<<endl;
}