#pragma once

/*This provides a "specification" for what it means to be a `Donut` data type*/
class Donut
{
public:
	//member vars (private): 
	bool hasSprinkles;
	int caloricContent; //C (kC) -> c
	bool isGlazed;

	//member functions (publicly accessible by clients) 

	void printDonutDetails(); //function DECLARATION
	//{
		/*function details are perhaps a secret to everyone*/
	//}
};

