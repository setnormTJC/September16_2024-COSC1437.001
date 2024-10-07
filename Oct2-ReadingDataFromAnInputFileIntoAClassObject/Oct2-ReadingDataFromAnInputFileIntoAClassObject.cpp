

#include <iostream>
#include<fstream> 
#include <vector>


using std::cout; 
using std::string; 

class  Point
{
public: 
	double x1; 
	double y1; 

	Point()
	{
		x1 = -999; 
		y1 = -999; 
	}

	Point(double x1, double y1)
		:x1(x1), y1(y1) //"member initializer syntax"
	{
		//weird 
	}

	//Point(double userSpecifiedx1, double userSpecifiedy1)
	//{
	//	x1 = userSpecifiedx1; 
	//	y1 = userSpecifiedy1; 

	//}

};

int main()
{
	//Point theOrigin{ 0, 0 }; 
	//cout << theOrigin.x1 << ", " << theOrigin.y1 << "\n";

	//system("pause"); 

	cout << "Enter an input file name: \n";
	string inputFileName; 
	std::cin >> inputFileName; 

	std::ifstream fin{ inputFileName };
	//"C:/Users/Work/Desktop/points.txt"
	
	if (!fin.is_open())
	{
		cout << "Could not find the file :[\n";
		return -23; 
	}

	cout << "FOUND! Hooray! Huzaah!\n";
	
	std::vector<Point> points; 
	//Point otherPointsArray[100] 
	while (!fin.eof())
	{
		double x1, y1; 
		fin >> x1 >> y1; 

		points.push_back(Point{ x1, y1 });
	}

	fin.close(); 

	for (int i = 0; i < points.size(); i++)
	{
		cout << "(" << points[i].x1 << "," << points[i].y1 << ")" << "\n";
	}
}
