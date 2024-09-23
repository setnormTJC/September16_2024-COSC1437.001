// StartingTopic2-Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::string; 
using std::cout; 

class Shirt
{
    //a difference between structs and classes 
    // is that all members of a struct are PUBLIC by default 
    //and CLASSES have all PRIVATE members by default 
private:
    string size = "size ALSO TBD"; //ex: "Small", "Medium", XXL 

    string color = "TBD";

    double cost = 0.00; 

    //another new thing - the addition of FUNCTIONS 

    //"member functions: 
    //"getter" function (a function that GETS a member variable)
public: 
    string getSize()
    {
        return size; 
    }

    //"setter function" SETS the value of a member variable 
    void setSize(string userSpecifiedSize)
    {
        cout << "Updating the size to ..." << userSpecifiedSize << "\n";
        size = userSpecifiedSize; 
    }
};

int main()
{
    Shirt myShirt;// = { "Medium", "A lovely blue", 19.99 };
    cout << "\nInitial size of myshirt is: " << myShirt.getSize(); 
    myShirt.setSize("Medium"); 
    cout << "\nsize of myshirt AFTER calling the setter function is: " << myShirt.getSize();
    //myShirt.size = "Medium";

    cout << "\nDid it work?\n";

    //std::cout << "Hello World!\n";
}
