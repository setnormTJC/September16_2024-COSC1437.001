// StartingTopic2-Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<string> 
#include <vector>
#include "Donut.h"

using std::string; 
using std::cout; 


class Shirt
{
    //a difference between structs and classes 
    // is that all members of a struct are PUBLIC by default 
    //and CLASSES have all PRIVATE members by default 

//private: //this is an "access specifier/modifier" 

    string size = "size ALSO TBD"; //ex: "Small", "Medium", XXL 

    string color = "TBD";

    double cost = 0.00; 

    //"member functions: 
    //"getter" function (a function that GETS a member variable) -> also called an "accessor" function 
public: 

    /*This constructor takes ZERO arguments -> and that means it is called the 
    "DEFAULT" constructor*/
    
    Shirt()/* = delete;*/ //deleting the default constructor MIGHT be desirable in "certain circumstances" 
    {
        size = "Size yet to be initialized"; 
        color = "Color will be updated later";
        cost = -999.99; 
    }

    /*This is a constructor OVERLOAD that takes 3 params
    @param size -> MUST be medium, large, or small  
    */
    Shirt(string clientSpecifiedSize, string color, double cost)
    {
        size = clientSpecifiedSize;
        this->color = color; 
        this->cost = cost; 
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


    bool isSameShirt(const Shirt& otherShirt); //function DECLARATION ("prototype")

};


void doSomething(); //this is a function "prototype"/declaration 

//void printFruit(const Fruit& someApple)


/*The main function can be called a "client" that uses the Shirt class
* -> a "driver" program 
*/
int main()
{

    Donut someDonut; //somePig
    someDonut.

    //__debugbreak(); 


    //Shirt myShirt{}
    //std::cout 
    Shirt yourShirt{}; //"default constructor" (also exists in Python and Java) 
    Shirt copyOfYourShirt = yourShirt; //works as expected ... ( "copy assignment operator" ) 
    //int a = 123; 

    cout << "The details of the ORIGINAL shirt:\n";
    yourShirt.printMemberVars(); 

    cout << "The details of the COPY: \n";
    copyOfYourShirt.setSize("adsfasdfasdf");

    copyOfYourShirt.printMemberVars(); 



    cout << "Same shirt? " << std::boolalpha << yourShirt.isSameShirt(copyOfYourShirt) << "\n";
    //Shirt herShirt{ "medium", "red", 19.99 }; 
    //herShirt.printMemberVars(); 


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

    cout << "\n\n\nBegin donut stuff...\n";
    Donut someDonut;
    someDonut.caloricContent = 12345;
    someDonut.hasSprinkles = true;
    someDonut.isGlazed = false;

    someDonut.printDonutDetails();

} //end main 

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

bool Shirt::isSameShirt(const Shirt& otherShirt)
{
    return (this->color == otherShirt.color
        and
        this->cost == otherShirt.cost
        &&
        this->size == otherShirt.size);
}
