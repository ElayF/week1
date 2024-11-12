#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	Node* newNode = new Node;
	newNode->value = element;
	newNode->nextNode = NULL;

	addNode(&s->stack, newNode);
}

int pop(Stack* s) // Return -1 if stack is empty
{
	int returnValue = -1;
	if (NULL != s->stack)
	{
		returnValue = removeNode(&s->stack);
	}
	return returnValue;
}

void initStack(Stack* s)
{
	s->stack = NULL;
}

void cleanStack(Stack* s)
{
	s = NULL;
}

bool isEmpty(Stack* s)
{
	return NULL == s || NULL == s->stack;
}

bool isFull(Stack* s)
{
	return NULL != s && s->stack != NULL;
}