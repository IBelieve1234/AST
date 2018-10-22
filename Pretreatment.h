//
// Created by qiao on 18-10-7.
//

#ifndef AST_PRETREATMENT_H
#define AST_PRETREATMENT_H


#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;






typedef struct StructNode
{
    bool NotNull=false;
    string NodeName;
    string NodeSequenceNUm;

    string name;
    string type;
    string chan;
    string strg;
    string size;
    string sign;
    string min;
    string max;
    string unql;
    string ptd;
    string mngl;
    string srcp;
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
    string num0;
    string num1;
    string num2;
    string num3;
    string num4;
    string num5;
    string num6;
    string num7;
    string num8;
    string num9;
    string num10;
    string num11;
    int lngt;
    int algn;
    int prec;
    int low;
    int high;
    int used;
    bool ifvisited;
    bool ifvisited1;
    bool ifuseful;
    int flag;
}Node;



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
void GetInformation();
void ShowAllStruct();


#endif //AST_PRETREATMENT_H
