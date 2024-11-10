#ifndef LINKED_LIST
#define LINKED_LIST

#include <iostream>

typedef struct Node
{
	struct Node* nextNode;
} Node;

void addNode(Node* head, Node* newNode);

void removeNode(Node* head);

#endif /* LINKED_LIST */
