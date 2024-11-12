#ifndef LINKED_LIST
#define LINKED_LIST

#include <iostream>

typedef struct Node
{
	struct Node* nextNode;
	unsigned int value;
} Node;

void addNode(Node** head, Node* newNode);

int removeNode(Node** head);

#endif /* LINKED_LIST */
