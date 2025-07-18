#include <iostream>

using namespace std;

template <typename T>
class List
{
private:
	struct Node
	{
		T data;
		Node * next;
	};

	int size;
	Node * head;
public:
	List()
	{
		size = 0;
		head = nullptr;
	}

};

int main()
{

	return 0;
}