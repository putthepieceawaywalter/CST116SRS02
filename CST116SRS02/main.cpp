// CST116SRS02.cpp : Defines the entry point for the console application.
//PART 0

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
	//variable declarations
	double west{ 36364.87 };
	double midwest{ 12431.33 };
	double east{ 127690.5 };
	double south{ 9200 };

	//this formats the numbers to the US standard
	std::cout.imbue(std::locale("en-US"));

	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	// this is the code for the table 
	/* I set width of the region to 9  which allows room for the longest word, Midwest, and then put in
	a money sign lastly I set the precision to make sure that all of my variables included two decimal places 
	and properly lined up */
	// right now the dollar signs 
	std::cout << std::setw(9)<< std::left << "West:" << "$" << std::left << std::setw(10) << std::right << west << "\n";
	std::cout << std::setw(9)<< std::left << "Midwest:" << "$" << std::setw(10) << std::right << midwest << "\n";
	std::cout << std::setw(9) << std::left << "East:" << "$" << std::setw(10) << std::right << east << "\n";
	std::cout << std::setw(9) << std::left << "South:" << "$" << std::setw(10) << std::right << south << "\n";


    return 0;
}

