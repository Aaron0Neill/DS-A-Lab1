#pragma once
/// <summary>
/// @author: Aaron O Neill
/// @date: 16-10-2020
/// </summary>

#include <vector>
#include <algorithm>
#include <cstdlib>	
#include <time.h>
#include <iostream>

void question5()
{
	srand(time(nullptr));
	std::vector<int> vec;
	std::cout << "***********************************\n";
	std::cout << "Vector array\n";
	for (int i = 0; i < 100; i++)
	{
		vec.push_back(rand() % 10);
		std::cout << vec.at(i) << " , ";
		if (i % 10 == 0 && i != 0)
		{
			std::cout << std::endl;
		}
	}

	std::cout << "\nRemove this int from the array: ";
	int removal;
	std::cin >> removal;

	while (std::find(vec.begin(), vec.end(), removal) != vec.end())
	{
		std::cout << removal << " was removed from the vector\n";
		vec.erase(std::find(vec.begin(), vec.end(), [=](auto a) {return *a == removal; }));
	}

	std::cout << "NewVector\n";

	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec.at(i) << " , ";
		if (i % 10 == 0 && i != 0)
		{
			std::cout << std::endl;
		}
	}
}

int main5()
{
	question5();
}