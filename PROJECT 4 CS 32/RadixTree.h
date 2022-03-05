#include "provided.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>
#include <set>
#include <unordered_map>

using namespace std;
using ValueType = double;

class RadixTree
{
private:
	string s;
	ValueType v;
	map<string, ValueType> m_tree;

public:
	RadixTree()
	{

	}
	~RadixTree()
	{

	}

	void insert(std::string key, const ValueType& value)
	{
		m_tree.insert({ key, value });
	}

	ValueType* search(std::string key)
	{
		for (auto itr = m_tree.begin(); itr != m_tree.end(); ++itr)
		{
			if (itr->first == key)
			{
				return itr->second;
			}
		}
		return nullptr;
	}
}