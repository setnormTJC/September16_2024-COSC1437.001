#pragma once

#include<string> 
//Java -> vector is called ArrayList 
//vector<int> nums = { 1; 2, 3, 4 }

#include"iomanip"

using std::setw, std::left; 
//using std::left; 
using std::cout; 
using std::cin; 

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


//add is a VERB 
void addOneToAge(Person& somePerson) //& ampersand means pass by "reference" 
{

    //cout << &somePerson 
    somePerson.age++;

    //cout << a << "\n";
}

void printPeople(const std::vector<Person>& people)
{
    std::cout << std::left << std::setw(15) << "Name";
    std::cout << std::left << std::setw(5) << "Age";
    std::cout << std::left << std::setw(10) << "Weight";
    cout << "\n";
    for (auto& thePerson : people) //range-based for loop 
    {
        std::cout << std::left << setw(15) << thePerson.name;
        std::cout << std::left << setw(5) << thePerson.age;
        cout << left << setw(10) << thePerson.weight << "\n";
    }
}

Person makePerson()
{
   
    cout << "Enter the person's age, weight, name\n";
    Person resultingPerson; 
    cin >> resultingPerson.age >> resultingPerson.weight >> resultingPerson.name; 

    //return 42; //a person?
    return resultingPerson; 

}
