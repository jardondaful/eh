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

class MemberDataBase
{
private:

public:
	MemberDataBase()
	{

	}

	~MemberDataBase()
	{

	}

	bool LoadDatabase(std::string filename);

	std::vector<std::string> FindMatchingMembers(const AttValPair& input) const;
};