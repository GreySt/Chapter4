/*
 * chapter4_1a.cpp
 *
 *  Created on: 20.06.2018
 *      Author: trtec
 */

#include <iostream>








int main()
{
	int zahl1 {0};
	int zahl2 {0};

	std::cout << "Enter an integer: " << "\n";
	std::cin >> zahl1;
	std::cout << "Enter a larger integer: " << "\n";
	std::cin >> zahl2;

	if (zahl1 > zahl2)
	{
		int switch2{0};
		switch2 = zahl2;
		zahl2 = zahl1;
		zahl1 = switch2;

		std::cout << "Swapping the values" << "\n";

		std::cout << "The smaller Value is " << zahl1 << "\n";
		std::cout << "The larger value is " << zahl2 << "\n";

	}
	else
	{
		std::cout << "The smaller Value is " << zahl1 << "\n";
		std::cout << "the larger Value is " << zahl2 << "\n";

	}


	return 0;
}
