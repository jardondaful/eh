#include "PersonProfile.h"
#include "RadixTree.h"
#include "AttributeTranslator.h"
#include "MatchMaker.h"
#include "MemberDaraBase.h"
#include "MemberDataBase.h"

#include <string>
#include <vector>
#include <iostream>
#include <istream>
#include <algorithm>

class MatchMaker
{
private:
	MemberDataBase m_memberDataBase;
	AttributeTranslator m_attributeTranslator;

public:
	MatchMaker(const MemberDataBase& mdb, const AttributeTranslator& at)
	{
		m_memberDataBase = mdb;
		m_attributeTranslator = at;
	}

	//HUH?????
	~MatchMaker();
	std::vector<EmailCount> IdentifyRankedMatches(std::string email, int threshold) const;
};