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

	//thisisacomment!!!!!!



	// right now the dollar signs are centered and the values are right aligned

	std::cout << std::setw(8)<< std::right << "West:" << "$" << std::left << std::setw(10) << std::right << west << "\n";
	std::cout << std::setw(8)<< std::right << "Midwest:" << "$" << std::setw(10) << std::right << midwest << "\n";
	std::cout << std::setw(8) << std::right << "East:" << "$" << std::setw(10) << std::right << east << "\n";
	std::cout << std::setw(8) << std::right << "South:" << "$" << std::setw(10) << std::right << south << "\n";


    return 0;
}

