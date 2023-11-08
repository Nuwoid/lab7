#pragma once
#include<iostream>
#include<algorithm>
#include<cmath>
#include <locale>
#include<string>
#include"inputCheck.h"


struct address {

    int flatNumber;
    int house;
    std::string street;
    std::string city;
};

struct date {
    int day;
    int month;
    int year;
};

struct costumer {
    long long orderNum;
    std::string firstName;
    std::string secondName;
    std::string middleName;
    address homeAddress;
    date orderRegistration;
};


//startProgramm
void startProgramm(int i);


//outputData
void outputInLoop(costumer* costumerList, int i);
void output(costumer costumerList);


//inputData
void inputDataInLoop(costumer* costumerList, int i);
costumer inputData(costumer costumer);


//lookThroughList
void lookThroughList(costumer* costumerList, int costumerAmount);


//findData
void findInList(costumer* costumerList, costumer tempCostumer, int costumerAmount);


//addData
costumer* addToList(costumer* costumerList, costumer tempCostumer, int& costumerAmount);


//deleteData
costumer* deleteFromList(costumer* costumerList, costumer tempCostumer, int& costumerAmount);


//changeData
void changeFromList(costumer* costumerList, costumer tempCostumer, int costumerAmount);


//deleteSameData
costumer* deleteSameData(costumer* costumerList, int& costumerAmount);


//listInAlphabeticOrderByName
bool compareByName(const costumer& a, const costumer& b);