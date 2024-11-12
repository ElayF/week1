#include "LinkedList.h"

void addNode(Node** head, Node* newNode)
{
	Node* node = NULL;
	if (NULL == *head)
	{
		*head = newNode;
	}
	else
	{	
		node = *head;
		while (NULL != node->nextNode)
		{
			node = node->nextNode;
		}
		node->nextNode = newNode;
	}
}

int removeNode(Node** head)
{
	int returnValue = -1;
	Node* node = *head;

	if (NULL != *head && NULL == node->nextNode)
	{
		returnValue = node->value;
		delete node;
		*head = NULL;
	}
	else if (NULL != *head)
	{
		while (NULL != node->nextNode->nextNode)
		{
			node = node->nextNode;
		}
		returnValue = node->nextNode->value;
		delete node->nextNode;
		node->nextNode = NULL;
	}
	return returnValue;
}