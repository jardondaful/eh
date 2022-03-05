#include <string>
#include <vector>
#include <iostream>
#include <istream>
#include <algorithm>
#include "provided.h"
using namespace std;

class PersonProfile
{
private:
	string m_name;
	string m_email;
	vector<AttValPair> v;

public:
	PersonProfile(std::string name, std::string email)
	{
		m_name = name;
		m_email = email;
	}

	std::string GetName() const
	{
		return m_name;
	}

	std::string GetEmail() const
	{
		return m_email;
	}

	void AddAttValPair(const AttValPair& attval);

	int GetValAtNumPairs() const;
};