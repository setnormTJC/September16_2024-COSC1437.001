// StaticDemo-Oct7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
//static int //static affects the "lifetime" of a variable 
void printStaticAndAutomaticVariables()
{
	static int staticFunctionCallCount = 0; 
	int someNonStaticVar = 0; 

	staticFunctionCallCount++; 
	someNonStaticVar--; 

	std::cout << "The STATIC variable got updated to: " << staticFunctionCallCount << "\n";
	std::cout << "The NON-STATIC (aka: \"automatic\") variable got updated to: " << someNonStaticVar << "\n";

}




class RPGCharacter//assuming an RPG party gets made up of characters ...
{
public: 
	std::string name = "Some team member";
	static int goldPool;// = 10;
	//a SHARED resource -> how much money the team has to spend on supplies at a shop

}; //end class def: 



int RPGCharacter::goldPool = 10; 


class RPGParty
{
	std::vector<RPGCharacter> theTeam;
	//"composition" -> making one class composed of objects of ANOTHER class 

};

class Math
{
public: 
	static double PI; 
};

double Math::PI = 3.14; 

int main()
{
	//Math mathObject; //this requires RAM (obviously) 
	//mathObject.PI * radius; 

	std::cout << Math::PI << "\n";
	RPGCharacter bob; 
	RPGCharacter alice; 
	//alice
	//bob.//modifier

	alice.goldPool = alice.goldPool - 1; //subtracts 1 from 10  

	std::cout << "How much gold does bob have (after alice spent one unit)? " << bob.goldPool << "\n";
	bob.goldPool += 20; 

	std::cout << "Does alice object have 29 gold now? " << alice.goldPool << "\n";

	//printStaticAndAutomaticVariables(); 

	//std::cout << "\n\n\n";

	//printStaticAndAutomaticVariables();

}
