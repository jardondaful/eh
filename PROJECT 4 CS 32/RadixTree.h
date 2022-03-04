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

class RadixTree
{
private:
	struct Node
	{
		Node(string s, vector<ValueType> v)
		{
			values = v;
			str = s;
		}
		Node(char p)
		char path;
		vector<ValueType> vals;
		vector<Node*> children;

		Node* findNode(const std::string& key) const
		{
			Node* cNode = root;
			for (char c : key)
			{
				int child;
				bool charFound = false;
				for (child = 0; child < cNode->children.size(); child++) 
				{
					if (cNode->children[child]->path == c)
					{

					}
				}
			}
		}

		void clearNode(Node* n)
		{
			if (n == nullptr)
			{
				return;
			}
			for (auto e : n->children)
			{
				clearNode(e);
			}
			delete n;
		}
		Node* root;
	};


public:
	RadixTree()
	{

	}
	~RadixTree()
	{

	}

	void insert(std::string key, const ValueType& value)
	{
		Node* cNode = root;
		for (char c : key)
		{ // iterates through key
			int child;
			bool charFound = false;
			for (child = 0; child < cNode->children.size(); child++)
			{ // iterates through children
				if (cNode->children[child]->path == c)
				{
					charFound = true;
					break;
				}
			}
			if (!charFound)
			{ // adds path if not found
				cNode->children.push_back(new Node(c));
				child = cNode->children.size() - 1;
			}
			cNode = cNode->children[child]; // continues to next level of tree
		}
		cNode->vals.push_back(value); // pushes value to the node that matches the string
	}
	ValueType* search(Std::string key)
	{
		Node* n = findNode(key);
		if (n == nullptr)
		{
			return n->vals;
		}
		else
		{
			ValueType* result;
			if (key == "")
			{
				return root->value;
			}
			for (Nde* n::root->children)
			{
				if (n->path == key[0])
				{

				}
			}
			return result;
		}
	}
}