//  PART 1

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	double var1;
	std::cout << "Enter a number: " << "\n";
	std::cin >> var1;
	std::cout << std::fixed << std::scientific << var1  << std::endl;
	return 0;
}

