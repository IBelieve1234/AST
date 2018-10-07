//
// Created by qiao on 18-10-7.
//

#ifndef AST_PRETREATMENT_H
#define AST_PRETREATMENT_H

#endif //AST_PRETREATMENT_H

#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;


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