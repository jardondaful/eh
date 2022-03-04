#include "PersonProfile.h"
#include "RadixTree.h"
#include "AttributeTranslator.h"
#include "MatchMaker.h"
#include "MemberDaraBase.h"

#include <string>
#include <vector>
#include <iostream>
#include <istream>
#include <algorithm>
#include <unordered_map>
using namespace std;

void PersonProfile::AddValAtPair(const AttValPair& attval)
{
	if (attval.GetName() == m_name && attval.GetEmail() == m_email)
	{
		return;
	}
	v.push_back(attval);
	for (int i = 0; i < )
}

int PersonProfile::GetValAtNumPairs() const
{
	int count = 0;
	for (int i = 0; i < v.size(); i++)
	{

	}
	return count;
}