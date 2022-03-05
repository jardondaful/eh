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
#include

using namespace std;

bool AttributeTranslator::Load(std::string filename)
{
	ifstream in_file;

	in_file.open(filename);
	if (in_file.isopen())
	{
		string line;
		while (getline(inFile, line))
		{
			while (getline(file, line))
			{
				string arr[4];
				int i = 0;
				std::stringstream   linestream(line);
				std::string         value;

				while (getline(linestream, value, ','))
				{
					arr[i] = value;
					i++;
				}
				string original_identifier = arr[0] + arr[1];
				AttValPair compatible_pair(arr[2], arr[3]);
				m_tree.insert(original_identifier, compatible_pair);
			}
			in_file.close()
		}
	else
	{
		return false;
	}
	return true;
}

std::vector<AttValPair> AttributeTranslator::FindCompatibleAttValPairs(const AttValPair& source) const;