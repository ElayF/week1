#include "LinkedList.h"

int main()
{
	Node* node1 = new Node;
	Node* node2 = new Node;
	Node* node3 = new Node;

	node1->nextNode = node2;
	node2->nextNode = node3;

	

	return 0;
}