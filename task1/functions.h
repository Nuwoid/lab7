#pragma once
#include<iostream>
#include<algorithm>
#include<cmath>
#include <locale>
#include<string>
#include"..\task1\inputCheck.h"

struct date
{
    int day;
    int month;
    int year;
};

struct product
{
    std::string productName;
    date getDate;
    std::string orderStatus;
};


//startProgramm
void startProgramm(int i);


//outputData
void outputInLoop(product* productList, int i);
void output(product temp);


//inputData
void inputDataInLoop(product* productList, int i);


//lookThroughList
void lookThroughList(product* productList, int productAmount);


//findData
void findInList(product* productList, std::string searchName, int productAmount);


//changeData
void changeFromList(product* productList, std::string searchName, int productAmount);


//addData
product* addToList(product* productList, int& productAmount, product temp);


//deleteData
product* deleteFromList(product* productList, std::string searchName, int& productAmount);


//listInAlphabeticOrderByName
bool compareByName(const product& a, const product& b);