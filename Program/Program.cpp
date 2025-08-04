#include <iostream>

using namespace std;

template <typename T>
class Set
{
private:
	struct Node
	{
		T data;

		Node * left;
		Node* right;
	};

	Node* root;
public:
	Set()
	{
		root = nullptr;
	}

};

int main()
{

	return 0;
}