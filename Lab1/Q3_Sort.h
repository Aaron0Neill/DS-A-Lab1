/// <summary>
/// @author: Aaron O Neill
/// @date: 13/10/2020
/// </summary>

#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

class Record
{
public:
	
	Record(int t_price = 5, int t_count = 10) : m_price(t_price), m_count(t_count) {};


	int m_price;
	int m_count;

	std::string toString()
	{
		return std::string("Price: " + std::to_string(m_price) + ", Count: " + std::to_string(m_count));
	}
};

enum class SortType { COUNT, PRICE };

template<SortType valueType>
class Sorter
{
public: 
	bool operator()(Record const& t_first, Record const& t_second)
	{
		switch (valueType)
		{
		case SortType::COUNT:
			return t_first.m_count < t_second.m_count;
			break;
		case SortType::PRICE:
			return t_first.m_price < t_second.m_price;
			break;
		}
	}
};

int main3()
{
	std::vector<Record> records = { Record(1,10), Record(69,420), Record(10,35), Record(9,55) };
	std::cout << "Records Before:";
	for (auto c : records)
	{
		std::cout << c.toString() << " , ";
	}
	std::cout << std::endl;

	std::sort(records.begin(), records.end(), Sorter<SortType::COUNT>());

	std::cout << "Records After:";
	for (auto c : records)
	{
		std::cout << c.toString() << " , ";
	}
	std::cout << std::endl;
	return 0;
}