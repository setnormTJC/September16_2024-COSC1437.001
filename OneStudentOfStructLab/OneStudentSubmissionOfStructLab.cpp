//
//  main.cpp
//  creatingAndUsing
//
//  Created by Satoshi on 9/16/24.
//

#include <iostream>
#include <vector>
#include <iomanip> // For std::setw and std::setfill

using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

void printDate(const Date& date)
{
    cout << setw(2) /*<< setfill('x') */<< date.month << "/"
        << setw(2) /*<< setfill('x') */<< date.day << "/"
        << date.year << endl;
}

void printDates(const vector<Date>& dates)
{
    for (const Date& date : dates)
    {
        printDate(date);
    }
}

int main()
{
    vector<Date> dates =
    {
        {1, 15, 2024},
        {7, 4, 1776},
        {12, 25, 2024}
    };

    cout << "List of Dates:" << endl;
    printDates(dates);

    return 0;
}
