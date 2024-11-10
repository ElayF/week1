#include "LinkedList.h"

void addNode(Node* head, Node* newNode)
{
	if (NULL == head)
	{
		head = newNode;
	}
	else
	{
		while (NULL == head->nextNode)
		{
			head = head->nextNode;
		}
		head->nextNode = newNode;
	}
}

void removeNode(Node* head)
{
	if (NULL != head)
	{
		while (NULL == head->nextNode)
		{
			head = head->nextNode;
		}
		head = NULL;
	}
}