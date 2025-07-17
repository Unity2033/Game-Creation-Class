﻿#include <iostream>

using namespace std;

template <typename T>
class List
{
private:
	struct Node
	{
		T data;
		Node * next;
		Node * previous;
	};

	int size;
	Node * head;
	Node * tail;
public:
	List()
	{
		size = 0;
		head = nullptr;
		tail = nullptr;
    }

	void push_front(T data)
	{
		Node * newNode = new Node;

		newNode->data = data;
		newNode->next = nullptr;
		newNode->previous = nullptr;

		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			head->previous = newNode;
			
			newNode->next = head;

			head = newNode;
		}

		size++;
	}

	void pop_front()
	{
		if (head == nullptr)
		{
			cout << "linked list is empty" << endl;
		}
		else
		{
			Node * deleteNode = head;

			if (head == tail)
			{
				head = nullptr;
				tail = nullptr;
			}
			else
			{
				deleteNode->next->previous = nullptr;

				head = head->next;
			}

			delete deleteNode;

			size--;
		}
	}

	~List()
	{
		while (head != nullptr)
		{
			pop_front();
		}
	}
};

int main()
{
	List<int> list;

	list.push_front(10);
	list.push_front(5);
	list.push_front(1);

	list.pop_front();
	list.pop_front();
	list.pop_front();
	list.pop_front();

	return 0;
}