#pragma once

#include<string> 
//Java -> vector is called ArrayList 
//vector<int> nums = { 1; 2, 3, 4 }
struct structName //struct is short for "structure" 
{
    int integerName;
    std::string stringName;
    double doubleName; //compartmentalization 

};


struct ShoeRecord
{
    std::string name;
    double price;
    int rating; //number of stars on review average 

};

struct RPGCharacter
{
    int strength;
    int charisma;


    double amountOfGold; //56.43
};

struct Mage : RPGCharacter
{

};

/*
Person is composed of 1) age 2) weight and 3) name
*/
struct Person
{
    int age; //years 

    double weight; //how much they weigh 

    std::string name;

};