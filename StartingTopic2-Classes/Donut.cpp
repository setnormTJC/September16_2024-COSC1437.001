#include "Donut.h"

#include<iostream> 

using std::cout;

void Donut::printDonutDetails()
{
	cout << Donut::caloricContent << "\t" << Donut::hasSprinkles << "\t" << Donut::isGlazed << "\n";
}
