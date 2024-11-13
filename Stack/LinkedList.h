#ifndef LINKED_LIST
#define LINKED_LIST

#include <iostream>

typedef struct Node
{
	struct Node* nextNode;
	unsigned int value;
} Node;

/* The func add node to the tail
input: double pointer to list head, pointer to new node to add
output: none.
*/
void addNode(Node** head, Node* newNode);

/* The func remove the last
input: double pointer to list head
output: the value of the removed node
*/
int removeNode(Node** head);

#endif /* LINKED_LIST */
