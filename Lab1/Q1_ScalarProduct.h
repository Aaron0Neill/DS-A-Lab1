#pragma once
/// <summary>
/// @author: Aaron O Neill
///	Q1.Write a template function called scalarProduct() to compute the scalar(or dot) product
///	of two mathematical vectors.Each vector should be represented by an array, where x is stored in
///	index 0, y in index 1 and z in index 2. The scalar product is :
///			aobo + a1b1 + a2b2
///	The function should return the scalar product as a single value.Test your function with different
///	numeric types.
///
/// </summary>
 
#include <array>
#include <iostream>

template <typename T> 
T scalarProduct(std::array<T, 3> vec1, std::array<T, 3> vec2)
{
	// return the scalar product aobo + a1b1 + a2b2
	return ((vec1[0] * vec2[0]) + (vec1[1] * vec2[1]) + (vec1[2] * vec2[2]));
}

int main1()
{
	std::array<float, 3> vector1{ 1.5f, 3.0f, 2.5f };
	std::array<float, 3> vector2{ 3.5f, 6.5f, 1.0f };
	std::array<float, 3> vector3{ -5.0f,1.5f, -1.0f };

	std::cout << "Vec1.Vec2: " << scalarProduct(vector1, vector2) << ", Expected: " << std::endl;
	std::cout << "Vec1.Vec3: " << scalarProduct(vector1, vector3) << ", Expected: " << std::endl;
	std::cout << "Vec2.Vec1: " << scalarProduct(vector2, vector1) << ", Expected: " << std::endl;
	std::cout << "Vec2.Vec3: " << scalarProduct(vector2, vector3) << ", Expected: " << std::endl;
	std::cout << "Vec3.Vec1: " << scalarProduct(vector3, vector1) << ", Expected: " << std::endl;
	std::cout << "Vec3.Vec2: " << scalarProduct(vector3, vector2) << ", Expected: " << std::endl;

}