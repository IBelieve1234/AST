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