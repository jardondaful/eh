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

class AttributeTranslator
{
private:

public:
	AttributeTranslator()
	{

	}

	~AttributeTranslator()
	{

	}

	bool Load(std::string filename);

	std::vector<AttValPair> FindCompatibleAttValPairs(const AttValPair& source) const;
};