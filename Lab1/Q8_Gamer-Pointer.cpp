#pragma once
/// <summary>
/// @author: Aaron O Neill
/// @date: 16-10-2020
/// </summary>

#include <vector>
#include <algorithm>
#include <iostream>


class Gamer
{
public:
	Gamer() {};

	~Gamer()
	{
		std::cout << "Destructor called" << std::endl;
	}

	Gamer(Gamer const& t_copy)
	{
		std::cout << "Copy constructor called" << std::endl;
	}
};


int main()
{
	std::vector<Gamer*> gamejammers;
	std::cout << "#### Creation ####" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		gamejammers.push_back( new Gamer());
	}
	std::cout << "------------------------" << std::endl;

	std::cout << "Capacity: " << gamejammers.capacity() << " , Size: " << gamejammers.size() << std::endl;
	std::cout << "#### Clear ####" << std::endl;
	gamejammers.clear();
	std::cout << "------------------------" << std::endl;
	std::cout << "Capacity: " << gamejammers.capacity() << " , Size: " << gamejammers.size();

	std::cin.get();
	return 0;
}