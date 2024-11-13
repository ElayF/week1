#include "LinkedList.h"

void addNode(Node** head, Node* newNode)
{
	Node* node = NULL;

	if (NULL == *head) //check if list empty
	{
		*head = newNode; //add node at start
	}
	else
	{	
		node = *head;
		while (NULL != node->nextNode) //last node
		{
			node = node->nextNode;
		}
		node->nextNode = newNode; //add node at tail
	}
}


int removeNode(Node** head)
{
	int returnValue = -1;
	Node* node = *head;

	if (NULL != *head && NULL == node->nextNode) //check if list not empty
	{
		returnValue = node->value; //save value
		//delete node from memory
		delete node;
		*head = NULL;
	}
	else if (NULL != *head) //check if list exists
	{
		while (NULL != node->nextNode->nextNode) //last node
		{
			node = node->nextNode;
		}
		returnValue = node->nextNode->value; //save value
		//delete node
		delete node->nextNode;
		node->nextNode = NULL;
	}
	return returnValue;
}