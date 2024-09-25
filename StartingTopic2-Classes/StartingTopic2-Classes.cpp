// StartingTopic2-Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<string> 
#include <vector>

using std::string; 
using std::cout; 


class Shirt
{
    //a difference between structs and classes 
    // is that all members of a struct are PUBLIC by default 
    //and CLASSES have all PRIVATE members by default 

private: //this is an "access specifier/modifier" 

    string size = "size ALSO TBD"; //ex: "Small", "Medium", XXL 

    string color = "TBD";

    double cost = 0.00; 

    //"member functions: 
    //"getter" function (a function that GETS a member variable)
public: 

    /*This constructor takes ZERO arguments -> and that means it is called the 
    "DEFAULT" constructor*/
    Shirt()
    {
        size = "Size yet to be initialized"; 
        color = "Color will be updated later";
        cost = -999.99; 
    }

    void printMemberVars()
    {
        cout << "Size is: " << size << "\n";
        cout << "Color is: " << color << "\n";
        cout << "Cost is: " << cost << "\n";
    }

    string getSize()
    {
        return size; 
    }

    double getCost() const; //function declaration (prototype)

    //mutable...

//private: 
    //"setter function" SETS the value of a member variable 
    void setSize(string userSpecifiedSize)
    {
        //validate user/client input (argument) 
        while (userSpecifiedSize != "Medium"
            && userSpecifiedSize != "Large") /*assumes only medium and large sizes available*/
        {
            cout << "\nThat size is invalid ... try again\n";
            std::cin >> userSpecifiedSize; 
        }

        cout << "\nUpdating the size to ..." << userSpecifiedSize << "\n";
        size = userSpecifiedSize; 
    }

    /*a goofy example of a function calling another private function defined in this class*/
    void doSomething();
    /*add 600 more member variables and functions so that we have "perfect" encapsulation of what a shirt is?*/
};


void doSomething(); //this is a function "prototype"/declaration 


/*The main function can be called a "client" that uses the Shirt class
* -> a "driver" program 
*/
int main()
{

    //std::cout 
    Shirt yourShirt;

    yourShirt.printMemberVars(); 

    //yourShirt.getCost(); 

    //yourShirt.
    ////int iNumber = 32; 

    //std::vector<Shirt> lotsOfShirts; 
    //for (int i = 0; i < 100'000; i++)
    //{
    //    Shirt someShirt; 

    //    lotsOfShirts.push_back(someShirt);
    //}

    //cout << "Here!" << sizeof(lotsOfShirts) * lotsOfShirts.size() << "\n";

    //Shirt myShirt;// = { "Medium", "A lovely blue", 19.99 };
    //cout << sizeof(int) << "\n";
    //cout << sizeof(float) << "\t" << sizeof(double) << "\n";
    //cout << "How \"big\" is my shirt (how many Bytes)? " << sizeof(myShirt) << "\n";
    //cout << "How \"big\" is Shirt (how many Bytes)? " << sizeof(Shirt) << "\n";
    //
    ////myShirt.
    //cout << "\nInitial size of myshirt is: " << myShirt.getSize(); 
    ////myShirt.doSomething(); 
    ////myShirt.setSize("Small"); 
    //cout << "\nsize of myshirt AFTER calling the setter function is: " << myShirt.getSize();
    ////myShirt.size = "Medium";

    //cout << "\nDid it work?\n";

    ////std::cout << "Hello World!\n";


}

void doSomething() //function definition 
{
    std::cout << "Doing something\n";
}

double Shirt::getCost() const
{
    return Shirt::cost;
}

//:: -> the "scope resolution operator" 
void Shirt::doSomething()
{
    cout << "Doing something in the SHIRT class...\n";
}