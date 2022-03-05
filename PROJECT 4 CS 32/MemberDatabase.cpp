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
#include <sstream>

using namespace std;

bool MemberDataBase::LoadDatabase(std::string filename)
{
	ifstream in_file;

	in_file.open(filename);
	if (in_file.isopen())
	{
		string line;
		while (getline(inFile, line))
		{
			
		}
		in_file.close()
	}
	else
	{
		return false;
	}
	return true;
}

std::vector<std::string> MemberDataBase:FindMatchingMembers(const AttValPair& input) const;
{

}