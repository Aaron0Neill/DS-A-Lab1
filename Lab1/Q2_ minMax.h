#pragma once

/// <summary>
/// @author: Aaron O Neill
/// Q2. Now create a function minMax() that can find the minimum and maximum elements of a vector.
///	The function should return a std::pair of two elements - with the minimum element in the first
///	position and the maximum element in the second position.The function should be able to find the
///	min and max of a vector of any type, where the elements in the vector are comparable
/// </summary>

#include <vector>
#include <iostream>

template <typename T>
std::pair<T, T> minMax(std::vector<T> vector)
{
	// initialize both variables
	T min = vector[0];
	T max = vector[0];

	for (T element : vector)
	{
		if (element > max)
		{
			max = element;
		}
		if (element < min)
		{
			min = element;
		}
	}
	return std::pair<T, T>(min, max);
}

int main2()
{

	std::vector<float> floatVector{ 1.1f,2.2f,3.3f,6.6f,-1.1f };
	std::vector<int> intVector{ 1,2,3,4,5,6,7,8,9,10,-1 };
	std::vector<std::string> stringVector{ "Hello","How","Are","Things" };

	std::cout << "\n\nFloats: ";
	for (float f : floatVector)
	{
		std::cout << f << " , ";
	}

	std::pair<float, float> minMaxFloat = minMax(floatVector);

	std::cout << "\nMin float: " << minMaxFloat.first << " , Max float: " << minMaxFloat.second << std::endl;

	std::cout << "\n\nInts: ";
	for (int i : intVector)
	{
		std::cout << i << " , ";
	}

	std::pair<int, int> minMaxInt = minMax(intVector);

	std::cout << "\nMin int: " << minMaxInt.first << " , Max int: " << minMaxInt.second << std::endl;

	std::cout << "\n\nStrings: ";

	for (std::string& s : stringVector)
	{
		std::cout << s + " , ";
	}

	std::pair<std::string, std::string> minMaxString = minMax(stringVector);
	std::cout << "\nMin string: " << minMaxString.first << " , Max string: " << minMaxString.second << std::endl;
}